#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }

#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_METHOD_2_A9358C6A3FE417A3_OFFSET UNITYSDK_OFFSET(0x17206FE0)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17207150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRandomBubbleTalkInfoGroup_TypeDefinitionIndex = 19689;

	class FiveDimRandomBubbleTalkInfoGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* BubbleTalkInfoGroup; // 0x10
		::System::Int32 Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A9358C6A3FE417A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRandomBubbleTalkInfoGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKINFOGROUP_METHOD_2_A9358C6A3FE417A3_OFFSET))(a1, a2);
		}
	};
}
