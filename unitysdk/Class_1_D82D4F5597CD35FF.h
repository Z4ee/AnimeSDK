#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_01B14DDCD912426D.h"
#include "unitysdk/Struct_2_8662A20E100B0678.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_D82D4F5597CD35FF_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x11F9B290)
#define CLASS_1_D82D4F5597CD35FF_METHOD_1_07D4D6DE5687D0F3_OFFSET UNITYSDK_OFFSET(0x11F9B3F0)
#define CLASS_1_D82D4F5597CD35FF_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x11F9B120)
#define CLASS_1_D82D4F5597CD35FF__CTOR_OFFSET UNITYSDK_OFFSET(0x11F9AF70)

inline static constexpr unsigned int Class_1_D82D4F5597CD35FF_TypeDefinitionIndex = 79276;

class Class_1_D82D4F5597CD35FF : public ::System::Object
{
public:
	static ::Class_1_D82D4F5597CD35FF** StaticGet_Field_1_0()
	{
		return (::Class_1_D82D4F5597CD35FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D82D4F5597CD35FF_TypeDefinitionIndex)->GetStaticField(0x4F4A0);
	}
	::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_1_2; // 0x10
	::System::Collections::Generic::Stack_1<::Struct_2_8662A20E100B0678>* Field_1_5; // 0x18
	::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_1_3; // 0x20
	::System::Diagnostics::Stopwatch* Field_1_1; // 0x28
	::Struct_2_8662A20E100B0678 Field_1_4; // 0x30
	::System::Int32 Field_1_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82D4F5597CD35FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82D4F5597CD35FF_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82D4F5597CD35FF_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_07D4D6DE5687D0F3(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_D82D4F5597CD35FF_METHOD_1_07D4D6DE5687D0F3_OFFSET))(this, a1);
	}
};
