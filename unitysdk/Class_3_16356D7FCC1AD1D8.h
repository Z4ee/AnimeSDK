#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_68C34B5C1C40C2FF_2;
class Class_2_8AC1E618F6014D69;
namespace System { class String; }

#define CLASS_3_16356D7FCC1AD1D8_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1A402600)
#define CLASS_3_16356D7FCC1AD1D8_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1A402650)
#define CLASS_3_16356D7FCC1AD1D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A402640)

inline static constexpr unsigned int Class_3_16356D7FCC1AD1D8_TypeDefinitionIndex = 23074;

class Class_3_16356D7FCC1AD1D8 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GFNAPNFFGPJ; // 0x18
	::Class_2_8AC1E618F6014D69* OLOKHEMMGOH; // 0x20
	::Class_2_68C34B5C1C40C2FF_2* JGMFFAEKMBP; // 0x28
	::System::Boolean GNDCCBNILML; // 0x30

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
