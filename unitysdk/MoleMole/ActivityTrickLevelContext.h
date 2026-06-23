#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0CE5318321486AA4_3;
class Class_1_E743398130672E35;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYTRICKLEVELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13585D90)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityTrickLevelContext_TypeDefinitionIndex = 69709;

	class ActivityTrickLevelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0CE5318321486AA4_3*>* Rows; // 0x28
		::Class_1_E743398130672E35* TrickData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYTRICKLEVELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
