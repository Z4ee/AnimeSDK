#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_METHOD_3_98342D717F0795BA_OFFSET UNITYSDK_OFFSET(0x1D2FE380)
#define RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_METHOD_3_A96D49F4C7A04FE9_OFFSET UNITYSDK_OFFSET(0x1D2FE340)
#define RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FE370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTarotBookletPageForCharater_TypeDefinitionIndex = 22104;

	class OpenTarotBookletPageForCharater : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A96D49F4C7A04FE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTarotBookletPageForCharater*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTarotBookletPageForCharater*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_METHOD_3_A96D49F4C7A04FE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98342D717F0795BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTarotBookletPageForCharater* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTarotBookletPageForCharater*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_METHOD_3_98342D717F0795BA_OFFSET))(a1, a2);
		}
	};
}
