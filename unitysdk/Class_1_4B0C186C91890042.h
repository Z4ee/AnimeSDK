#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_649;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_4B0C186C91890042_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10C2CE80)
#define CLASS_1_4B0C186C91890042_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x10C2CED0)
#define CLASS_1_4B0C186C91890042_METHOD_1_CF3D0F876CD7B90B_OFFSET UNITYSDK_OFFSET(0x10C2CDC0)
#define CLASS_1_4B0C186C91890042__CTOR_OFFSET UNITYSDK_OFFSET(0x10C2D030)

inline static constexpr unsigned int Class_1_4B0C186C91890042_TypeDefinitionIndex = 53250;

class Class_1_4B0C186C91890042 : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0C186C91890042__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF3D0F876CD7B90B(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_4B0C186C91890042_METHOD_1_CF3D0F876CD7B90B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0C186C91890042_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_649* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B0C186C91890042_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
