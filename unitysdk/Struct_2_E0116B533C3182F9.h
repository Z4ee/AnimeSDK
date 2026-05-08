#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_94C3508574381C0F.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_E0116B533C3182F9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x72C920)
#define STRUCT_2_E0116B533C3182F9_EQUALS_OFFSET UNITYSDK_OFFSET(0x72C820)
#define STRUCT_2_E0116B533C3182F9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x72C930)
#define STRUCT_2_E0116B533C3182F9_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x72C9A0)
#define STRUCT_2_E0116B533C3182F9_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x72CA20)

inline static constexpr unsigned int Struct_2_E0116B533C3182F9_TypeDefinitionIndex = 74217;

struct alignas(8) Struct_2_E0116B533C3182F9
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::Foundation::AssetRequestHandle Field_2_1; // 0x20
	::Enum_3_94C3508574381C0F Field_2_2; // 0x40

	::System::Boolean Equals(::Struct_2_E0116B533C3182F9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E0116B533C3182F9))((::PBYTE)hIl2Cpp + STRUCT_2_E0116B533C3182F9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_E0116B533C3182F9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E0116B533C3182F9_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_E0116B533C3182F9_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E0116B533C3182F9_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
