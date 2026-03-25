#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAWORKROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170ADA30)
#define RPG_GAMECORE_CHIMERAWORKROUNDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170ADDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkRoundRow_TypeDefinitionIndex = 11874;

	class ChimeraWorkRoundRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WorkList; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendedArrangementPresets; // 0x18
		::Il2CppArray<::System::UInt32>* OptionList; // 0x20
		::System::String* ArrangeHintImage; // 0x28
		::Il2CppArray<::System::UInt32>* NewChimeraList; // 0x30
		::System::UInt32 DisplayTeamID; // 0x38
		::System::Boolean IsSSR; // 0x3C
		::System::UInt32 RoundID; // 0x40
		::RPG::Client::TextID WarningText; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraWorkRoundRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkRoundRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
