#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_5;

#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0__CANAUTOOPENSHOP_B__0_OFFSET UNITYSDK_OFFSET(0xA5C9960)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C9880)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialStageConfig___c__DisplayClass5_0_TypeDefinitionIndex = 60313;

	class GridFightTutorialStageConfig___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 sectionID; // 0x10
		::System::UInt32 chapterID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanAutoOpenShop_b__0(::Class_1_3745C69C00F04B7D_5* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3745C69C00F04B7D_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0__CANAUTOOPENSHOP_B__0_OFFSET))(this, x);
		}
	};
}
