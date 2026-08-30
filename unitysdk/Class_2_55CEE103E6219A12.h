#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleConvertBuff; }

#define CLASS_2_55CEE103E6219A12_METHOD_2_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x1CDDC3A0)
#define CLASS_2_55CEE103E6219A12_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CDDC490)
#define CLASS_2_55CEE103E6219A12__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDC390)

inline static constexpr unsigned int Class_2_55CEE103E6219A12_TypeDefinitionIndex = 41472;

class Class_2_55CEE103E6219A12 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleConvertBuff* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleConvertBuff* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleConvertBuff*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_55CEE103E6219A12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55CEE103E6219A12_METHOD_2_2A887DFC7A5BB2CB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55CEE103E6219A12_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
