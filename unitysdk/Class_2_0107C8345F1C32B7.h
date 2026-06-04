#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client::StoryToken { class StoryTokenActivityData; }

#define CLASS_2_0107C8345F1C32B7_GET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xB29B6F0)
#define CLASS_2_0107C8345F1C32B7_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0xB29B5F0)
#define CLASS_2_0107C8345F1C32B7_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xB29B650)
#define CLASS_2_0107C8345F1C32B7_SET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xB29B700)
#define CLASS_2_0107C8345F1C32B7__CTOR_OFFSET UNITYSDK_OFFSET(0xB29B710)

inline static constexpr unsigned int Class_2_0107C8345F1C32B7_TypeDefinitionIndex = 69470;

class Class_2_0107C8345F1C32B7 : public ::RPG::Client::BaseModule
{
public:
	::RPG::Client::StoryToken::StoryTokenActivityData* _CurrentActivityData_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7__CTOR_OFFSET))(this);
	}

	static ::Class_2_0107C8345F1C32B7* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_0107C8345F1C32B7*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7_METHOD_2_64B6514CFF8F8D76_OFFSET))();
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0107C8345F1C32B7_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
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
