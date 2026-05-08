#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/System/Object.h"

#define MONOUITABLESCROLLV2_DATACOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xF648F10)
#define MONOUITABLESCROLLV2_DATACOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF648FA0)
#define MONOUITABLESCROLLV2_DATACOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF649030)
#define MONOUITABLESCROLLV2_DATACOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xF649020)

inline static constexpr unsigned int MonoUITableScrollV2_DataComparer_TypeDefinitionIndex = 54116;

class MonoUITableScrollV2_DataComparer : public ::System::Object
{
public:
	static ::MonoUITableScrollV2_DataComparer** StaticGet_Instance()
	{
		return (::MonoUITableScrollV2_DataComparer**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2_DataComparer_TypeDefinitionIndex)->GetStaticField(0x3F270);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATACOMPARER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATACOMPARER__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::MonoUITableScrollV2_Data x, ::MonoUITableScrollV2_Data y)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2_Data, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATACOMPARER_EQUALS_OFFSET))(this, x, y);
	}

	::System::Int32 GetHashCode(::MonoUITableScrollV2_Data obj)
	{
		return ((::System::Int32(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATACOMPARER_GETHASHCODE_OFFSET))(this, obj);
	}
};
