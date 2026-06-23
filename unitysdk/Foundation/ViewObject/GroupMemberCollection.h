#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOUNDATION_VIEWOBJECT_GROUPMEMBERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x114D5150)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupMemberCollection_TypeDefinitionIndex = 67610;

	class GroupMemberCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AllMember; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
