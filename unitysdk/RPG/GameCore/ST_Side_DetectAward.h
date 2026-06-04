#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_DETECTAWARD_METHOD_4_3217F7A0904A3FB5_OFFSET UNITYSDK_OFFSET(0x19C07FB0)
#define RPG_GAMECORE_ST_SIDE_DETECTAWARD_METHOD_4_A4BD0DAED2E634DE_OFFSET UNITYSDK_OFFSET(0x19C19B80)
#define RPG_GAMECORE_ST_SIDE_DETECTAWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19C07F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_DetectAward_TypeDefinitionIndex = 18998;

	class ST_Side_DetectAward : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single DetectRadius; // 0x18
		::System::String* DetectAiEvent; // 0x20
		::System::String* VariableOnFindTrotter; // 0x28
		::System::String* VariableOnFindTreature; // 0x30
		::System::Single SampleRadiusOverride; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DETECTAWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A4BD0DAED2E634DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_DetectAward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_DetectAward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DETECTAWARD_METHOD_4_A4BD0DAED2E634DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3217F7A0904A3FB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_DetectAward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_DetectAward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_DETECTAWARD_METHOD_4_3217F7A0904A3FB5_OFFSET))(a1, a2);
		}
	};
}
