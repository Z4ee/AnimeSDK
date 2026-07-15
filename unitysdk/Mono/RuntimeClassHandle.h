#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_MonoClass.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x38F04D0)
#define MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x167710)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET UNITYSDK_OFFSET(0x155E4420)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x38F04E0)
#define MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define MONO_RUNTIMECLASSHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define MONO_RUNTIMECLASSHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x164FF0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeClassHandle_TypeDefinitionIndex = 5;

	struct alignas(8) RuntimeClassHandle
	{
		::Mono::RuntimeStructs_MonoClass* value; // 0x10

		::System::Void _ctor(::Mono::RuntimeStructs_MonoClass* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::RuntimeStructs_MonoClass*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE__CTOR_1_OFFSET))(this, a1);
		}

		::Mono::RuntimeStructs_MonoClass* get_Value()
		{
			return ((::Mono::RuntimeStructs_MonoClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::IntPtr GetTypeFromClass(::Mono::RuntimeStructs_MonoClass* a1)
		{
			return ((::System::IntPtr(*)(::Mono::RuntimeStructs_MonoClass*))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET))(a1);
		}

		/*
		::System::RuntimeTypeHandle GetTypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET))(this);
		}
		*/
	};
}
