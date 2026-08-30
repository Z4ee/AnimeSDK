#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreDisableReason.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreaMode.h"
#include "unitysdk/Struct_2_2790AEE4C83D2898.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_753802C34A8927F4;
class Class_1_945C969C6B974032;
class Class_3_07C3C4D2990C49EE;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_CD4A27E866D57570_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x188EE8D0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_0114131465DDDEBD_OFFSET UNITYSDK_OFFSET(0x188EEDA0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x188F2E90)
#define CLASS_2_CD4A27E866D57570_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x188F01E0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_1D120AC5E1C47468_OFFSET UNITYSDK_OFFSET(0x188F2690)
#define CLASS_2_CD4A27E866D57570_METHOD_2_1D5AAE49BE87A93F_OFFSET UNITYSDK_OFFSET(0x188EE7E0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_22998C0497F21AFB_OFFSET UNITYSDK_OFFSET(0x188EF0F0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0x188EE610)
#define CLASS_2_CD4A27E866D57570_METHOD_2_3A36E8A76EFBFFF8_OFFSET UNITYSDK_OFFSET(0x188F1E20)
#define CLASS_2_CD4A27E866D57570_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x188F19A0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_6E4AEEA2C24AB139_OFFSET UNITYSDK_OFFSET(0x188F23D0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_6F2F4847F17B2CF1_OFFSET UNITYSDK_OFFSET(0x188F03D0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_71D946DE9F9AEBBA_OFFSET UNITYSDK_OFFSET(0x188EE4D0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_791E596DF497E715_OFFSET UNITYSDK_OFFSET(0x188F2940)
#define CLASS_2_CD4A27E866D57570_METHOD_2_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0x188F2D70)
#define CLASS_2_CD4A27E866D57570_METHOD_2_8266FD654EB5E86F_OFFSET UNITYSDK_OFFSET(0x188EE6B0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_A051C6CEBB2612FF_OFFSET UNITYSDK_OFFSET(0x188F1040)
#define CLASS_2_CD4A27E866D57570_METHOD_2_AF268A5D9AD726B3_OFFSET UNITYSDK_OFFSET(0x188F0EE0)
#define CLASS_2_CD4A27E866D57570_METHOD_2_B6EDEB2AABF81D99_OFFSET UNITYSDK_OFFSET(0x188F0340)
#define CLASS_2_CD4A27E866D57570_METHOD_2_B9D141925F5D82A7_OFFSET UNITYSDK_OFFSET(0x188F0D10)
#define CLASS_2_CD4A27E866D57570_METHOD_2_C3AAC6C87643AD8E_OFFSET UNITYSDK_OFFSET(0x188F2A60)
#define CLASS_2_CD4A27E866D57570_METHOD_2_D4E47DE88D785358_OFFSET UNITYSDK_OFFSET(0x188F1A30)
#define CLASS_2_CD4A27E866D57570_METHOD_2_DD2DD0ABB2D73678_OFFSET UNITYSDK_OFFSET(0x188F0460)
#define CLASS_2_CD4A27E866D57570_METHOD_2_F2C8A9D880BBBF6E_OFFSET UNITYSDK_OFFSET(0x188F0270)
#define CLASS_2_CD4A27E866D57570_ONINIT_OFFSET UNITYSDK_OFFSET(0x188EE8E0)
#define CLASS_2_CD4A27E866D57570_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x188EEA40)
#define CLASS_2_CD4A27E866D57570_TICK_OFFSET UNITYSDK_OFFSET(0x188EEFE0)
#define CLASS_2_CD4A27E866D57570__CCTOR_OFFSET UNITYSDK_OFFSET(0x188F2FC0)
#define CLASS_2_CD4A27E866D57570__CTOR_OFFSET UNITYSDK_OFFSET(0x188F2F70)

inline static constexpr unsigned int Class_2_CD4A27E866D57570_TypeDefinitionIndex = 53760;

class Class_2_CD4A27E866D57570 : public ::Class_1_5BBB2050B3F3F683
{
public:
	static ::System::String** StaticGet_NGCPHLMENKB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD4A27E866D57570_TypeDefinitionIndex)->GetStaticField(0x1F30);
	}
	static ::System::String** StaticGet_IHLDCANJGGJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD4A27E866D57570_TypeDefinitionIndex)->GetStaticField(0x1F38);
	}
	static ::System::Single* StaticGet_DLIHMBPBLMK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD4A27E866D57570_TypeDefinitionIndex)->GetStaticField(0xAD0);
	}
	static ::System::Single* StaticGet_HDNLOEIKJJA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD4A27E866D57570_TypeDefinitionIndex)->GetStaticField(0xAD4);
	}
	static ::System::Int32* StaticGet_JANAFKOGLFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD4A27E866D57570_TypeDefinitionIndex)->GetStaticField(0xAD8);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_753802C34A8927F4*>* DCFIANFMLFC; // 0x20
	::Il2CppArray<::UnityEngine::Collider*>* CPBGNCJOOEO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_2790AEE4C83D2898>* AIGLLHDMBLA; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DIICJGAAJCA; // 0x38
	::Class_3_07C3C4D2990C49EE* OHIADJMBNMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570__CCTOR_OFFSET))();
	}

	::System::Void Method_2_71D946DE9F9AEBBA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_71D946DE9F9AEBBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_39F4A4A411885283_OFFSET))(this, a1);
	}

	::System::Void Method_2_8266FD654EB5E86F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreDisableReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreDisableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_8266FD654EB5E86F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1D5AAE49BE87A93F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaMode))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_1D5AAE49BE87A93F_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_ONUNINIT_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_22998C0497F21AFB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_22998C0497F21AFB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::LightningStrikeAreaMode Method_2_6F2F4847F17B2CF1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LightningStrikeAreaMode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_6F2F4847F17B2CF1_OFFSET))(this, a1);
	}

	::RPG::GameCore::LightningStrikeAreDisableReason Method_2_B6EDEB2AABF81D99(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LightningStrikeAreDisableReason(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_B6EDEB2AABF81D99_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F2C8A9D880BBBF6E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_F2C8A9D880BBBF6E_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_DD2DD0ABB2D73678(::Class_1_753802C34A8927F4* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_753802C34A8927F4*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_DD2DD0ABB2D73678_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF268A5D9AD726B3(::System::String* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_AF268A5D9AD726B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B9D141925F5D82A7(::Class_1_753802C34A8927F4* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_753802C34A8927F4*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_B9D141925F5D82A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D4E47DE88D785358(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaConfig*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_D4E47DE88D785358_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A36E8A76EFBFFF8(::RPG::PoolList_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_3A36E8A76EFBFFF8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_6E4AEEA2C24AB139(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_6E4AEEA2C24AB139_OFFSET))(this, a1);
	}

	::System::Void Method_2_A051C6CEBB2612FF(::Class_1_753802C34A8927F4* a1, ::Class_1_945C969C6B974032* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_753802C34A8927F4*, ::Class_1_945C969C6B974032*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_A051C6CEBB2612FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_791E596DF497E715(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_791E596DF497E715_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3AAC6C87643AD8E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2, ::Class_1_753802C34A8927F4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaConfig*, ::Class_1_753802C34A8927F4*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_C3AAC6C87643AD8E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1D120AC5E1C47468(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::GameEntityList* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_1D120AC5E1C47468_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0114131465DDDEBD(::Class_1_753802C34A8927F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_753802C34A8927F4*))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_0114131465DDDEBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD4A27E866D57570_METHOD_2_7EE99EE6AA394745_OFFSET))(this, a1);
	}
};
