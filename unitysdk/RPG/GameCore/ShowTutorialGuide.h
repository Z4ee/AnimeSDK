#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALGUIDE_METHOD_3_628650E90EA63604_OFFSET UNITYSDK_OFFSET(0x17705B00)
#define RPG_GAMECORE_SHOWTUTORIALGUIDE_METHOD_3_E971ED3AAF37953F_OFFSET UNITYSDK_OFFSET(0x17705B80)
#define RPG_GAMECORE_SHOWTUTORIALGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17705B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialGuide_TypeDefinitionIndex = 22391;

	class ShowTutorialGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GuideID; // 0x18
		::System::Boolean WaitForExit; // 0x1C
		::System::String* Param; // 0x20
		::System::Boolean SkipIfAlreadySeen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_628650E90EA63604(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialGuide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialGuide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDE_METHOD_3_628650E90EA63604_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E971ED3AAF37953F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialGuide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDE_METHOD_3_E971ED3AAF37953F_OFFSET))(a1, a2);
		}
	};
}
