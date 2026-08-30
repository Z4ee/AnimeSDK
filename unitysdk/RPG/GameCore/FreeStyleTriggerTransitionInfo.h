#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO_METHOD_2_85E2EB731A15303F_OFFSET UNITYSDK_OFFSET(0x1D11BE30)
#define RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11BF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerTransitionInfo_TypeDefinitionIndex = 16746;

	class FreeStyleTriggerTransitionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* NextUniqueName; // 0x10
		::System::Single Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_85E2EB731A15303F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTriggerTransitionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTriggerTransitionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERTRANSITIONINFO_METHOD_2_85E2EB731A15303F_OFFSET))(a1, a2);
		}
	};
}
