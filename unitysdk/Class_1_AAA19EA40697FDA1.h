#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_AAA19EA40697FDA1_GET_HASUNREADDOT_OFFSET UNITYSDK_OFFSET(0xB49B550)
#define CLASS_1_AAA19EA40697FDA1_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB49B540)
#define CLASS_1_AAA19EA40697FDA1__CTOR_OFFSET UNITYSDK_OFFSET(0xB49B450)

inline static constexpr unsigned int Class_1_AAA19EA40697FDA1_TypeDefinitionIndex = 73363;

class Class_1_AAA19EA40697FDA1 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _Title_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* _HasUnreadDot_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AAA19EA40697FDA1__CTOR_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Title()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAA19EA40697FDA1_GET_TITLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_HasUnreadDot()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAA19EA40697FDA1_GET_HASUNREADDOT_OFFSET))(this);
	}
};
