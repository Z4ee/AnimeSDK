#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/FadeInElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_METHOD_4_06BEC47572D37B2B_OFFSET UNITYSDK_OFFSET(0x194E4570)
#define RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_METHOD_4_A2CAFB5375878D9B_OFFSET UNITYSDK_OFFSET(0x194E3180)
#define RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194E3170)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SentenceElementConfig_TypeDefinitionIndex = 23611;

	class SentenceElementConfig : public ::RPG::GameCore::Booklet::FadeInElementConfig
	{
	public:
		::System::UInt32 SentenceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_06BEC47572D37B2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SentenceElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SentenceElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_METHOD_4_06BEC47572D37B2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2CAFB5375878D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SentenceElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SentenceElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SENTENCEELEMENTCONFIG_METHOD_4_A2CAFB5375878D9B_OFFSET))(a1, a2);
		}
	};
}
