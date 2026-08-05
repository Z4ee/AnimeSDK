#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_01B14DDCD912426D.h"
#include "unitysdk/Struct_2_8662A20E100B0678.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_52F956B556C154AB_METHOD_1_07D4D6DE5687D0F3_OFFSET UNITYSDK_OFFSET(0x113BBFD0)
#define CLASS_1_52F956B556C154AB_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x113BBE60)
#define CLASS_1_52F956B556C154AB_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x113BBD00)
#define CLASS_1_52F956B556C154AB__CTOR_OFFSET UNITYSDK_OFFSET(0x113BBAF0)

inline static constexpr unsigned int Class_1_52F956B556C154AB_TypeDefinitionIndex = 67352;

class Class_1_52F956B556C154AB : public ::System::Object
{
public:
	static ::Class_1_52F956B556C154AB** StaticGet_Field_1_3()
	{
		return (::Class_1_52F956B556C154AB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52F956B556C154AB_TypeDefinitionIndex)->GetStaticField(0x53640);
	}
	::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_1_1; // 0x10
	::System::Collections::Generic::Stack_1<::Struct_2_8662A20E100B0678>* Field_1_6; // 0x18
	::Il2CppArray<::Struct_2_01B14DDCD912426D>* Field_1_0; // 0x20
	::System::Diagnostics::Stopwatch* Field_1_2; // 0x28
	::Struct_2_8662A20E100B0678 Field_1_7; // 0x30
	::System::Int32 Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F956B556C154AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F956B556C154AB_METHOD_1_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52F956B556C154AB_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_07D4D6DE5687D0F3(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_52F956B556C154AB_METHOD_1_07D4D6DE5687D0F3_OFFSET))(this, a1);
	}
};
