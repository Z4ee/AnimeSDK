#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }

#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_METHOD_2_9A0171588F6FFA71_OFFSET UNITYSDK_OFFSET(0x1D0FDB40)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FDCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRandomBubbleTalkInfoGroup_TypeDefinitionIndex = 21238;

	class FiveDimRandomBubbleTalkInfoGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* BubbleTalkInfoGroup; // 0x10
		::System::Int32 Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A0171588F6FFA71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_METHOD_2_9A0171588F6FFA71_OFFSET))(a1, a2);
		}
	};
}
