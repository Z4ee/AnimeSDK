#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_6F0826F956303ADF;
class Class_2_8AC1E618F6014D69;
namespace System { class String; }

#define CLASS_3_16356D7FCC1AD1D8_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1B5ED5A0)
#define CLASS_3_16356D7FCC1AD1D8_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1B5ED5F0)
#define CLASS_3_16356D7FCC1AD1D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5ED5E0)

inline static constexpr unsigned int Class_3_16356D7FCC1AD1D8_TypeDefinitionIndex = 22502;

class Class_3_16356D7FCC1AD1D8 : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_8AC1E618F6014D69* Field_3_0; // 0x18
	::Class_2_6F0826F956303ADF* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_16356D7FCC1AD1D8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_16356D7FCC1AD1D8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_16356D7FCC1AD1D8*&))((::PBYTE)hIl2Cpp + CLASS_3_16356D7FCC1AD1D8_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_16356D7FCC1AD1D8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_16356D7FCC1AD1D8*))((::PBYTE)hIl2Cpp + CLASS_3_16356D7FCC1AD1D8_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
