#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_COURSEREWARDPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07FC90)

namespace MoleMole
{
	inline static constexpr unsigned int CourseRewardPopWindowContext_TypeDefinitionIndex = 70112;

	class CourseRewardPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* overnightRewardSet; // 0x28
		::System::Boolean isOvernightShow; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COURSEREWARDPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
