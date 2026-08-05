#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162C7080)
#define MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x162C7090)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopUpSetPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 45445;

	class UIVideoshopUpSetPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* wishlistSuitIdList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPUPSETPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__0_OFFSET))(this, a, b);
		}
	};
}
