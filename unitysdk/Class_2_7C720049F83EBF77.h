#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"

namespace System { class String; }

#define CLASS_2_7C720049F83EBF77_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1AAADE50)
#define CLASS_2_7C720049F83EBF77_METHOD_2_169396E3490CA804_OFFSET UNITYSDK_OFFSET(0x1AAADDC0)
#define CLASS_2_7C720049F83EBF77_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1AAADCA0)
#define CLASS_2_7C720049F83EBF77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AAADD30)
#define CLASS_2_7C720049F83EBF77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AAADB10)
#define CLASS_2_7C720049F83EBF77__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAADC20)
#define CLASS_2_7C720049F83EBF77__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAADC90)

inline static constexpr unsigned int Class_2_7C720049F83EBF77_TypeDefinitionIndex = 63709;

class Class_2_7C720049F83EBF77 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x16; // 0x0
	::MoleMole::Config::FightModeType Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_169396E3490CA804(::System::UInt32 a1, ::MoleMole::Config::FightModeType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::FightModeType))((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77_METHOD_2_169396E3490CA804_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C720049F83EBF77_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
