#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_ARGITERATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B5FF30)
#define SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E30)
#define SYSTEM_ARGITERATOR_GETNEXTARG_OFFSET UNITYSDK_OFFSET(0x3B5FF90)
#define SYSTEM_ARGITERATOR_GETREMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x3B60020)
#define SYSTEM_ARGITERATOR_INTGETNEXTARG_OFFSET UNITYSDK_OFFSET(0x3B60010)
#define SYSTEM_ARGITERATOR_SETUP_OFFSET UNITYSDK_OFFSET(0x3B5FEF0)
#define SYSTEM_ARGITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5FF00)

namespace System
{
	inline static constexpr unsigned int ArgIterator_TypeDefinitionIndex = 379;

	struct alignas(8) ArgIterator
	{
		::System::IntPtr args; // 0x10
		::System::Int32 next_arg; // 0x18
		::System::Int32 num_args; // 0x1C
		::System::IntPtr sig; // 0x20

		/*
		::System::Void _ctor(::System::RuntimeArgumentHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeArgumentHandle))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR__CTOR_OFFSET))(this, a1);
		}
		*/

		::System::Void Setup(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::TypedReference GetNextArg()
		{
			return ((::System::TypedReference(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETNEXTARG_OFFSET))(this);
		}

		::System::TypedReference IntGetNextArg()
		{
			return ((::System::TypedReference(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_INTGETNEXTARG_OFFSET))(this);
		}

		::System::Int32 GetRemainingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETREMAININGCOUNT_OFFSET))(this);
		}
	};
}
