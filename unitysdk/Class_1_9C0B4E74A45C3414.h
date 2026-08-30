#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_9C0B4E74A45C3414_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1CCB6550)
#define CLASS_1_9C0B4E74A45C3414__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB6AC0)

inline static constexpr unsigned int Class_1_9C0B4E74A45C3414_TypeDefinitionIndex = 11274;

class Class_1_9C0B4E74A45C3414 : public ::System::Object
{
public:
	::System::String* DOEJKEGCHIG; // 0x10
	::System::String* OOLEAPLDIEA; // 0x18
	::System::String* HOHLFFPPBON; // 0x20
	::System::String* HBAEOBMGAOO; // 0x28
	::System::String* FNFACKPFNKL; // 0x30
	::System::String* EPBIIPGGHIJ; // 0x38
	::RPG::Client::TextID KANFOJDEPME; // 0x40
	::RPG::Client::TextID JPBADMFEFKL; // 0x50
	::System::UInt32 PHFMCACHFIJ; // 0x60
	::RPG::Client::TextID GFLNPPIFGGE; // 0x68
	::RPG::Client::TextID ELAIIFMNEHD; // 0x78
	::RPG::Client::TextID OBCPCPLBIGP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C0B4E74A45C3414__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9C0B4E74A45C3414*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9C0B4E74A45C3414*&))((::PBYTE)hIl2Cpp + CLASS_1_9C0B4E74A45C3414_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
