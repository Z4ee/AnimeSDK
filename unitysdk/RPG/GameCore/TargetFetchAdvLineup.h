#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_1D16703FADC2ED58_OFFSET UNITYSDK_OFFSET(0x19CF4C60)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_739C5F9466D3A02A_OFFSET UNITYSDK_OFFSET(0x19D086A0)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_90F41F38147C10E0_OFFSET UNITYSDK_OFFSET(0x19D08760)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_F82011C816E25E80_OFFSET UNITYSDK_OFFSET(0x19D03210)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF4C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLineup_TypeDefinitionIndex = 22608;

	class TargetFetchAdvLineup : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_739C5F9466D3A02A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_739C5F9466D3A02A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D16703FADC2ED58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_1D16703FADC2ED58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F82011C816E25E80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_F82011C816E25E80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90F41F38147C10E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_90F41F38147C10E0_OFFSET))(a1, a2);
		}
	};
}
