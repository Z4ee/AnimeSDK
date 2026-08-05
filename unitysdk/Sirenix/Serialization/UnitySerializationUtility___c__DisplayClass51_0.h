#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F459B20)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS51_0__GETCACHEDUNITYMEMBERSETTER_B__0_OFFSET UNITYSDK_OFFSET(0x1F459B30)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationUtility___c__DisplayClass51_0_TypeDefinitionIndex = 7607;

	class UnitySerializationUtility___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* member; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCachedUnityMemberSetter_b__0(::System::Object*& instance, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*&, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS51_0__GETCACHEDUNITYMEMBERSETTER_B__0_OFFSET))(this, instance, value);
		}
	};
}
