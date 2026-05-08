#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigSphereCollider; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_FCE1BCCAA466DD16_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1437F4F0)
#define CLASS_3_FCE1BCCAA466DD16_METHOD_3_0F1A9B687A53989F_OFFSET UNITYSDK_OFFSET(0x1437F660)
#define CLASS_3_FCE1BCCAA466DD16_METHOD_3_67D21E5E342C2D34_OFFSET UNITYSDK_OFFSET(0x1437F5D0)
#define CLASS_3_FCE1BCCAA466DD16_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1437F7E0)
#define CLASS_3_FCE1BCCAA466DD16_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1437F5E0)
#define CLASS_3_FCE1BCCAA466DD16_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1437F320)
#define CLASS_3_FCE1BCCAA466DD16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1437F540)
#define CLASS_3_FCE1BCCAA466DD16__CTOR_OFFSET UNITYSDK_OFFSET(0x1437F5C0)

inline static constexpr unsigned int Class_3_FCE1BCCAA466DD16_TypeDefinitionIndex = 68682;

class Class_3_FCE1BCCAA466DD16 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::MoleMole::Config::FightModeType Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_14 = 0x34; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_4; // 0x48
	::MoleMole::Config::ConfigSphereCollider* Field_3_8; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_5; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_7; // 0x60
	::System::Action* Field_3_11; // 0x68
	::System::Action* Field_3_10; // 0x70
	::System::Action_1<::UnityEngine::Collider*>* Field_3_13; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_3; // 0x80
	::System::Action_1<::UnityEngine::Collider*>* Field_3_12; // 0x88
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_6; // 0x90
	::Class_1_8289F2785D9AA990* Field_3_2; // 0x98
	::MoleMole::MonoConfigurableCollider* Field_3_9; // 0xA0
	::MoleMole::Config::FightModeType Field_3_1; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Config::FightModeType Method_3_67D21E5E342C2D34()
	{
		return ((::MoleMole::Config::FightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16_METHOD_3_67D21E5E342C2D34_OFFSET))(this);
	}

	static ::Class_3_FCE1BCCAA466DD16* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_FCE1BCCAA466DD16*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_0F1A9B687A53989F(::MoleMole::Config::FightModeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FightModeType))((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16_METHOD_3_0F1A9B687A53989F_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCE1BCCAA466DD16_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
