#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1539;
class Class_1_16C4955EF2FA3814;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_7B5BC5F7531D3B01_1_METHOD_1_F9E06138219FAD85_OFFSET UNITYSDK_OFFSET(0xB91ACB0)
#define CLASS_1_7B5BC5F7531D3B01_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB91ACA0)

inline static constexpr unsigned int Class_1_7B5BC5F7531D3B01_1_TypeDefinitionIndex = 80224;

class Class_1_7B5BC5F7531D3B01_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1539* MJHHLOPFDNK; // 0x10
	::Class_1_16C4955EF2FA3814* GKPHGLBPCKD; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1539* a1, ::Class_1_16C4955EF2FA3814* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1539*, ::Class_1_16C4955EF2FA3814*))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_F9E06138219FAD85(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B5BC5F7531D3B01_1_METHOD_1_F9E06138219FAD85_OFFSET))(this, a1);
	}
};
