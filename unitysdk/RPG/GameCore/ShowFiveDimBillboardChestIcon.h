#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_METHOD_3_1E23DA6FC68E18D6_OFFSET UNITYSDK_OFFSET(0x18E5E6E0)
#define RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_METHOD_3_EE1AA321A04DE50C_OFFSET UNITYSDK_OFFSET(0x18E5E660)
#define RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5E6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFiveDimBillboardChestIcon_TypeDefinitionIndex = 20268;

	class ShowFiveDimBillboardChestIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE1AA321A04DE50C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_METHOD_3_EE1AA321A04DE50C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E23DA6FC68E18D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFiveDimBillboardChestIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_METHOD_3_1E23DA6FC68E18D6_OFFSET))(a1, a2);
		}
	};
}
