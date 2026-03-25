#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ADC27DBA8547EDD7;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_235EAE06A792DE91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11662CB0)
#define CLASS_2_235EAE06A792DE91_GET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0x1166C4B0)
#define CLASS_2_235EAE06A792DE91_GET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0x1166C4E0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_04DB56F2FDF55A44_OFFSET UNITYSDK_OFFSET(0x11667650)
#define CLASS_2_235EAE06A792DE91_METHOD_2_0BCAB7E812F96A9A_OFFSET UNITYSDK_OFFSET(0x116656F0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_0DE20920A20DC5C6_OFFSET UNITYSDK_OFFSET(0x1166AE60)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1108E4162020BFB4_OFFSET UNITYSDK_OFFSET(0x1166A330)
#define CLASS_2_235EAE06A792DE91_METHOD_2_14285EF51C6027C6_OFFSET UNITYSDK_OFFSET(0x1166C0B0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1665286EC9959266_OFFSET UNITYSDK_OFFSET(0x11666B60)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1E9624F772249C88_OFFSET UNITYSDK_OFFSET(0x11669080)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1F72D07CE2975E23_OFFSET UNITYSDK_OFFSET(0x11665970)
#define CLASS_2_235EAE06A792DE91_METHOD_2_2414EBE995DF49AE_OFFSET UNITYSDK_OFFSET(0x1166BD40)
#define CLASS_2_235EAE06A792DE91_METHOD_2_3A8C025796B96AED_OFFSET UNITYSDK_OFFSET(0x11668010)
#define CLASS_2_235EAE06A792DE91_METHOD_2_452B5B092C3BE78A_OFFSET UNITYSDK_OFFSET(0x11667100)
#define CLASS_2_235EAE06A792DE91_METHOD_2_4EA1941ECFCE1F02_OFFSET UNITYSDK_OFFSET(0x116637D0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_6D3B50788C4B1B4C_OFFSET UNITYSDK_OFFSET(0x11666AB0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_76D6A92B996F4F67_OFFSET UNITYSDK_OFFSET(0x1166B520)
#define CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_1_OFFSET UNITYSDK_OFFSET(0x11667C50)
#define CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_OFFSET UNITYSDK_OFFSET(0x116631C0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_7C68461F9C985D7E_OFFSET UNITYSDK_OFFSET(0x11664BF0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_8B60647C42B5325B_OFFSET UNITYSDK_OFFSET(0x11665B00)
#define CLASS_2_235EAE06A792DE91_METHOD_2_8C54EA8B0C7D0A02_OFFSET UNITYSDK_OFFSET(0x116665A0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_8F12C1CECBAB5687_OFFSET UNITYSDK_OFFSET(0x11669C60)
#define CLASS_2_235EAE06A792DE91_METHOD_2_99E958150EF58A00_OFFSET UNITYSDK_OFFSET(0x1166B280)
#define CLASS_2_235EAE06A792DE91_METHOD_2_9A7531CE64BE51FF_OFFSET UNITYSDK_OFFSET(0x11663530)
#define CLASS_2_235EAE06A792DE91_METHOD_2_AD80BF475A7B5AC7_OFFSET UNITYSDK_OFFSET(0x11662E20)
#define CLASS_2_235EAE06A792DE91_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x11666410)
#define CLASS_2_235EAE06A792DE91_METHOD_2_C872FAC3FDAB163B_OFFSET UNITYSDK_OFFSET(0x116672B0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D20DE86217D00385_OFFSET UNITYSDK_OFFSET(0x11663B30)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D2CE74D280954825_OFFSET UNITYSDK_OFFSET(0x11667830)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D39733AC259CBE01_OFFSET UNITYSDK_OFFSET(0x11663DA0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D3B6A3B6B8E9E6F5_OFFSET UNITYSDK_OFFSET(0x11662EA0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D4F301BA5EAC50B8_OFFSET UNITYSDK_OFFSET(0x11669360)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D7C23D26A99F5611_OFFSET UNITYSDK_OFFSET(0x11664330)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D932D36A241796D9_OFFSET UNITYSDK_OFFSET(0x116652A0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x11662D50)
#define CLASS_2_235EAE06A792DE91_METHOD_2_F7A981239F3BA361_OFFSET UNITYSDK_OFFSET(0x11668790)
#define CLASS_2_235EAE06A792DE91_SET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0x1166C4A0)
#define CLASS_2_235EAE06A792DE91_SET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0x1166C4D0)
#define CLASS_2_235EAE06A792DE91__CTOR_OFFSET UNITYSDK_OFFSET(0x11662AF0)
#define CLASS_2_235EAE06A792DE91___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1166C500)

inline static constexpr unsigned int Class_2_235EAE06A792DE91_TypeDefinitionIndex = 62923;

class Class_2_235EAE06A792DE91 : public ::RPG::Client::LittleGame::SimpleViewService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::Class_3_F4528A5C0F861AF2* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_0; // 0x38
	::Class_2_43D1AA62A6D00FFF* Field_2_3; // 0x40
	::RPG::GameCore::GameEntity* Field_2_5; // 0x48
	::UnityEngine::Vector3 _EntryPosition_k__BackingField; // 0x50
	::UnityEngine::Vector3 _EntryRotation_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_43D1AA62A6D00FFF* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_AD80BF475A7B5AC7()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_AD80BF475A7B5AC7_OFFSET))(this);
	}

	::System::Void Method_2_D3B6A3B6B8E9E6F5(::System::String* a1, ::System::Single a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Transform*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D3B6A3B6B8E9E6F5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_76FE32F81D21C2C7(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A7531CE64BE51FF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_9A7531CE64BE51FF_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_4EA1941ECFCE1F02(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_4EA1941ECFCE1F02_OFFSET))(this, a1);
	}

	::System::Void Method_2_D20DE86217D00385(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D20DE86217D00385_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D39733AC259CBE01(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D39733AC259CBE01_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7C23D26A99F5611(::RPG::GameCore::RestaurantSpecialCustomerRow* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSpecialCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D7C23D26A99F5611_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C68461F9C985D7E(::RPG::GameCore::RestaurantCustomerRow* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_7C68461F9C985D7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D932D36A241796D9(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D932D36A241796D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F72D07CE2975E23(::RPG::Client::ElfRestaurantEmployeeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1F72D07CE2975E23_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_6D3B50788C4B1B4C(::RPG::Client::ElfRestaurantEmployeeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_6D3B50788C4B1B4C_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C54EA8B0C7D0A02(::RPG::GameCore::RestaurantEmployeeRow* a1, ::Class_1_ADC27DBA8547EDD7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeRow*, ::Class_1_ADC27DBA8547EDD7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_8C54EA8B0C7D0A02_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8B60647C42B5325B(::RPG::Client::ElfRestaurantEmployeeData* a1, ::Class_1_ADC27DBA8547EDD7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*, ::Class_1_ADC27DBA8547EDD7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_8B60647C42B5325B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1665286EC9959266(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1665286EC9959266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BCAB7E812F96A9A(::UnityEngine::GameObject* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_0BCAB7E812F96A9A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::LevelNPCInfo* Method_2_452B5B092C3BE78A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_452B5B092C3BE78A_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::String*>* Method_2_C872FAC3FDAB163B(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_C872FAC3FDAB163B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_04DB56F2FDF55A44(::RPG::GameCore::CharacterReplaceMaterialRenderList* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialRenderList*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_04DB56F2FDF55A44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2CE74D280954825(::Class_1_ADC27DBA8547EDD7* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADC27DBA8547EDD7*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D2CE74D280954825_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_76FE32F81D21C2C7_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3A8C025796B96AED(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_3A8C025796B96AED_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7A981239F3BA361(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_F7A981239F3BA361_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D4F301BA5EAC50B8(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D4F301BA5EAC50B8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1E9624F772249C88(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1E9624F772249C88_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_8F12C1CECBAB5687(::System::UInt32 a1, ::RPG::GameCore::LittleGameEntityConfig* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_8F12C1CECBAB5687_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_1108E4162020BFB4(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::RestaurantFacilityType a3, ::RPG::GameCore::LittleGameEntityConfig* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RestaurantFacilityType, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1108E4162020BFB4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0DE20920A20DC5C6(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_0DE20920A20DC5C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_99E958150EF58A00(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_99E958150EF58A00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_76D6A92B996F4F67(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_76D6A92B996F4F67_OFFSET))(this, a1);
	}

	::System::Void Method_2_2414EBE995DF49AE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_2414EBE995DF49AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_14285EF51C6027C6(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_14285EF51C6027C6_OFFSET))(this, a1);
	}

	::System::Void set_EntryPosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_SET_ENTRYPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EntryPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_GET_ENTRYPOSITION_OFFSET))(this);
	}

	::System::Void set_EntryRotation(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_SET_ENTRYROTATION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EntryRotation()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_GET_ENTRYROTATION_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
