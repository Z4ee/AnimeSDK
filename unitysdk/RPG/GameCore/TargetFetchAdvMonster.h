#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_02586BC9E3AADBDC_OFFSET UNITYSDK_OFFSET(0x19CF5130)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_30B6083D3FF620F1_OFFSET UNITYSDK_OFFSET(0x19D08A30)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_4B6163FC7A1BCBE5_OFFSET UNITYSDK_OFFSET(0x19D034F0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_95C2D62346CAD09C_OFFSET UNITYSDK_OFFSET(0x19D08AC0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF50E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonster_TypeDefinitionIndex = 22553;

	class TargetFetchAdvMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvMonsterData*>* MultiGroupFetch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_30B6083D3FF620F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_30B6083D3FF620F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02586BC9E3AADBDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_02586BC9E3AADBDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B6163FC7A1BCBE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_4B6163FC7A1BCBE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95C2D62346CAD09C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_95C2D62346CAD09C_OFFSET))(a1, a2);
		}
	};
}
