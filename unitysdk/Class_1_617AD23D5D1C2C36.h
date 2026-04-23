#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC.h"
#include "unitysdk/System/Object.h"

class Class_1_3A031B4969E41A12;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_617AD23D5D1C2C36_METHOD_1_0E9E253EC7D87349_OFFSET UNITYSDK_OFFSET(0x1242F970)
#define CLASS_1_617AD23D5D1C2C36_METHOD_1_565C3F3666F63ED5_OFFSET UNITYSDK_OFFSET(0x12430680)
#define CLASS_1_617AD23D5D1C2C36_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x1242FC20)
#define CLASS_1_617AD23D5D1C2C36_METHOD_1_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x12430460)
#define CLASS_1_617AD23D5D1C2C36_METHOD_1_BB2727DE2336FF19_OFFSET UNITYSDK_OFFSET(0x124309E0)
#define CLASS_1_617AD23D5D1C2C36__CCTOR_OFFSET UNITYSDK_OFFSET(0x12430D40)
#define CLASS_1_617AD23D5D1C2C36__CTOR_OFFSET UNITYSDK_OFFSET(0x1242F8B0)

inline static constexpr unsigned int Class_1_617AD23D5D1C2C36_TypeDefinitionIndex = 64753;

class Class_1_617AD23D5D1C2C36 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_617AD23D5D1C2C36_TypeDefinitionIndex)->GetStaticField(0x3580);
	}
	::System::Collections::Generic::List_1<::Class_1_3A031B4969E41A12*>* Field_1_3; // 0x10
	::Il2CppArray<::Class_1_617AD23D5D1C2C36*>* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::Struct_2_3BFB14B0511B64BC Field_1_0; // 0x24
	::System::Int32 Field_1_2; // 0x34

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0E9E253EC7D87349(::Class_1_3A031B4969E41A12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A031B4969E41A12*))((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36_METHOD_1_0E9E253EC7D87349_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D0A2531C88B32B1(::Class_1_3A031B4969E41A12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A031B4969E41A12*))((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36_METHOD_1_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_1_565C3F3666F63ED5(::Struct_2_3BFB14B0511B64BC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36_METHOD_1_565C3F3666F63ED5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB2727DE2336FF19(::Struct_2_3BFB14B0511B64BC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_617AD23D5D1C2C36_METHOD_1_BB2727DE2336FF19_OFFSET))(this, a1, a2);
	}
};
