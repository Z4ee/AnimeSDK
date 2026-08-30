#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLESIMPLETALKITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDA4F220)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleSimpleTalkItemData_TypeDefinitionIndex = 66151;

	class PenaconyEndmostChronicleSimpleTalkItemData : public ::System::Object
	{
	public:
		::System::Single BlockTime; // 0x10
		::System::UInt32 SentenceID; // 0x14
		::System::Single Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLESIMPLETALKITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
