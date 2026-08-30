#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D508B1981C147C96_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C06E740)
#define CLASS_1_D508B1981C147C96__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E720)

inline static constexpr unsigned int Class_1_D508B1981C147C96_TypeDefinitionIndex = 35506;

class Class_1_D508B1981C147C96 : public ::System::Object
{
public:
	::System::UInt32 ENIGCOLMILF; // 0x10
	::System::Int32 FEALKLFAHMI; // 0x14
	::System::Int32 DKFDAEFMFHJ; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D508B1981C147C96__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D508B1981C147C96_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
