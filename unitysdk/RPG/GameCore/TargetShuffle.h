#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_5398DF62FE539598_OFFSET UNITYSDK_OFFSET(0x1D0C5BC0)
#define RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_626713B4CAA735FD_OFFSET UNITYSDK_OFFSET(0x1D0C5B40)
#define RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_ACBFF3ACD9982E27_OFFSET UNITYSDK_OFFSET(0x1D0C5C20)
#define RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_DF571A8D04A9105A_OFFSET UNITYSDK_OFFSET(0x1D0C5C40)
#define RPG_GAMECORE_TARGETSHUFFLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C5BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetShuffle_TypeDefinitionIndex = 23046;

	class TargetShuffle : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_626713B4CAA735FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetShuffle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetShuffle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_626713B4CAA735FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5398DF62FE539598(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_5398DF62FE539598_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACBFF3ACD9982E27(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_ACBFF3ACD9982E27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF571A8D04A9105A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_METHOD_3_DF571A8D04A9105A_OFFSET))(a1, a2);
		}
	};
}
