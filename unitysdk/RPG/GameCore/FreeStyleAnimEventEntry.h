#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMEVENTENTRY_METHOD_2_6906468FE33D5A73_OFFSET UNITYSDK_OFFSET(0x1DCBAA60)
#define RPG_GAMECORE_FREESTYLEANIMEVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBAB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimEventEntry_TypeDefinitionIndex = 16126;

	class FreeStyleAnimEventEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleClipName; // 0x10
		::System::Single NormalizedTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6906468FE33D5A73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimEventEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimEventEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMEVENTENTRY_METHOD_2_6906468FE33D5A73_OFFSET))(a1, a2);
		}
	};
}
