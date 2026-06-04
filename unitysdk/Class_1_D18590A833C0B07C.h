#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1072;
class Class_0_16E4307DCC419505_866;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D18590A833C0B07C_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x139A43F0)
#define CLASS_1_D18590A833C0B07C_METHOD_1_4DE465608EFDBDD7_OFFSET UNITYSDK_OFFSET(0x139A4520)
#define CLASS_1_D18590A833C0B07C_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x139A4340)
#define CLASS_1_D18590A833C0B07C_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x139A4480)
#define CLASS_1_D18590A833C0B07C__CTOR_OFFSET UNITYSDK_OFFSET(0x139A47B0)

inline static constexpr unsigned int Class_1_D18590A833C0B07C_TypeDefinitionIndex = 68520;

class Class_1_D18590A833C0B07C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1072*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D18590A833C0B07C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_1072* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1072*))((::PBYTE)hIl2Cpp + CLASS_1_D18590A833C0B07C_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_1072* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1072*))((::PBYTE)hIl2Cpp + CLASS_1_D18590A833C0B07C_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D18590A833C0B07C_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::String* Method_1_4DE465608EFDBDD7(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_866* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_866*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_D18590A833C0B07C_METHOD_1_4DE465608EFDBDD7_OFFSET))(this, a1, a2, a3, a4);
	}
};
