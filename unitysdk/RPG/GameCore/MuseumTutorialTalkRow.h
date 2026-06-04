#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMTUTORIALTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199C1D80)
#define RPG_GAMECORE_MUSEUMTUTORIALTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199C1E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTutorialTalkRow_TypeDefinitionIndex = 13584;

	class MuseumTutorialTalkRow : public ::System::Object
	{
	public:
		::System::String* TriggerCustomString; // 0x10
		::System::UInt32 TriggerMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTUTORIALTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumTutorialTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumTutorialTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTUTORIALTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
