#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_ARGITERATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x92B580)
#define SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define SYSTEM_ARGITERATOR_GETNEXTARG_OFFSET UNITYSDK_OFFSET(0x92B5E0)
#define SYSTEM_ARGITERATOR_GETREMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x92B670)
#define SYSTEM_ARGITERATOR_INTGETNEXTARG_OFFSET UNITYSDK_OFFSET(0x92B660)
#define SYSTEM_ARGITERATOR_SETUP_OFFSET UNITYSDK_OFFSET(0x92B540)
#define SYSTEM_ARGITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x92B550)

namespace System
{
	inline static constexpr unsigned int ArgIterator_TypeDefinitionIndex = 365;

	struct alignas(8) ArgIterator
	{
		::System::Int32 next_arg; // 0x10
		::System::Int32 num_args; // 0x14
		::System::IntPtr args; // 0x18
		::System::IntPtr sig; // 0x20

		/*
		::System::Void _ctor(::System::RuntimeArgumentHandle arglist)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeArgumentHandle))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR__CTOR_OFFSET))(this, arglist);
		}
		*/

		::System::Void Setup(::System::IntPtr argsp, ::System::IntPtr start)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_SETUP_OFFSET))(this, argsp, start);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_EQUALS_OFFSET))(this, o);
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
