#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0864311C6F08EEE8.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { template <typename T> class UnmanagedStructArray_1; }
namespace System { class String; }

#define CLASS_1_4B5A4D91A5AECB8A_METHOD_1_5A40846717484B96_OFFSET UNITYSDK_OFFSET(0x1A4A7250)
#define CLASS_1_4B5A4D91A5AECB8A_METHOD_1_C28D974CD3490B93_OFFSET UNITYSDK_OFFSET(0x1A4A72F0)
#define CLASS_1_4B5A4D91A5AECB8A_METHOD_1_E1262D77975F8295_OFFSET UNITYSDK_OFFSET(0x1A4A72A0)
#define CLASS_1_4B5A4D91A5AECB8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A7570)

inline static constexpr unsigned int Class_1_4B5A4D91A5AECB8A_TypeDefinitionIndex = 40105;

class Class_1_4B5A4D91A5AECB8A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B5A4D91A5AECB8A__CTOR_OFFSET))(this);
	}

	static ::System::Int64 Method_1_5A40846717484B96(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B5A4D91A5AECB8A_METHOD_1_5A40846717484B96_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_E1262D77975F8295(::System::String* a1)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B5A4D91A5AECB8A_METHOD_1_E1262D77975F8295_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C28D974CD3490B93(::RPG::GameCore::UnmanagedStructArray_1<::Struct_2_0864311C6F08EEE8>* a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::UnmanagedStructArray_1<::Struct_2_0864311C6F08EEE8>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4B5A4D91A5AECB8A_METHOD_1_C28D974CD3490B93_OFFSET))(a1, a2);
	}
};
