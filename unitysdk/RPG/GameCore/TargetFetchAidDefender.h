#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_2980415C3A86FEED_OFFSET UNITYSDK_OFFSET(0x1D5A7E10)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_74792FF03F7E792D_OFFSET UNITYSDK_OFFSET(0x1D5A7D90)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_DFF728019F1AFB48_OFFSET UNITYSDK_OFFSET(0x1D5A7D10)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_F6E570923032A7A0_OFFSET UNITYSDK_OFFSET(0x1D5A7DF0)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidDefender_TypeDefinitionIndex = 23733;

	class TargetFetchAidDefender : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DFF728019F1AFB48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_DFF728019F1AFB48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74792FF03F7E792D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_74792FF03F7E792D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6E570923032A7A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_F6E570923032A7A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2980415C3A86FEED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_2980415C3A86FEED_OFFSET))(a1, a2);
		}
	};
}
