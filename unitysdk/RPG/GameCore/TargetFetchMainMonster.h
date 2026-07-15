#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_368BEF7021140038_OFFSET UNITYSDK_OFFSET(0x1D0BACB0)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_57A84FB8D5A4BEF0_OFFSET UNITYSDK_OFFSET(0x1D0BABD0)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_658492D16D4E0975_OFFSET UNITYSDK_OFFSET(0x1D0BAC50)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_B920E50304484A45_OFFSET UNITYSDK_OFFSET(0x1D0BACD0)
#define RPG_GAMECORE_TARGETFETCHMAINMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BAC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMainMonster_TypeDefinitionIndex = 23074;

	class TargetFetchMainMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_57A84FB8D5A4BEF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMainMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMainMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_57A84FB8D5A4BEF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_658492D16D4E0975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_658492D16D4E0975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_368BEF7021140038(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_368BEF7021140038_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B920E50304484A45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAINMONSTER_METHOD_4_B920E50304484A45_OFFSET))(a1, a2);
		}
	};
}
