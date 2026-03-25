#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }

#define RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP_METHOD_2_F43B4387B350F7D6_OFFSET UNITYSDK_OFFSET(0x171DC3C0)
#define RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x171DC510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimActionRandomBubbleTalkInfoGroup_TypeDefinitionIndex = 17233;

	class FiveDimActionRandomBubbleTalkInfoGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimActionBubbleTalkInfo*>* BubbleTalkInfoGroup; // 0x10
		::System::Int32 Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F43B4387B350F7D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONRANDOMBUBBLETALKINFOGROUP_METHOD_2_F43B4387B350F7D6_OFFSET))(a1, a2);
		}
	};
}
