#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

class Class_2_F3F43255EC92B83B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_629C60C80C9EED9A_METHOD_2_34AAB3BB7D97821A_OFFSET UNITYSDK_OFFSET(0xBAA9990)
#define CLASS_2_629C60C80C9EED9A_METHOD_2_4DF98D928623DEE3_OFFSET UNITYSDK_OFFSET(0xBAA9800)
#define CLASS_2_629C60C80C9EED9A_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xBAA9690)
#define CLASS_2_629C60C80C9EED9A__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA9A50)

inline static constexpr unsigned int Class_2_629C60C80C9EED9A_TypeDefinitionIndex = 74106;

class Class_2_629C60C80C9EED9A : public ::Class_1_CBD84809434AB007
{
public:
	::Il2CppArray<::System::UInt32>* IMCMKJPOKOH; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* KOAGGMPHDGK; // 0x48
	::System::Single IALPGENFJPA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_4DF98D928623DEE3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_4DF98D928623DEE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_34AAB3BB7D97821A(::System::UInt32 a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_2_F3F43255EC92B83B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_2_629C60C80C9EED9A_METHOD_2_34AAB3BB7D97821A_OFFSET))(this, a1, a2, a3);
	}
};
