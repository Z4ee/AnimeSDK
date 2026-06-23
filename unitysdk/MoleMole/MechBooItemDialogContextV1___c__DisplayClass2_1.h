#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12BCA9F0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_1__GETPARTBUILDLIST_B__2_OFFSET UNITYSDK_OFFSET(0x12BCAA00)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV1___c__DisplayClass2_1_TypeDefinitionIndex = 76049;

	class MechBooItemDialogContextV1___c__DisplayClass2_1 : public ::System::Object
	{
	public:
		::System::Int32 x; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPartBuildList_b__2(::System::Int32 cur)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_1__GETPARTBUILDLIST_B__2_OFFSET))(this, cur);
		}
	};
}
