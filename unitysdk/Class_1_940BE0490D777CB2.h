#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_940BE0490D777CB2_METHOD_1_C98173A7D7D715B5_OFFSET UNITYSDK_OFFSET(0x1CEC1620)
#define CLASS_1_940BE0490D777CB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1880)

inline static constexpr unsigned int Class_1_940BE0490D777CB2_TypeDefinitionIndex = 12016;

class Class_1_940BE0490D777CB2 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BEEMLBPEGKH; // 0x10
	::System::String* FBKAMIHGLFK; // 0x18
	::System::Single JONJKELPPAI; // 0x20
	::System::UInt32 PHFMCACHFIJ; // 0x24
	::RPG::Client::TextID AABNPBGMOFN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_940BE0490D777CB2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C98173A7D7D715B5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_940BE0490D777CB2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_940BE0490D777CB2*&))((::PBYTE)hIl2Cpp + CLASS_1_940BE0490D777CB2_METHOD_1_C98173A7D7D715B5_OFFSET))(a1, a2);
	}
};
