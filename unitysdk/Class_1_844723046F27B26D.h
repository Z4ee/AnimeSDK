#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_373;
class Class_1_BF85135934DD45B5;
class Class_3_8840398725162854;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_844723046F27B26D_METHOD_1_9E724FDAD4AEFB0D_OFFSET UNITYSDK_OFFSET(0x10DC6170)
#define CLASS_1_844723046F27B26D__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC6130)

inline static constexpr unsigned int Class_1_844723046F27B26D_TypeDefinitionIndex = 52643;

class Class_1_844723046F27B26D : public ::System::Object
{
public:
	::Class_3_8840398725162854* Field_1_2; // 0x10
	::Class_1_BF85135934DD45B5* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E724FDAD4AEFB0D(::Class_0_16E4307DCC419505_373* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_373*, ::System::Action*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_3>*))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D_METHOD_1_9E724FDAD4AEFB0D_OFFSET))(this, a1, a2, a3);
	}
};
