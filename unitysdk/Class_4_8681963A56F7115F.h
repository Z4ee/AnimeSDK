#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_8681963A56F7115F_METHOD_4_05A64AA9F08176D9_OFFSET UNITYSDK_OFFSET(0x1B3FCF20)
#define CLASS_4_8681963A56F7115F_METHOD_4_A6E5214ED8D05F62_OFFSET UNITYSDK_OFFSET(0x1B3FCF70)
#define CLASS_4_8681963A56F7115F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FCF60)

inline static constexpr unsigned int Class_4_8681963A56F7115F_TypeDefinitionIndex = 23216;

class Class_4_8681963A56F7115F : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::Boolean Field_4_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8681963A56F7115F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_05A64AA9F08176D9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8681963A56F7115F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8681963A56F7115F*&))((::PBYTE)hIl2Cpp + CLASS_4_8681963A56F7115F_METHOD_4_05A64AA9F08176D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_A6E5214ED8D05F62(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8681963A56F7115F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8681963A56F7115F*))((::PBYTE)hIl2Cpp + CLASS_4_8681963A56F7115F_METHOD_4_A6E5214ED8D05F62_OFFSET))(a1, a2);
	}
};
