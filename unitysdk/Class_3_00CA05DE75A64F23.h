#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByOtherFaction; }

#define CLASS_3_00CA05DE75A64F23_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x1C3EEDA0)
#define CLASS_3_00CA05DE75A64F23__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CEEA0)

inline static constexpr unsigned int Class_3_00CA05DE75A64F23_TypeDefinitionIndex = 41505;

class Class_3_00CA05DE75A64F23 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByOtherFaction* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByOtherFaction* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByOtherFaction*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_00CA05DE75A64F23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00CA05DE75A64F23_METHOD_3_A8F6F688241E6DBC_OFFSET))(this);
	}
};
