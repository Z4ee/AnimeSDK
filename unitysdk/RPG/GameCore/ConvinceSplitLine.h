#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCESPLITLINE_METHOD_3_19DDA9977D547F3B_OFFSET UNITYSDK_OFFSET(0x171380C0)
#define RPG_GAMECORE_CONVINCESPLITLINE_METHOD_3_912035860BAD02D2_OFFSET UNITYSDK_OFFSET(0x17138040)
#define RPG_GAMECORE_CONVINCESPLITLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x17138090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceSplitLine_TypeDefinitionIndex = 20001;

	class ConvinceSplitLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Pos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_912035860BAD02D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceSplitLine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceSplitLine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINE_METHOD_3_912035860BAD02D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19DDA9977D547F3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceSplitLine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceSplitLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINE_METHOD_3_19DDA9977D547F3B_OFFSET))(a1, a2);
		}
	};
}
