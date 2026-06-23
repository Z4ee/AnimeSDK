#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BCA940)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_0__GETPARTBUILDLIST_B__1_OFFSET UNITYSDK_OFFSET(0x12BCA950)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV1___c__DisplayClass2_0_TypeDefinitionIndex = 76051;

	class MechBooItemDialogContextV1___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* tabCompList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetPartBuildList_b__1(::System::Int32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__DISPLAYCLASS2_0__GETPARTBUILDLIST_B__1_OFFSET))(this, x);
		}
	};
}
