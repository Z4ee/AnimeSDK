#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1ADF0)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS50_0__GETCACHEDUNITYMEMBERGETTER_B__0_OFFSET UNITYSDK_OFFSET(0x1FB1AE00)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationUtility___c__DisplayClass50_0_TypeDefinitionIndex = 7606;

	class UnitySerializationUtility___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* member; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Object* _GetCachedUnityMemberGetter_b__0(::System::Object*& instance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS50_0__GETCACHEDUNITYMEMBERGETTER_B__0_OFFSET))(this, instance);
		}
	};
}
