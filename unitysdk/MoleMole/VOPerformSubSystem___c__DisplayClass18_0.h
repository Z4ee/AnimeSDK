#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_B0877C107BC7F2BF;
namespace MoleMole { class VOPerformSubSystem; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A231D0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS18_0___CLOSEBLACKCURTAIN_B__0_OFFSET UNITYSDK_OFFSET(0x10A231E0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS18_0___CLOSEBLACKCURTAIN_B__1_OFFSET UNITYSDK_OFFSET(0x10A23310)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass18_0_TypeDefinitionIndex = 54622;

	class VOPerformSubSystem___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* callback; // 0x10
		::MoleMole::VOPerformSubSystem* __4__this; // 0x18
		::System::String* pendingCurtainName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __CloseBlackCurtain_b__0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS18_0___CLOSEBLACKCURTAIN_B__0_OFFSET))(this, reason);
		}

		::System::Void __CloseBlackCurtain_b__1(::Class_1_B0877C107BC7F2BF* t)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS18_0___CLOSEBLACKCURTAIN_B__1_OFFSET))(this, t);
		}
	};
}
