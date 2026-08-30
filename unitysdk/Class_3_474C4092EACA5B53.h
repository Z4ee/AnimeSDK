#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByCompareBuffCount; }

#define CLASS_3_474C4092EACA5B53_METHOD_3_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x1C57F5F0)
#define CLASS_3_474C4092EACA5B53__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57F5D0)

inline static constexpr unsigned int Class_3_474C4092EACA5B53_TypeDefinitionIndex = 41509;

class Class_3_474C4092EACA5B53 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareBuffCount* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareBuffCount* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareBuffCount*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_474C4092EACA5B53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474C4092EACA5B53_METHOD_3_4487776BEE04D471_OFFSET))(this);
	}
};
