#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_48407B49F5019E42_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x12A975F0)
#define CLASS_2_48407B49F5019E42_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12A97610)
#define CLASS_2_48407B49F5019E42_METHOD_2_05BC6A448C5B54FD_OFFSET UNITYSDK_OFFSET(0x12A97470)
#define CLASS_2_48407B49F5019E42_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x12A97600)
#define CLASS_2_48407B49F5019E42_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12A97620)
#define CLASS_2_48407B49F5019E42__CTOR_OFFSET UNITYSDK_OFFSET(0x12A97530)

inline static constexpr unsigned int Class_2_48407B49F5019E42_TypeDefinitionIndex = 55130;

class Class_2_48407B49F5019E42 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::UInt32 _DamageCounter_k__BackingField; // 0x10
	::System::Boolean _IsActive_k__BackingField; // 0x14

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_48407B49F5019E42__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_05BC6A448C5B54FD(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48407B49F5019E42_METHOD_2_05BC6A448C5B54FD_OFFSET))(a1, a2);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48407B49F5019E42_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_48407B49F5019E42_SET_DAMAGECOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48407B49F5019E42_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48407B49F5019E42_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
