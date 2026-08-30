#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_03EFB37613466871_METHOD_4_7D4006C993092B8B_OFFSET UNITYSDK_OFFSET(0x1CF3A8D0)
#define CLASS_4_03EFB37613466871_METHOD_4_93203F05A4B87D8E_OFFSET UNITYSDK_OFFSET(0x1CF3A800)
#define CLASS_4_03EFB37613466871__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3A8C0)

inline static constexpr unsigned int Class_4_03EFB37613466871_TypeDefinitionIndex = 21083;

class Class_4_03EFB37613466871 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03EFB37613466871__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_93203F05A4B87D8E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_03EFB37613466871*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_03EFB37613466871*&))((::PBYTE)hIl2Cpp + CLASS_4_03EFB37613466871_METHOD_4_93203F05A4B87D8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_7D4006C993092B8B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_03EFB37613466871* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_03EFB37613466871*))((::PBYTE)hIl2Cpp + CLASS_4_03EFB37613466871_METHOD_4_7D4006C993092B8B_OFFSET))(a1, a2);
	}
};
