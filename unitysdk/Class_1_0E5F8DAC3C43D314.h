#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsWorkRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_0E5F8DAC3C43D314_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D01F2C0)
#define CLASS_1_0E5F8DAC3C43D314__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01F510)

inline static constexpr unsigned int Class_1_0E5F8DAC3C43D314_TypeDefinitionIndex = 13970;

class Class_1_0E5F8DAC3C43D314 : public ::System::Object
{
public:
	::RPG::GameCore::LimaoNewsWorkRecordType MNLAMKJIAOC; // 0x10
	::System::UInt32 OOCPKIGPEHP; // 0x14
	::System::UInt32 OGLGIADFFML; // 0x18
	::System::UInt32 GKENNBPKDDA; // 0x1C
	::RPG::Client::TextID MMFOONHFAEB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5F8DAC3C43D314__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0E5F8DAC3C43D314*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0E5F8DAC3C43D314*&))((::PBYTE)hIl2Cpp + CLASS_1_0E5F8DAC3C43D314_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
