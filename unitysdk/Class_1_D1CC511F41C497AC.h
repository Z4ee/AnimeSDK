#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D1CC511F41C497AC_METHOD_1_057988DB0B887860_OFFSET UNITYSDK_OFFSET(0xB52ABE0)
#define CLASS_1_D1CC511F41C497AC_METHOD_1_79F3A0C23F8599CE_OFFSET UNITYSDK_OFFSET(0xB52AAA0)
#define CLASS_1_D1CC511F41C497AC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB52AF70)
#define CLASS_1_D1CC511F41C497AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB52AF80)

inline static constexpr unsigned int Class_1_D1CC511F41C497AC_TypeDefinitionIndex = 58732;

class Class_1_D1CC511F41C497AC : public ::System::Object
{
public:
	// static const ::System::Single ACJCPLPFJKI; // 0x0
	::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x10
	::RPG::GameCore::EntityPosAdaptionConfig* PFPMMIEEOMI; // 0x18
	::UnityEngine::Vector3 OANHAILGOIG; // 0x20
	::System::Single NMCJLENIEFC; // 0x2C
	::System::Boolean LFJHKGPGMKN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1CC511F41C497AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_79F3A0C23F8599CE(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::GameCore::EntityPosAdaptionConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::EntityPosAdaptionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D1CC511F41C497AC_METHOD_1_79F3A0C23F8599CE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_057988DB0B887860(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1CC511F41C497AC_METHOD_1_057988DB0B887860_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1CC511F41C497AC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
