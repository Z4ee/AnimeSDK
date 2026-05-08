#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_41227C43B8705FA0.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8.h"
#include "unitysdk/Struct_2_EADB70559B2B5513.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D5FDCFAC15CBA6B;
class Class_1_D4E3BB7FB7BD8B59;
class Class_1_E795C5D5DDF30620;
class Class_1_FE4DC5D381092977;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_4076EB58F5C5BF5E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13503240)
#define CLASS_3_4076EB58F5C5BF5E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13503820)
#define CLASS_3_4076EB58F5C5BF5E_METHOD_3_AC02619A2D3DB99E_OFFSET UNITYSDK_OFFSET(0x135036D0)
#define CLASS_3_4076EB58F5C5BF5E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x135038B0)
#define CLASS_3_4076EB58F5C5BF5E_METHOD_3_E901BFC0790743CF_OFFSET UNITYSDK_OFFSET(0x13503930)
#define CLASS_3_4076EB58F5C5BF5E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13502E70)
#define CLASS_3_4076EB58F5C5BF5E__CCTOR_OFFSET UNITYSDK_OFFSET(0x13503290)
#define CLASS_3_4076EB58F5C5BF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x13503310)

inline static constexpr unsigned int Class_3_4076EB58F5C5BF5E_TypeDefinitionIndex = 42181;

class Class_3_4076EB58F5C5BF5E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x40; // 0x0
	// static const ::System::Int32 Field_3_17 = 0x3A; // 0x0
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_15; // 0x50
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_0; // 0x58
	::System::Collections::Generic::List_1<::Class_1_FE4DC5D381092977*>* Field_3_9; // 0x60
	::System::Collections::Generic::List_1<::Class_1_D4E3BB7FB7BD8B59*>* Field_3_4; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0D5FDCFAC15CBA6B*>* Field_3_7; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::MonoConfigurableCollider*>* Field_3_3; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_3_13; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_14; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0D5FDCFAC15CBA6B*>* Field_3_8; // 0x90
	::UnityEngine::Vector3 Field_3_6; // 0x98
	::System::Boolean Field_3_12; // 0xA4
	::System::Boolean Field_3_16; // 0xA5
	::System::Boolean Field_3_10; // 0xA6
	::Enum_3_5EA2B17DF83E32C8 Field_3_11; // 0xA8
	::UnityEngine::Vector3 Field_3_5; // 0xAC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E_GETCLASSID_OFFSET))(this);
	}

	::Struct_2_EADB70559B2B5513 Method_3_AC02619A2D3DB99E(::Class_1_E795C5D5DDF30620* a1, ::MoleMole::Config::ConfigTimeDrivenAttackCollider* a2, ::Enum_3_41227C43B8705FA0 a3, ::MoleMole::MonoConfigurableCollider* a4, ::System::Int32 a5)
	{
		return ((::Struct_2_EADB70559B2B5513(*)(::PVOID, ::Class_1_E795C5D5DDF30620*, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::Enum_3_41227C43B8705FA0, ::MoleMole::MonoConfigurableCollider*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E_METHOD_3_AC02619A2D3DB99E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_4076EB58F5C5BF5E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_4076EB58F5C5BF5E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Class_3_4076EB58F5C5BF5E* Method_3_E901BFC0790743CF(::MoleMole::MonoConfigurableCollider* a1)
	{
		return ((::Class_3_4076EB58F5C5BF5E*(*)(::PVOID, ::MoleMole::MonoConfigurableCollider*))((::PBYTE)hIl2Cpp + CLASS_3_4076EB58F5C5BF5E_METHOD_3_E901BFC0790743CF_OFFSET))(this, a1);
	}
};
