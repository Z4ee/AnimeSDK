#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MOLEMOLE_TIMELINEDATAEXTRA___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E24E10)
#define MOLEMOLE_TIMELINEDATAEXTRA___C__DISPLAYCLASS7_0__GETIDS_B__0_OFFSET UNITYSDK_OFFSET(0x17E24E20)

namespace MoleMole
{
	inline static constexpr unsigned int TimelineDataExtra___c__DisplayClass7_0_TypeDefinitionIndex = 50938;

	class TimelineDataExtra___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATAEXTRA___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetIDs_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATAEXTRA___C__DISPLAYCLASS7_0__GETIDS_B__0_OFFSET))(this);
		}
	};
}
