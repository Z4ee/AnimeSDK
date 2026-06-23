#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42478FEA1EFAC64C_FINALIZE_OFFSET UNITYSDK_OFFSET(0x131B1A60)
#define CLASS_1_42478FEA1EFAC64C_METHOD_1_3EB35A9A68C0469F_OFFSET UNITYSDK_OFFSET(0x131B1A70)
#define CLASS_1_42478FEA1EFAC64C_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0x131B1B60)
#define CLASS_1_42478FEA1EFAC64C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x131B1B10)
#define CLASS_1_42478FEA1EFAC64C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x131B19D0)
#define CLASS_1_42478FEA1EFAC64C__CTOR_OFFSET UNITYSDK_OFFSET(0x131B1920)

inline static constexpr unsigned int Class_1_42478FEA1EFAC64C_TypeDefinitionIndex = 78909;

class Class_1_42478FEA1EFAC64C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xFFFFFFFF; // 0x0
	::System::Collections::Generic::List_1<::Class_1_42478FEA1EFAC64C*>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_42478FEA1EFAC64C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42478FEA1EFAC64C__CTOR_1_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42478FEA1EFAC64C_FINALIZE_OFFSET))(this);
	}

	::Class_1_42478FEA1EFAC64C* Method_1_3EB35A9A68C0469F(::Class_1_42478FEA1EFAC64C* a1)
	{
		return ((::Class_1_42478FEA1EFAC64C*(*)(::PVOID, ::Class_1_42478FEA1EFAC64C*))((::PBYTE)hIl2Cpp + CLASS_1_42478FEA1EFAC64C_METHOD_1_3EB35A9A68C0469F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42478FEA1EFAC64C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_42478FEA1EFAC64C_METHOD_1_85E657E328490B3B_OFFSET))(this, a1);
	}
};
