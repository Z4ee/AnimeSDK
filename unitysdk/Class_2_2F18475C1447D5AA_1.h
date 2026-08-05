#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1531.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7B9B7FF76E9223D4;
class Class_2_208CC9941471731A_1260;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F18475C1447D5AA_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1E681620)
#define CLASS_2_2F18475C1447D5AA_1_METHOD_2_25A8817C3318541F_OFFSET UNITYSDK_OFFSET(0x1E681060)
#define CLASS_2_2F18475C1447D5AA_1_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1E681710)
#define CLASS_2_2F18475C1447D5AA_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E680D20)
#define CLASS_2_2F18475C1447D5AA_1_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1E680E40)
#define CLASS_2_2F18475C1447D5AA_1_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1E6812B0)
#define CLASS_2_2F18475C1447D5AA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E680D60)

inline static constexpr unsigned int Class_2_2F18475C1447D5AA_1_TypeDefinitionIndex = 93018;

class Class_2_2F18475C1447D5AA_1 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_1260*, ::Class_1_7B9B7FF76E9223D4*>>* Field_2_7; // 0x18
	::Struct_2_1862835F8661A21F_1531 Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1260*>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_1260*, ::Class_1_7B9B7FF76E9223D4*>>* Method_2_25A8817C3318541F()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_1260*, ::Class_1_7B9B7FF76E9223D4*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1_METHOD_2_25A8817C3318541F_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1260* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1260*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_1_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
