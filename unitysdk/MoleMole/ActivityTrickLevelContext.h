#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0CE5318321486AA4_2;
class Class_1_E743398130672E35;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYTRICKLEVELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17790C80)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityTrickLevelContext_TypeDefinitionIndex = 51329;

	class ActivityTrickLevelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_E743398130672E35* TrickData; // 0x28
		::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_2*>* Rows; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYTRICKLEVELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
