#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E663F02593BDAF0.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B9A02C19E7F3FE4F_METHOD_2_59832C27C4984D7D_OFFSET UNITYSDK_OFFSET(0x166C8720)
#define CLASS_2_B9A02C19E7F3FE4F__CTOR_OFFSET UNITYSDK_OFFSET(0x166C8660)

inline static constexpr unsigned int Class_2_B9A02C19E7F3FE4F_TypeDefinitionIndex = 29081;

class Class_2_B9A02C19E7F3FE4F : public ::Class_1_3E663F02593BDAF0
{
public:
	::Class_2_3ABA989E5AECB261* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* Field_2_3; // 0x28
	::System::UInt32 Field_2_1; // 0x30
	::System::UInt32 Field_2_2; // 0x34

	::System::Void _ctor(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B9A02C19E7F3FE4F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>* Method_2_59832C27C4984D7D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9A02C19E7F3FE4F_METHOD_2_59832C27C4984D7D_OFFSET))(this);
	}
};
