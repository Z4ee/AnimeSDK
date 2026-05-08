#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_FBEHAVIORHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9247B0)
#define FOUNDATION_FBEHAVIORHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7693D0)
#define FOUNDATION_FBEHAVIORHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x924820)
#define FOUNDATION_FBEHAVIORHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB712A0)
#define FOUNDATION_FBEHAVIORHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5E00)

namespace Foundation
{
	inline static constexpr unsigned int FBehaviorHandle_TypeDefinitionIndex = 9071;

	struct alignas(2) FBehaviorHandle
	{
		static ::Foundation::FBehaviorHandle* StaticGet_Invalid()
		{
			return (::Foundation::FBehaviorHandle*)Il2CppClass::FromTypeDefinitionIndex(FBehaviorHandle_TypeDefinitionIndex)->GetStaticField(0x3F90);
		}
		::System::Int16 Index; // 0x10
		::System::UInt16 Version; // 0x12

		::System::Void _ctor(::System::Int16 index, ::System::UInt16 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORHANDLE__CTOR_OFFSET))(this, index, version);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::Foundation::FBehaviorHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::FBehaviorHandle))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
