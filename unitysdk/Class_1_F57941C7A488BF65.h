#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class CommonActivityLightConeRewardGroup; }
namespace RPG::GameCore { class MusicRhythmOpticalRow; }

#define CLASS_1_F57941C7A488BF65_METHOD_1_B04082AC4095B7BB_OFFSET UNITYSDK_OFFSET(0x188AD270)
#define CLASS_1_F57941C7A488BF65_METHOD_1_C7942A221DBB53F0_OFFSET UNITYSDK_OFFSET(0x188AD680)
#define CLASS_1_F57941C7A488BF65__CTOR_OFFSET UNITYSDK_OFFSET(0x188AD7B0)

inline static constexpr unsigned int Class_1_F57941C7A488BF65_TypeDefinitionIndex = 59067;

class Class_1_F57941C7A488BF65 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57941C7A488BF65__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::CommonActivityLightConeRewardData* Method_1_B04082AC4095B7BB()
	{
		return ((::RPG::Client::CommonActivityLightConeRewardData*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F57941C7A488BF65_METHOD_1_B04082AC4095B7BB_OFFSET))();
	}

	static ::RPG::Client::CommonActivityLightConeRewardGroup* Method_1_C7942A221DBB53F0(::RPG::GameCore::MusicRhythmOpticalRow* a1, ::System::Boolean& a2)
	{
		return ((::RPG::Client::CommonActivityLightConeRewardGroup*(*)(::RPG::GameCore::MusicRhythmOpticalRow*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F57941C7A488BF65_METHOD_1_C7942A221DBB53F0_OFFSET))(a1, a2);
	}
};
