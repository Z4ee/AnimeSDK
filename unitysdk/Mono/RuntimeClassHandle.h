#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_MonoClass.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x229D4A0)
#define MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET UNITYSDK_OFFSET(0x177A65F0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x229D4B0)
#define MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define MONO_RUNTIMECLASSHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define MONO_RUNTIMECLASSHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeClassHandle_TypeDefinitionIndex = 5;

	struct alignas(8) RuntimeClassHandle
	{
		::Mono::RuntimeStructs_MonoClass* value; // 0x10

		::System::Void _ctor(::Mono::RuntimeStructs_MonoClass* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::RuntimeStructs_MonoClass*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE__CTOR_1_OFFSET))(this, ptr);
		}

		::Mono::RuntimeStructs_MonoClass* get_Value()
		{
			return ((::Mono::RuntimeStructs_MonoClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::IntPtr GetTypeFromClass(::Mono::RuntimeStructs_MonoClass* klass)
		{
			return ((::System::IntPtr(*)(::Mono::RuntimeStructs_MonoClass*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET))(klass);
		}

		/*
		::System::RuntimeTypeHandle GetTypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET))(this);
		}
		*/
	};
}
