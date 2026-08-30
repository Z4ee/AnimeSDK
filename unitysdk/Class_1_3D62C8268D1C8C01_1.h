#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3D62C8268D1C8C01_1_METHOD_1_1D83E92A191B4A81_OFFSET UNITYSDK_OFFSET(0x1C759A50)
#define CLASS_1_3D62C8268D1C8C01_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C759BF0)

inline static constexpr unsigned int Class_1_3D62C8268D1C8C01_1_TypeDefinitionIndex = 14900;

class Class_1_3D62C8268D1C8C01_1 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::RPG::Client::TextID MJOOFPBABEA; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D62C8268D1C8C01_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1D83E92A191B4A81(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3D62C8268D1C8C01_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3D62C8268D1C8C01_1*&))((::PBYTE)hIl2Cpp + CLASS_1_3D62C8268D1C8C01_1_METHOD_1_1D83E92A191B4A81_OFFSET))(a1, a2);
	}
};
