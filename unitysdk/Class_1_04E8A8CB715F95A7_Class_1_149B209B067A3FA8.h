#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04E8A8CB715F95A7_CLASS_1_149B209B067A3FA8_CLEAR_OFFSET UNITYSDK_OFFSET(0x9686FE0)
#define CLASS_1_04E8A8CB715F95A7_CLASS_1_149B209B067A3FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x9687050)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8_TypeDefinitionIndex = 52950;

class Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_57BF88AA3D4ADFA2>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_149B209B067A3FA8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_149B209B067A3FA8_CLEAR_OFFSET))(this);
	}
};
