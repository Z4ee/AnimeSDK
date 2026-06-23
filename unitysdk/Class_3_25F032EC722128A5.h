#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_25F032EC722128A5_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18070AA0)
#define CLASS_3_25F032EC722128A5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18070F80)
#define CLASS_3_25F032EC722128A5_METHOD_3_D38916CDC8783C4C_OFFSET UNITYSDK_OFFSET(0x18070BE0)
#define CLASS_3_25F032EC722128A5__CTOR_OFFSET UNITYSDK_OFFSET(0x18070E60)

inline static constexpr unsigned int Class_3_25F032EC722128A5_TypeDefinitionIndex = 60847;

class Class_3_25F032EC722128A5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_1; // 0x18
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_2; // 0x20
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25F032EC722128A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25F032EC722128A5_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_D38916CDC8783C4C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_25F032EC722128A5_METHOD_3_D38916CDC8783C4C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25F032EC722128A5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
