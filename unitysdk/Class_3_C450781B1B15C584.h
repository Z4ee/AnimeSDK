#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_C450781B1B15C584_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13D8B490)
#define CLASS_3_C450781B1B15C584_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D8B9A0)
#define CLASS_3_C450781B1B15C584_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0x13D8B5D0)
#define CLASS_3_C450781B1B15C584__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8B880)

inline static constexpr unsigned int Class_3_C450781B1B15C584_TypeDefinitionIndex = 40941;

class Class_3_C450781B1B15C584 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x18
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_2; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C450781B1B15C584__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C450781B1B15C584_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C450781B1B15C584_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C450781B1B15C584_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
