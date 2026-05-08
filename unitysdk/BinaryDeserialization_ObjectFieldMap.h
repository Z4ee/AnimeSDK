#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define BINARYDESERIALIZATION_OBJECTFIELDMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2F410)

inline static constexpr unsigned int BinaryDeserialization_ObjectFieldMap_TypeDefinitionIndex = 31658;

class BinaryDeserialization_ObjectFieldMap : public ::System::Object
{
public:
	::System::Object* obj; // 0x10
	::System::Reflection::FieldInfo* fieldInfo; // 0x18

	::System::Void _ctor(::System::Object* o, ::System::Reflection::FieldInfo* f)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_OBJECTFIELDMAP__CTOR_OFFSET))(this, o, f);
	}
};
