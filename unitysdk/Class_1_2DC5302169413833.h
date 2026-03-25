#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define CLASS_1_2DC5302169413833_METHOD_1_35C3B530BA8C6FB7_OFFSET UNITYSDK_OFFSET(0x8B9FB00)
#define CLASS_1_2DC5302169413833_METHOD_1_E858CC3D21102B47_OFFSET UNITYSDK_OFFSET(0x8B9FC10)
#define CLASS_1_2DC5302169413833__CTOR_OFFSET UNITYSDK_OFFSET(0x8B9FD90)

inline static constexpr unsigned int Class_1_2DC5302169413833_TypeDefinitionIndex = 51208;

class Class_1_2DC5302169413833 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DC5302169413833__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::BaseChallengeTargetData* Method_1_35C3B530BA8C6FB7(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseChallengeTargetData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DC5302169413833_METHOD_1_35C3B530BA8C6FB7_OFFSET))(a1);
	}

	static ::RPG::Client::BaseChallengeTargetData* Method_1_E858CC3D21102B47(::RPG::GameCore::ChallengeTargetConfigRow* a1)
	{
		return ((::RPG::Client::BaseChallengeTargetData*(*)(::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2DC5302169413833_METHOD_1_E858CC3D21102B47_OFFSET))(a1);
	}
};
