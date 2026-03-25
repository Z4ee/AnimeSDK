#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_950B873C87AB3580_OFFSET UNITYSDK_OFFSET(0x1701E650)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_E648914BB4840DAE_OFFSET UNITYSDK_OFFSET(0x1701E720)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1701E6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentAudioLanguage_TypeDefinitionIndex = 22090;

	class ByCurrentAudioLanguage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* AudioLanguage; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_950B873C87AB3580(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentAudioLanguage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentAudioLanguage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_950B873C87AB3580_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E648914BB4840DAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_E648914BB4840DAE_OFFSET))(a1, a2);
		}
	};
}
