#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6F795B6098BF80C.h"

class Class_1_11A58A840528E5B2;
class Class_1_E7CD69E2A848D444;
class Class_2_A604112DD39A112C;
class Class_3_F402EAE70F3E0E28_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_1502FE7E11206C88_METHOD_4_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x18DA8D40)
#define CLASS_4_1502FE7E11206C88_METHOD_4_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18DA8EE0)
#define CLASS_4_1502FE7E11206C88__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA8A70)

inline static constexpr unsigned int Class_4_1502FE7E11206C88_TypeDefinitionIndex = 74719;

class Class_4_1502FE7E11206C88 : public ::Class_3_C6F795B6098BF80C<::Class_3_F402EAE70F3E0E28_13*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_E7CD69E2A848D444*>* Field_4_0; // 0x30
	::Class_2_A604112DD39A112C* Field_4_1; // 0x38

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_4_1502FE7E11206C88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_4_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1502FE7E11206C88_METHOD_4_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_4_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1502FE7E11206C88_METHOD_4_E7EF6BC52B28648C_OFFSET))(this);
	}
};
