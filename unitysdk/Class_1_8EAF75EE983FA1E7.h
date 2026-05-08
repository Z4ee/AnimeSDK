#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EB3A38E60C647F98;
namespace System::Reflection { class FieldInfo; }

#define CLASS_1_8EAF75EE983FA1E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DBBC0)

inline static constexpr unsigned int Class_1_8EAF75EE983FA1E7_TypeDefinitionIndex = 26369;

class Class_1_8EAF75EE983FA1E7 : public ::System::Object
{
public:
	::System::Reflection::FieldInfo* Field_1_0; // 0x10
	::Class_3_EB3A38E60C647F98* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EAF75EE983FA1E7__CTOR_OFFSET))(this);
	}
};
