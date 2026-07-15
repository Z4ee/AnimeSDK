#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_1D16703FADC2ED58_OFFSET UNITYSDK_OFFSET(0x1D0B27F0)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_7B8B6759E625362D_OFFSET UNITYSDK_OFFSET(0x1D0B2850)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_90F41F38147C10E0_OFFSET UNITYSDK_OFFSET(0x1D0B2870)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_F4BB4FC9958C5ABD_OFFSET UNITYSDK_OFFSET(0x1D0B2770)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B27E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLineup_TypeDefinitionIndex = 23071;

	class TargetFetchAdvLineup : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4BB4FC9958C5ABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_F4BB4FC9958C5ABD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D16703FADC2ED58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_1D16703FADC2ED58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7B8B6759E625362D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_7B8B6759E625362D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90F41F38147C10E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_90F41F38147C10E0_OFFSET))(a1, a2);
		}
	};
}
