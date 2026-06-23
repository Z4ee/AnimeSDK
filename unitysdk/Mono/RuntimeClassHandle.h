#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_MonoClass.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9539E0)
#define MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET UNITYSDK_OFFSET(0x1C19B6C0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x9539F0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeClassHandle_TypeDefinitionIndex = 8;

	struct alignas(8) RuntimeClassHandle
	{
		::Mono::RuntimeStructs_MonoClass* value; // 0x10

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
