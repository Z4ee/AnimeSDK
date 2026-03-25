#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MemberInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CREATEORNULL_B__3_OFFSET UNITYSDK_OFFSET(0x15D5F970)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CREATEORNULL_G__ADDEMITTABLEMEMBERORIGNORE_0_OFFSET UNITYSDK_OFFSET(0x15D5E8D0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CREATEORNULL_G__CREATEEMITTABLEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x15D5F5B0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5E780)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo___c__DisplayClass27_0_TypeDefinitionIndex = 9193;

	class ObjectSerializationInfo___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* intMembers; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*>* stringMembers; // 0x18
		::System::Type* type; // 0x20
		::System::Boolean allowPrivate; // 0x28
		::System::Boolean isClassRecord; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateOrNull_g__AddEmittableMemberOrIgnore_0(::System::Boolean isIntKeyMode, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* member, ::System::Boolean checkConflicting)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CREATEORNULL_G__ADDEMITTABLEMEMBERORIGNORE_0_OFFSET))(this, isIntKeyMode, member, checkConflicting);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _CreateOrNull_g__CreateEmittableMember_1(::System::Reflection::MemberInfo* m)
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CREATEORNULL_G__CREATEEMITTABLEMEMBER_1_OFFSET))(this, m);
		}

		::System::Boolean _CreateOrNull_b__3(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO___C__DISPLAYCLASS27_0__CREATEORNULL_B__3_OFFSET))(this, x);
		}
	};
}
