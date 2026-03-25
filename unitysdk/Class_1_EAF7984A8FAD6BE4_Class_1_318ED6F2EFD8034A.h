#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_0DE26E35F6EF50B7_OFFSET UNITYSDK_OFFSET(0x1144BBC0)
#define CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1144BB40)
#define CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A__CTOR_OFFSET UNITYSDK_OFFSET(0x1144BAF0)

inline static constexpr unsigned int Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A_TypeDefinitionIndex = 40202;

class Class_1_EAF7984A8FAD6BE4_Class_1_318ED6F2EFD8034A : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Collections::Generic::Stack_1<::Class_1_EAF7984A8FAD6BE4*>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_EAF7984A8FAD6BE4* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_EAF7984A8FAD6BE4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_0DE26E35F6EF50B7(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_EAF7984A8FAD6BE4_CLASS_1_318ED6F2EFD8034A_METHOD_1_0DE26E35F6EF50B7_OFFSET))(this, a1);
	}
};
