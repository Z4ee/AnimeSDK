#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3D62C8268D1C8C01_METHOD_1_1D83E92A191B4A81_OFFSET UNITYSDK_OFFSET(0x1B3BB140)
#define CLASS_1_3D62C8268D1C8C01__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3BB2E0)

inline static constexpr unsigned int Class_1_3D62C8268D1C8C01_TypeDefinitionIndex = 11135;

class Class_1_3D62C8268D1C8C01 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D62C8268D1C8C01__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1D83E92A191B4A81(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3D62C8268D1C8C01*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3D62C8268D1C8C01*&))((::PBYTE)hIl2Cpp + CLASS_1_3D62C8268D1C8C01_METHOD_1_1D83E92A191B4A81_OFFSET))(a1, a2);
	}
};
