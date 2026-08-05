#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8418A2F88FFB6611_METHOD_1_1D71532F5EA3FA56_OFFSET UNITYSDK_OFFSET(0x15B842F0)
#define CLASS_1_8418A2F88FFB6611_METHOD_1_480DA144E72F0CB6_OFFSET UNITYSDK_OFFSET(0x15B84470)
#define CLASS_1_8418A2F88FFB6611_METHOD_1_7DB181A46B2FFCF7_OFFSET UNITYSDK_OFFSET(0x15B84580)
#define CLASS_1_8418A2F88FFB6611__CTOR_OFFSET UNITYSDK_OFFSET(0x15B842E0)

inline static constexpr unsigned int Class_1_8418A2F88FFB6611_TypeDefinitionIndex = 90373;

class Class_1_8418A2F88FFB6611 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8418A2F88FFB6611__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1D71532F5EA3FA56(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8418A2F88FFB6611_METHOD_1_1D71532F5EA3FA56_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_480DA144E72F0CB6(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8418A2F88FFB6611_METHOD_1_480DA144E72F0CB6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_7DB181A46B2FFCF7(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8418A2F88FFB6611_METHOD_1_7DB181A46B2FFCF7_OFFSET))(this, a1);
	}
};
