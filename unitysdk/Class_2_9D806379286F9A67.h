#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2DFEC5475995150.h"
#include "unitysdk/Struct_2_889E5B2995035C6B.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_3_01B4CC30216C9ABE;
class Class_4_F7FD34BD70F3BC4F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D806379286F9A67_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1E02F310)
#define CLASS_2_9D806379286F9A67_METHOD_2_9F7472255255C950_OFFSET UNITYSDK_OFFSET(0x1E02F3F0)
#define CLASS_2_9D806379286F9A67_METHOD_2_A0EFDC02874C650B_OFFSET UNITYSDK_OFFSET(0x1E02F4F0)
#define CLASS_2_9D806379286F9A67_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E02F8A0)
#define CLASS_2_9D806379286F9A67_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1E02F930)
#define CLASS_2_9D806379286F9A67__CTOR_OFFSET UNITYSDK_OFFSET(0x1E02F3B0)

inline static constexpr unsigned int Class_2_9D806379286F9A67_TypeDefinitionIndex = 92310;

class Class_2_9D806379286F9A67 : public ::Class_1_E2DFEC5475995150
{
public:
	::Class_3_01B4CC30216C9ABE* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_889E5B2995035C6B>* Field_2_0; // 0x48
	::Struct_2_E614D3B245F96744 Field_2_1; // 0x50

	::System::Void _ctor(::Class_4_F7FD34BD70F3BC4F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_F7FD34BD70F3BC4F*))((::PBYTE)hIl2Cpp + CLASS_2_9D806379286F9A67__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D806379286F9A67_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::String* Method_2_9F7472255255C950()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D806379286F9A67_METHOD_2_9F7472255255C950_OFFSET))(this);
	}

	::System::Void Method_2_A0EFDC02874C650B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9D806379286F9A67_METHOD_2_A0EFDC02874C650B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D806379286F9A67_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D806379286F9A67_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
