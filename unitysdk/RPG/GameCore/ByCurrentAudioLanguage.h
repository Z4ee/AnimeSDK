#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_37CE5D358D59233F_OFFSET UNITYSDK_OFFSET(0x1BBCFAB0)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_45B7EF9E7631941D_OFFSET UNITYSDK_OFFSET(0x1BBCFCA0)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_E648914BB4840DAE_OFFSET UNITYSDK_OFFSET(0x1BBCFAF0)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_F13E99E5FDE56B3A_OFFSET UNITYSDK_OFFSET(0x1BBCFC70)
#define RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCFAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentAudioLanguage_TypeDefinitionIndex = 23540;

	class ByCurrentAudioLanguage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* AudioLanguage; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_37CE5D358D59233F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentAudioLanguage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentAudioLanguage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_37CE5D358D59233F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E648914BB4840DAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_E648914BB4840DAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F13E99E5FDE56B3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_F13E99E5FDE56B3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45B7EF9E7631941D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTAUDIOLANGUAGE_METHOD_4_45B7EF9E7631941D_OFFSET))(a1, a2);
		}
	};
}
