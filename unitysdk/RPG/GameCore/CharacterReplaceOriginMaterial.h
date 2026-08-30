#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_METHOD_3_81CD33F5F24A2AD0_OFFSET UNITYSDK_OFFSET(0x1CF9DEC0)
#define RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_METHOD_3_9422C29E9BAD1ABF_OFFSET UNITYSDK_OFFSET(0x1CF9DE80)
#define RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9DEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceOriginMaterial_TypeDefinitionIndex = 23570;

	class CharacterReplaceOriginMaterial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ReplaceKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9422C29E9BAD1ABF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceOriginMaterial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceOriginMaterial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_METHOD_3_9422C29E9BAD1ABF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_81CD33F5F24A2AD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceOriginMaterial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceOriginMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEORIGINMATERIAL_METHOD_3_81CD33F5F24A2AD0_OFFSET))(a1, a2);
		}
	};
}
