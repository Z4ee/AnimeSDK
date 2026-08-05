#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_855;
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageInfoPopWindowController_StageInfoData_TypeDefinitionIndex = 91173;

	struct alignas(8) UIRABStageInfoPopWindowController_StageInfoData
	{
		::System::Int32 Type; // 0x10
		::System::Int32 RankId; // 0x14
		::System::Boolean IsCurrent; // 0x18
		::System::String* TitleText; // 0x20
		::Class_2_208CC9941471731A_855* RowConfig; // 0x28
	};
}
