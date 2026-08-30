#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3D62C8268D1C8C01_METHOD_1_1D83E92A191B4A81_OFFSET UNITYSDK_OFFSET(0x1CCA9A50)
#define CLASS_1_3D62C8268D1C8C01__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA9BF0)

inline static constexpr unsigned int Class_1_3D62C8268D1C8C01_TypeDefinitionIndex = 11524;

class Class_1_3D62C8268D1C8C01 : public ::System::Object
{
public:
	::System::String* OCBFMPOCBIK; // 0x10
	::RPG::Client::TextID NHALJPDONCP; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D62C8268D1C8C01__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1D83E92A191B4A81(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3D62C8268D1C8C01*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3D62C8268D1C8C01*&))((::PBYTE)hIl2Cpp + CLASS_1_3D62C8268D1C8C01_METHOD_1_1D83E92A191B4A81_OFFSET))(a1, a2);
	}
};
