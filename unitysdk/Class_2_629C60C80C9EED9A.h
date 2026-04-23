#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_401FD2135D0092DD.h"

class Class_2_F3F43255EC92B83B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_629C60C80C9EED9A_METHOD_2_34AAB3BB7D97821A_OFFSET UNITYSDK_OFFSET(0x119578A0)
#define CLASS_2_629C60C80C9EED9A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x119579A0)
#define CLASS_2_629C60C80C9EED9A_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x119575A0)
#define CLASS_2_629C60C80C9EED9A_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11957A00)
#define CLASS_2_629C60C80C9EED9A_METHOD_2_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x11957710)
#define CLASS_2_629C60C80C9EED9A__CTOR_OFFSET UNITYSDK_OFFSET(0x11957940)

inline static constexpr unsigned int Class_2_629C60C80C9EED9A_TypeDefinitionIndex = 68311;

class Class_2_629C60C80C9EED9A : public ::Class_1_401FD2135D0092DD
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_2; // 0x40
	::Il2CppArray<::System::UInt32>* Field_2_1; // 0x48
	::System::Single Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_2_34AAB3BB7D97821A(::System::UInt32 a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_2_F3F43255EC92B83B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_34AAB3BB7D97821A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
