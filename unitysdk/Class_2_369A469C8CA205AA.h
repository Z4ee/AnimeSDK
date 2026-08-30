#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

class Class_1_269DB65BC39777F0;
namespace System { class Object; }

#define CLASS_2_369A469C8CA205AA_METHOD_2_79C109E266A3AC7B_1_OFFSET UNITYSDK_OFFSET(0x19CB0970)
#define CLASS_2_369A469C8CA205AA_METHOD_2_79C109E266A3AC7B_OFFSET UNITYSDK_OFFSET(0x19CB08D0)
#define CLASS_2_369A469C8CA205AA_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x19CB0A10)
#define CLASS_2_369A469C8CA205AA_START_OFFSET UNITYSDK_OFFSET(0x19CB0750)
#define CLASS_2_369A469C8CA205AA_STOP_OFFSET UNITYSDK_OFFSET(0x19CB0880)
#define CLASS_2_369A469C8CA205AA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB0700)

inline static constexpr unsigned int Class_2_369A469C8CA205AA_TypeDefinitionIndex = 62761;

class Class_2_369A469C8CA205AA : public ::Class_1_5E4ED920015DC82D
{
public:
	::Class_1_269DB65BC39777F0* GFKHCEGDLJN; // 0x20

	::System::Void _ctor(::Class_1_269DB65BC39777F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_269DB65BC39777F0*))((::PBYTE)hIl2Cpp + CLASS_2_369A469C8CA205AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_369A469C8CA205AA_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_369A469C8CA205AA_STOP_OFFSET))(this);
	}

	::System::Void Method_2_79C109E266A3AC7B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_369A469C8CA205AA_METHOD_2_79C109E266A3AC7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79C109E266A3AC7B_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_369A469C8CA205AA_METHOD_2_79C109E266A3AC7B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_369A469C8CA205AA_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}
};
