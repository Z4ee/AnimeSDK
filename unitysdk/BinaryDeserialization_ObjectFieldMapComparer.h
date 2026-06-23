#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BinaryDeserialization_ObjectFieldMap;

#define BINARYDESERIALIZATION_OBJECTFIELDMAPCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E384820)
#define BINARYDESERIALIZATION_OBJECTFIELDMAPCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3848D0)
#define BINARYDESERIALIZATION_OBJECTFIELDMAPCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E384A80)

inline static constexpr unsigned int BinaryDeserialization_ObjectFieldMapComparer_TypeDefinitionIndex = 33210;

class BinaryDeserialization_ObjectFieldMapComparer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_OBJECTFIELDMAPCOMPARER__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::BinaryDeserialization_ObjectFieldMap* a, ::BinaryDeserialization_ObjectFieldMap* b)
	{
		return ((::System::Boolean(*)(::PVOID, ::BinaryDeserialization_ObjectFieldMap*, ::BinaryDeserialization_ObjectFieldMap*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_OBJECTFIELDMAPCOMPARER_EQUALS_OFFSET))(this, a, b);
	}

	::System::Int32 GetHashCode(::BinaryDeserialization_ObjectFieldMap* a)
	{
		return ((::System::Int32(*)(::PVOID, ::BinaryDeserialization_ObjectFieldMap*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_OBJECTFIELDMAPCOMPARER_GETHASHCODE_OFFSET))(this, a);
	}
};
