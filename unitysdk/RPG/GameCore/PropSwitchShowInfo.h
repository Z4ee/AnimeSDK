#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSWITCHSHOWINFO_METHOD_3_0AFEBB23048C9096_OFFSET UNITYSDK_OFFSET(0x1D187920)
#define RPG_GAMECORE_PROPSWITCHSHOWINFO_METHOD_3_8C2125DA46A8A7C6_OFFSET UNITYSDK_OFFSET(0x1D187990)
#define RPG_GAMECORE_PROPSWITCHSHOWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D187970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSwitchShowInfo_TypeDefinitionIndex = 20197;

	class PropSwitchShowInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupPropID; // 0x24
		::System::Boolean TargetIsOwner; // 0x28
		::System::Boolean IsHorizontalAnim; // 0x29
		::System::Boolean IsAuto; // 0x2A
		::System::UInt32 SetTexture; // 0x2C
		::System::Boolean UseProgressAnim; // 0x30
		::System::Single Duration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHSHOWINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0AFEBB23048C9096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSwitchShowInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSwitchShowInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHSHOWINFO_METHOD_3_0AFEBB23048C9096_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C2125DA46A8A7C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSwitchShowInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSwitchShowInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSWITCHSHOWINFO_METHOD_3_8C2125DA46A8A7C6_OFFSET))(a1, a2);
		}
	};
}
