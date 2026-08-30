#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_3FF51CE8B91EFA1B_Class_3_50D343C44D28BEFB_9;
class Class_2_E3625122CE82016E;
namespace System { class String; }

#define CLASS_1_3FF51CE8B91EFA1B_METHOD_1_8219E10577272799_OFFSET UNITYSDK_OFFSET(0x18FE7BF0)
#define CLASS_1_3FF51CE8B91EFA1B_METHOD_1_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x18FE7B90)
#define CLASS_1_3FF51CE8B91EFA1B_METHOD_1_F6B9203A6DD4286F_OFFSET UNITYSDK_OFFSET(0x18FE7AE0)
#define CLASS_1_3FF51CE8B91EFA1B__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE7A90)

inline static constexpr unsigned int Class_1_3FF51CE8B91EFA1B_TypeDefinitionIndex = 72270;

class Class_1_3FF51CE8B91EFA1B : public ::System::Object
{
public:
	::Class_1_3FF51CE8B91EFA1B_Class_3_50D343C44D28BEFB_9* JGOCPIOEJNJ; // 0x10

	::System::Void _ctor(::Class_1_3FF51CE8B91EFA1B_Class_3_50D343C44D28BEFB_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3FF51CE8B91EFA1B_Class_3_50D343C44D28BEFB_9*))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6B9203A6DD4286F(::System::Nullable_1<::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_METHOD_1_F6B9203A6DD4286F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8219E10577272799(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_METHOD_1_8219E10577272799_OFFSET))(this, a1);
	}

	::Class_2_E3625122CE82016E* Method_1_E5630A859AA24FB3()
	{
		return ((::Class_2_E3625122CE82016E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_METHOD_1_E5630A859AA24FB3_OFFSET))(this);
	}
};
