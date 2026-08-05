#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define SGF_SEVENT_DELEGATEINFO_GETDELEGATEINFO_OFFSET UNITYSDK_OFFSET(0x1F666D40)
#define SGF_SEVENT_DELEGATEINFO_GETFRIENDLYFIELDNAME_OFFSET UNITYSDK_OFFSET(0x1F667AE0)
#define SGF_SEVENT_DELEGATEINFO_GETFRIENDLYMETHODNAME_OFFSET UNITYSDK_OFFSET(0x1F666EF0)
#define SGF_SEVENT_DELEGATEINFO_GETFRIENDLYTYPENAME_OFFSET UNITYSDK_OFFSET(0x1F667FB0)
#define SGF_SEVENT_DELEGATEINFO_GETORIGINALTYPEFROMCLOSURE_OFFSET UNITYSDK_OFFSET(0x1F667530)
#define SGF_SEVENT_DELEGATEINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1F666C80)
#define SGF_SEVENT_DELEGATEINFO_GET_FRIENDLYMETHODNAME_OFFSET UNITYSDK_OFFSET(0x1F666C40)
#define SGF_SEVENT_DELEGATEINFO_GET_ISCLOSURE_OFFSET UNITYSDK_OFFSET(0x1F666D20)
#define SGF_SEVENT_DELEGATEINFO_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1F666D00)
#define SGF_SEVENT_DELEGATEINFO_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1F666C20)
#define SGF_SEVENT_DELEGATEINFO_GET_ORIGINALTYPE_OFFSET UNITYSDK_OFFSET(0x1F666CA0)
#define SGF_SEVENT_DELEGATEINFO_GET_TARGETORIGINALTYPE_OFFSET UNITYSDK_OFFSET(0x1F666CE0)
#define SGF_SEVENT_DELEGATEINFO_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1F666CC0)
#define SGF_SEVENT_DELEGATEINFO_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1F666C60)
#define SGF_SEVENT_DELEGATEINFO_GUESSORIGINALTYPE_OFFSET UNITYSDK_OFFSET(0x1F667820)
#define SGF_SEVENT_DELEGATEINFO_ISCOMPILERGENERATED_OFFSET UNITYSDK_OFFSET(0x1F6673D0)
#define SGF_SEVENT_DELEGATEINFO_SET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1F666C90)
#define SGF_SEVENT_DELEGATEINFO_SET_FRIENDLYMETHODNAME_OFFSET UNITYSDK_OFFSET(0x1F666C50)
#define SGF_SEVENT_DELEGATEINFO_SET_ISCLOSURE_OFFSET UNITYSDK_OFFSET(0x1F666D30)
#define SGF_SEVENT_DELEGATEINFO_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1F666D10)
#define SGF_SEVENT_DELEGATEINFO_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1F666C30)
#define SGF_SEVENT_DELEGATEINFO_SET_ORIGINALTYPE_OFFSET UNITYSDK_OFFSET(0x1F666CB0)
#define SGF_SEVENT_DELEGATEINFO_SET_TARGETORIGINALTYPE_OFFSET UNITYSDK_OFFSET(0x1F666CF0)
#define SGF_SEVENT_DELEGATEINFO_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1F666CD0)
#define SGF_SEVENT_DELEGATEINFO_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1F666C70)
#define SGF_SEVENT_DELEGATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F666EE0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateInfo_TypeDefinitionIndex = 8289;

	class DelegateInfo : public ::System::Object
	{
	public:
		::System::Type* _TargetOriginalType_k__BackingField; // 0x10
		::System::Type* _TargetType_k__BackingField; // 0x18
		::System::Type* _OriginalType_k__BackingField; // 0x20
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x28
		::System::String* _FriendlyMethodName_k__BackingField; // 0x30
		::System::Type* _DeclaringType_k__BackingField; // 0x38
		::System::Object* _Target_k__BackingField; // 0x40
		::System::Boolean _IsClosure_k__BackingField; // 0x48
		::System::Boolean _IsStatic_k__BackingField; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_METHOD_OFFSET))(this, value);
		}

		::System::String* get_FriendlyMethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_FRIENDLYMETHODNAME_OFFSET))(this);
		}

		::System::Void set_FriendlyMethodName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_FRIENDLYMETHODNAME_OFFSET))(this, value);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_TARGET_OFFSET))(this, value);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Void set_DeclaringType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_DECLARINGTYPE_OFFSET))(this, value);
		}

		::System::Type* get_OriginalType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_ORIGINALTYPE_OFFSET))(this);
		}

		::System::Void set_OriginalType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_ORIGINALTYPE_OFFSET))(this, value);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Void set_TargetType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_TARGETTYPE_OFFSET))(this, value);
		}

		::System::Type* get_TargetOriginalType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_TARGETORIGINALTYPE_OFFSET))(this);
		}

		::System::Void set_TargetOriginalType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_TARGETORIGINALTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_ISSTATIC_OFFSET))(this, value);
		}

		::System::Boolean get_IsClosure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GET_ISCLOSURE_OFFSET))(this);
		}

		::System::Void set_IsClosure(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_SET_ISCLOSURE_OFFSET))(this, value);
		}

		static ::SGF::SEvent::DelegateInfo* GetDelegateInfo(::System::Delegate* callback)
		{
			return ((::SGF::SEvent::DelegateInfo*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GETDELEGATEINFO_OFFSET))(callback);
		}

		static ::System::Boolean IsCompilerGenerated(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_ISCOMPILERGENERATED_OFFSET))(type);
		}

		static ::System::Type* GetOriginalTypeFromClosure(::System::Type* closureType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GETORIGINALTYPEFROMCLOSURE_OFFSET))(closureType);
		}

		static ::System::Type* GuessOriginalType(::System::Type* closureType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GUESSORIGINALTYPE_OFFSET))(closureType);
		}

		static ::System::ReadOnlySpan_1<::System::Char> GetFriendlyFieldName(::System::String* fieldName)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GETFRIENDLYFIELDNAME_OFFSET))(fieldName);
		}

		static ::System::ReadOnlySpan_1<::System::Char> GetFriendlyMethodName(::System::String* name)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GETFRIENDLYMETHODNAME_OFFSET))(name);
		}

		static ::System::ReadOnlySpan_1<::System::Char> GetFriendlyTypeName(::System::Type* type)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO_GETFRIENDLYTYPENAME_OFFSET))(type);
		}
	};
}
