#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_19686E0819704134_OFFSET UNITYSDK_OFFSET(0x18754B80)
#define RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_8F01B29A1B399CE2_OFFSET UNITYSDK_OFFSET(0x18754AA0)
#define RPG_GAMECORE_BYISINSTORYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18754B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInStoryMode_TypeDefinitionIndex = 19549;

	class ByIsInStoryMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CheckGlobal; // 0x20
		::System::Boolean CheckOwnerEntity; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F01B29A1B399CE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInStoryMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInStoryMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_8F01B29A1B399CE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19686E0819704134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSTORYMODE_METHOD_4_19686E0819704134_OFFSET))(a1, a2);
		}
	};
}
