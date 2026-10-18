#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client::StoryToken { class StoryTokenActivityData; }

#define CLASS_2_0107C8345F1C32B7_GET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xC4A7F60)
#define CLASS_2_0107C8345F1C32B7_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xC4A7ED0)
#define CLASS_2_0107C8345F1C32B7_METHOD_2_B4A91A4ACDF9D75F_OFFSET UNITYSDK_OFFSET(0xC4A7E50)
#define CLASS_2_0107C8345F1C32B7_SET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xC4A7F70)
#define CLASS_2_0107C8345F1C32B7__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A7F80)

inline static constexpr unsigned int Class_2_0107C8345F1C32B7_TypeDefinitionIndex = 74389;

class Class_2_0107C8345F1C32B7 : public ::RPG::Client::BaseModule
{
public:
	::RPG::Client::StoryToken::StoryTokenActivityData* _CurrentActivityData_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7__CTOR_OFFSET))(this);
	}

	static ::Class_2_0107C8345F1C32B7* Method_2_B4A91A4ACDF9D75F()
	{
		return ((::Class_2_0107C8345F1C32B7*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7_METHOD_2_B4A91A4ACDF9D75F_OFFSET))();
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::Client::StoryToken::StoryTokenActivityData* get_CurrentActivityData()
	{
		return ((::RPG::Client::StoryToken::StoryTokenActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7_GET_CURRENTACTIVITYDATA_OFFSET))(this);
	}

	::System::Void set_CurrentActivityData(::RPG::Client::StoryToken::StoryTokenActivityData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryToken::StoryTokenActivityData*))((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7_SET_CURRENTACTIVITYDATA_OFFSET))(this, a1);
	}
};
