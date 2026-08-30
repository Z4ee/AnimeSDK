#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_19686E0819704134_OFFSET UNITYSDK_OFFSET(0x1CDA64C0)
#define RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_3548E7C880C5C4F7_OFFSET UNITYSDK_OFFSET(0x1CDA6700)
#define RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_D571A3C9CA182421_OFFSET UNITYSDK_OFFSET(0x1CDA6470)
#define RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_FDD9B3E6E4EE6D20_OFFSET UNITYSDK_OFFSET(0x1CDA66C0)
#define RPG_GAMECORE_BYISINSTORYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA64B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInStoryMode_TypeDefinitionIndex = 20345;

	class ByIsInStoryMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CheckGlobal; // 0x20
		::System::Boolean CheckOwnerEntity; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D571A3C9CA182421(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInStoryMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInStoryMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_D571A3C9CA182421_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19686E0819704134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_19686E0819704134_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDD9B3E6E4EE6D20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_FDD9B3E6E4EE6D20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3548E7C880C5C4F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_3548E7C880C5C4F7_OFFSET))(a1, a2);
		}
	};
}
