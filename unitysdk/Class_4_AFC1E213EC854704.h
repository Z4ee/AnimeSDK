#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_437010CBFFA61293.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_2_CC9EB486A8D01931;
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_4_AFC1E213EC854704_METHOD_4_0568F602D6B51313_OFFSET UNITYSDK_OFFSET(0x188BFC70)
#define CLASS_4_AFC1E213EC854704_METHOD_4_3FD05CD02F9DF843_OFFSET UNITYSDK_OFFSET(0x188BF900)
#define CLASS_4_AFC1E213EC854704_METHOD_4_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x188BFA20)
#define CLASS_4_AFC1E213EC854704_METHOD_4_9F72054405DC40C1_OFFSET UNITYSDK_OFFSET(0x188BF7C0)
#define CLASS_4_AFC1E213EC854704__CTOR_OFFSET UNITYSDK_OFFSET(0x188BFCC0)
#define CLASS_4_AFC1E213EC854704__ONBIND_OFFSET UNITYSDK_OFFSET(0x188BF750)

inline static constexpr unsigned int Class_4_AFC1E213EC854704_TypeDefinitionIndex = 68603;

class Class_4_AFC1E213EC854704 : public ::Class_3_437010CBFFA61293
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	// static const ::System::String* Field_4_1; // 0x0
	// static const ::System::String* Field_4_2; // 0x0
	::UnityEngine::ParticleSystem* Field_4_3; // 0x128

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFC1E213EC854704__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFC1E213EC854704__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_9F72054405DC40C1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_4_AFC1E213EC854704_METHOD_4_9F72054405DC40C1_OFFSET))(this, a1);
	}

	::Class_2_CC9EB486A8D01931* Method_4_3FD05CD02F9DF843(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_2_CC9EB486A8D01931*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_4_AFC1E213EC854704_METHOD_4_3FD05CD02F9DF843_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFC1E213EC854704_METHOD_4_85377D41FEE05B66_OFFSET))(this);
	}

	::System::String* Method_4_0568F602D6B51313(::RPG::GameCore::DamageTypeRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + CLASS_4_AFC1E213EC854704_METHOD_4_0568F602D6B51313_OFFSET))(this, a1);
	}
};
