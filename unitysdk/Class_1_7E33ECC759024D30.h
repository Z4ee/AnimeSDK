#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_7E33ECC759024D30_METHOD_1_C98173A7D7D715B5_OFFSET UNITYSDK_OFFSET(0x1D1F78C0)
#define CLASS_1_7E33ECC759024D30__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7B20)

inline static constexpr unsigned int Class_1_7E33ECC759024D30_TypeDefinitionIndex = 14438;

class Class_1_7E33ECC759024D30 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::System::String* KILFKBDMJGI; // 0x18
	::Il2CppArray<::System::UInt32>* BMCKCHLJFIE; // 0x20
	::RPG::Client::TextID OENAMINOLLF; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E33ECC759024D30__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C98173A7D7D715B5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_7E33ECC759024D30*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_7E33ECC759024D30*&))((::PBYTE)hIl2Cpp + CLASS_1_7E33ECC759024D30_METHOD_1_C98173A7D7D715B5_OFFSET))(a1, a2);
	}
};
