#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E88275273EFBFE5C;
class Class_4_3F82771DBC80173B;
namespace System { class Action; }

#define CLASS_4_3F82771DBC80173B_CLASS_1_A3761C241C9A1C3D_METHOD_1_FF2CC44992DD0E75_OFFSET UNITYSDK_OFFSET(0x12A7B250)
#define CLASS_4_3F82771DBC80173B_CLASS_1_A3761C241C9A1C3D__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7B240)

inline static constexpr unsigned int Class_4_3F82771DBC80173B_Class_1_A3761C241C9A1C3D_TypeDefinitionIndex = 82817;

class Class_4_3F82771DBC80173B_Class_1_A3761C241C9A1C3D : public ::System::Object
{
public:
	::Class_1_E88275273EFBFE5C* Field_1_0; // 0x10
	::Class_4_3F82771DBC80173B* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3F82771DBC80173B_CLASS_1_A3761C241C9A1C3D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF2CC44992DD0E75(::System::Boolean a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_3F82771DBC80173B_CLASS_1_A3761C241C9A1C3D_METHOD_1_FF2CC44992DD0E75_OFFSET))(this, a1, a2, a3);
	}
};
