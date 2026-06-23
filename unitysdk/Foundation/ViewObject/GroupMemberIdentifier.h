#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x84DFA0)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_GET_COMBINEMEMBERID_OFFSET UNITYSDK_OFFSET(0x84DEE0)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_GET_ISGROUP_OFFSET UNITYSDK_OFFSET(0x84DF80)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x677870)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_NEW_1_OFFSET UNITYSDK_OFFSET(0x1877F430)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_NEW_2_OFFSET UNITYSDK_OFFSET(0x1877F480)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_NEW_OFFSET UNITYSDK_OFFSET(0x1877F3E0)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x84E000)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1877F790)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x84DF90)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)
#define FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x84E010)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupMemberIdentifier_TypeDefinitionIndex = 60792;

	struct alignas(4) GroupMemberIdentifier
	{
		static ::Il2CppArray<::System::Char>** StaticGet_seperator()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(GroupMemberIdentifier_TypeDefinitionIndex)->GetStaticField(0x36790);
		}
		// static const ::System::UInt32 InValidMemberID = 0x7FFFFFFF; // 0x0
		::System::UInt32 GroupId; // 0x10
		::System::UInt32 MemberId; // 0x14

		::System::Void _ctor(::System::UInt32 groupId, ::System::UInt32 memberId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER__CTOR_OFFSET))(this, groupId, memberId);
		}

		::System::Void _ctor_1(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER__CTOR_1_OFFSET))(this, groupId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER__CCTOR_OFFSET))();
		}

		::System::UInt64 get_CombineMemberId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_GET_COMBINEMEMBERID_OFFSET))(this);
		}

		::System::Boolean get_IsGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_GET_ISGROUP_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_GET_ISVALID_OFFSET))(this);
		}

		static ::Foundation::ViewObject::GroupMemberIdentifier New(::System::UInt32 groupId, ::System::UInt32 memberId)
		{
			return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_NEW_OFFSET))(groupId, memberId);
		}

		static ::Foundation::ViewObject::GroupMemberIdentifier New_1(::System::UInt32 groupId)
		{
			return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_NEW_1_OFFSET))(groupId);
		}

		static ::Foundation::ViewObject::GroupMemberIdentifier New_2(::System::String* qryString)
		{
			return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_NEW_2_OFFSET))(qryString);
		}

		::System::Boolean Equals(::Foundation::ViewObject::GroupMemberIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPMEMBERIDENTIFIER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
