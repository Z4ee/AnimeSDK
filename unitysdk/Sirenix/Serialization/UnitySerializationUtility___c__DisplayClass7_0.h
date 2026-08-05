#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB98E60)
#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS7_0__GETODINWILLSERIALIZEMEMBERS_B__0_OFFSET UNITYSDK_OFFSET(0x1FB98E70)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationUtility___c__DisplayClass7_0_TypeDefinitionIndex = 7605;

	class UnitySerializationUtility___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Sirenix::Serialization::ISerializationPolicy* policy; // 0x10
		::System::Boolean serializeUnityFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOdinWillSerializeMembers_b__0(::System::Reflection::MemberInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY___C__DISPLAYCLASS7_0__GETODINWILLSERIALIZEMEMBERS_B__0_OFFSET))(this, m);
		}
	};
}
