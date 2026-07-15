#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEEVENTINFO_METHOD_2_FFCA1C6E4ABE7127_OFFSET UNITYSDK_OFFSET(0x1C107B40)
#define RPG_GAMECORE_DIALOGUEEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C107CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEventInfo_TypeDefinitionIndex = 20330;

	class DialogueEventInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DialogueEventID; // 0x10
		::System::String* SuccessCustomString; // 0x18
		::System::String* FailureCustomString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FFCA1C6E4ABE7127(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueEventInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueEventInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTINFO_METHOD_2_FFCA1C6E4ABE7127_OFFSET))(a1, a2);
		}
	};
}
