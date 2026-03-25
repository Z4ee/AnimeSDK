#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_072464205E5547B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114F1140)
#define CLASS_1_072464205E5547B5_GET_PROPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x114F4540)
#define CLASS_1_072464205E5547B5_METHOD_1_057F7750D978EBB3_OFFSET UNITYSDK_OFFSET(0x114F3090)
#define CLASS_1_072464205E5547B5_METHOD_1_065C18D5DF0FE21E_OFFSET UNITYSDK_OFFSET(0x114F2B30)
#define CLASS_1_072464205E5547B5_METHOD_1_08F3C9CE9639741E_OFFSET UNITYSDK_OFFSET(0x114F2FB0)
#define CLASS_1_072464205E5547B5_METHOD_1_10626A8EF67FC79B_OFFSET UNITYSDK_OFFSET(0x114F4200)
#define CLASS_1_072464205E5547B5_METHOD_1_11204FB96892C531_OFFSET UNITYSDK_OFFSET(0x114F4010)
#define CLASS_1_072464205E5547B5_METHOD_1_129D7877BF66A75B_OFFSET UNITYSDK_OFFSET(0x114F3020)
#define CLASS_1_072464205E5547B5_METHOD_1_1827A6C4F3AD19AB_OFFSET UNITYSDK_OFFSET(0x114F1490)
#define CLASS_1_072464205E5547B5_METHOD_1_2055E356167A6E24_OFFSET UNITYSDK_OFFSET(0x114F1420)
#define CLASS_1_072464205E5547B5_METHOD_1_21CDF8CB708F194D_OFFSET UNITYSDK_OFFSET(0x114F4470)
#define CLASS_1_072464205E5547B5_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x114F2D10)
#define CLASS_1_072464205E5547B5_METHOD_1_2F44624B7E169EF4_OFFSET UNITYSDK_OFFSET(0x114F2750)
#define CLASS_1_072464205E5547B5_METHOD_1_392955CD9A624B0C_OFFSET UNITYSDK_OFFSET(0x114F4560)
#define CLASS_1_072464205E5547B5_METHOD_1_45EAB6EE994942F8_OFFSET UNITYSDK_OFFSET(0x114F1350)
#define CLASS_1_072464205E5547B5_METHOD_1_465D15229B532976_OFFSET UNITYSDK_OFFSET(0x114F2F20)
#define CLASS_1_072464205E5547B5_METHOD_1_514CF6AA3E828269_OFFSET UNITYSDK_OFFSET(0x114F34D0)
#define CLASS_1_072464205E5547B5_METHOD_1_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x114F2D70)
#define CLASS_1_072464205E5547B5_METHOD_1_836B825FBC821E0E_OFFSET UNITYSDK_OFFSET(0x114F4340)
#define CLASS_1_072464205E5547B5_METHOD_1_8C7AA876B0540908_OFFSET UNITYSDK_OFFSET(0x114F23A0)
#define CLASS_1_072464205E5547B5_METHOD_1_94777C779A30FC56_OFFSET UNITYSDK_OFFSET(0x114F16C0)
#define CLASS_1_072464205E5547B5_METHOD_1_9995BC60352EC353_OFFSET UNITYSDK_OFFSET(0x114F2070)
#define CLASS_1_072464205E5547B5_METHOD_1_BCD7A8F598773C0B_OFFSET UNITYSDK_OFFSET(0x114F1560)
#define CLASS_1_072464205E5547B5_METHOD_1_C748641754FB18AD_OFFSET UNITYSDK_OFFSET(0x114F1B60)
#define CLASS_1_072464205E5547B5_METHOD_1_CA1E0FA1865267BB_OFFSET UNITYSDK_OFFSET(0x114F2590)
#define CLASS_1_072464205E5547B5_METHOD_1_DE33BF14C753119C_OFFSET UNITYSDK_OFFSET(0x114F1640)
#define CLASS_1_072464205E5547B5_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x114F3E50)
#define CLASS_1_072464205E5547B5_METHOD_1_F0D5F80801D888EE_OFFSET UNITYSDK_OFFSET(0x114F3C20)
#define CLASS_1_072464205E5547B5_METHOD_1_F74BFDF8D1B01B75_OFFSET UNITYSDK_OFFSET(0x114F32E0)
#define CLASS_1_072464205E5547B5_SET_PROPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x114F4550)
#define CLASS_1_072464205E5547B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x114F4770)
#define CLASS_1_072464205E5547B5__CTOR_OFFSET UNITYSDK_OFFSET(0x114F0F40)

inline static constexpr unsigned int Class_1_072464205E5547B5_TypeDefinitionIndex = 49232;

class Class_1_072464205E5547B5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_12()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_072464205E5547B5_TypeDefinitionIndex)->GetStaticField(0x37A20);
	}
	static ::System::Boolean* StaticGet_Field_1_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_072464205E5547B5_TypeDefinitionIndex)->GetStaticField(0x111F0);
	}
	::RPG::GameCore::HoyoTag* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _PropEntityList_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_1_10; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Matrix4x4>* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_4; // 0x40
	::RPG::GameCore::GameWorld* Field_1_7; // 0x48
	::System::Boolean Field_1_5; // 0x50
	::System::Boolean Field_1_0; // 0x51
	::RPG::GameCore::CharacterVisibleReason Field_1_2; // 0x52

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PropConfig* Method_1_45EAB6EE994942F8(::RPG::GameCore::PropRow* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::RPG::GameCore::PropConfig*(*)(::PVOID, ::RPG::GameCore::PropRow*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_45EAB6EE994942F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2055E356167A6E24(::RPG::GameCore::PropComponent* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_2055E356167A6E24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1827A6C4F3AD19AB(::RPG::GameCore::PropComponent* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_1827A6C4F3AD19AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCD7A8F598773C0B(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_BCD7A8F598773C0B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE33BF14C753119C(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_DE33BF14C753119C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_94777C779A30FC56(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::System::String* a3, ::UnityEngine::GameObject* a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::MVector3 a9, ::RPG::Client::MapPropDef* a10, ::System::String* a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12, ::RPG::GameCore::EntityClassifyType a13, ::System::Boolean a14, ::RPG::Client::OpenWorld::StreamingItemData* a15, ::System::Boolean a16)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::System::String*, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::RPG::Client::MapPropDef*, ::System::String*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityClassifyType, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_94777C779A30FC56_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_1_C748641754FB18AD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_C748641754FB18AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9995BC60352EC353(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_9995BC60352EC353_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C7AA876B0540908(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_8C7AA876B0540908_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CA1E0FA1865267BB(::System::String* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_CA1E0FA1865267BB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_1_2F44624B7E169EF4(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_2F44624B7E169EF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_1_465D15229B532976(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_465D15229B532976_OFFSET))(this, a1);
	}

	::System::Void Method_1_065C18D5DF0FE21E(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_065C18D5DF0FE21E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_08F3C9CE9639741E(::RPG::Client::MapProp* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_08F3C9CE9639741E_OFFSET))(this, a1);
	}

	::System::Void Method_1_129D7877BF66A75B(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_129D7877BF66A75B_OFFSET))(this, a1);
	}

	::System::Void Method_1_057F7750D978EBB3(::RPG::GameCore::TeamType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_057F7750D978EBB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F74BFDF8D1B01B75(::RPG::GameCore::TeamType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_F74BFDF8D1B01B75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_514CF6AA3E828269(::RPG::GameCore::CharacterVisibleReason a1, ::RPG::GameCore::HoyoTag* a2, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::RPG::GameCore::HoyoTag*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_514CF6AA3E828269_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F0D5F80801D888EE(::RPG::GameCore::CharacterVisibleReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_F0D5F80801D888EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_11204FB96892C531(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_11204FB96892C531_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10626A8EF67FC79B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_10626A8EF67FC79B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_836B825FBC821E0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_836B825FBC821E0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_21CDF8CB708F194D(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_21CDF8CB708F194D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_PropEntityList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_GET_PROPENTITYLIST_OFFSET))(this);
	}

	::System::Void set_PropEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_SET_PROPENTITYLIST_OFFSET))(this, value);
	}

	static ::System::String* Method_1_392955CD9A624B0C(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_072464205E5547B5_METHOD_1_392955CD9A624B0C_OFFSET))(a1, a2);
	}
};
