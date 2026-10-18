#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_CC5989D0025C57AE_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x1CCD2C20)
#define CLASS_1_CC5989D0025C57AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD2DE0)

inline static constexpr unsigned int Class_1_CC5989D0025C57AE_TypeDefinitionIndex = 12890;

class Class_1_CC5989D0025C57AE : public ::System::Object
{
public:
	::RPG::Client::TextID NMFBJOCJIBN; // 0x10
	::System::UInt32 NBEKALMIDKH; // 0x20
	::System::UInt32 LDGGEPJEKND; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5989D0025C57AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_CC5989D0025C57AE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_CC5989D0025C57AE*&))((::PBYTE)hIl2Cpp + CLASS_1_CC5989D0025C57AE_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
