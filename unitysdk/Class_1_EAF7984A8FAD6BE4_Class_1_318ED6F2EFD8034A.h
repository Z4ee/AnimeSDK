#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x138F0A60)
#define CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_76C14174E094F341_OFFSET UNITYSDK_OFFSET(0x138F0AE0)
#define CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A__CTOR_OFFSET UNITYSDK_OFFSET(0x138F0A10)

inline static constexpr unsigned int Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A_TypeDefinitionIndex = 46694;

class Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_EAF7984A8FAD6BE4*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_76C14174E094F341(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_76C14174E094F341_OFFSET))(this, a1);
	}
};
