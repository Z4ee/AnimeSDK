#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_B0877C107BC7F2BF;
namespace MoleMole { class VOPerformSubSystem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x135344E0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS30_0___OPENBLACKCURTAIN_B__1_OFFSET UNITYSDK_OFFSET(0x1353A260)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass30_0_TypeDefinitionIndex = 60228;

	class VOPerformSubSystem___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF>* callback; // 0x10
		::MoleMole::VOPerformSubSystem* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBlackCurtain_b__1(::Class_1_B0877C107BC7F2BF* t)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS30_0___OPENBLACKCURTAIN_B__1_OFFSET))(this, t);
		}
	};
}
