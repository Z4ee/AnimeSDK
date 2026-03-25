#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6A016EB9D6190C4D;

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__4_OFFSET UNITYSDK_OFFSET(0x9843B30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__5_OFFSET UNITYSDK_OFFSET(0x9843B50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9842D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass40_0_TypeDefinitionIndex = 52663;

	class GridFightGameSession___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CompareWithCurTeam_b__4(::Class_1_6A016EB9D6190C4D* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6A016EB9D6190C4D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__4_OFFSET))(this, x);
		}

		::System::Boolean _CompareWithCurTeam_b__5(::Class_1_6A016EB9D6190C4D* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6A016EB9D6190C4D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS40_0__COMPAREWITHCURTEAM_B__5_OFFSET))(this, x);
		}
	};
}
