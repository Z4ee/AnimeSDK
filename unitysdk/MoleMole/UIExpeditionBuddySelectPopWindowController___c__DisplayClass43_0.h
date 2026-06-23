#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAE0D0)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__GETAUTOTSELECTTARGET_B__1_OFFSET UNITYSDK_OFFSET(0x19DAE0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionBuddySelectPopWindowController___c__DisplayClass43_0_TypeDefinitionIndex = 53408;

	class UIExpeditionBuddySelectPopWindowController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_01B22E9930E7BB4D*>* sortedBuddies; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAutotSelectTarget_b__1(::Class_2_01B22E9930E7BB4D* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__GETAUTOTSELECTTARGET_B__1_OFFSET))(this, match);
		}
	};
}
