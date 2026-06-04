#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D1CC511F41C497AC_METHOD_1_057988DB0B887860_OFFSET UNITYSDK_OFFSET(0x144D9AE0)
#define CLASS_1_D1CC511F41C497AC_METHOD_1_79F3A0C23F8599CE_OFFSET UNITYSDK_OFFSET(0x144D99A0)
#define CLASS_1_D1CC511F41C497AC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x144D9E70)
#define CLASS_1_D1CC511F41C497AC__CTOR_OFFSET UNITYSDK_OFFSET(0x144D9E80)

inline static constexpr unsigned int Class_1_D1CC511F41C497AC_TypeDefinitionIndex = 54734;

class Class_1_D1CC511F41C497AC : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::GameCore::EntityPosAdaptionConfig* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x30

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
