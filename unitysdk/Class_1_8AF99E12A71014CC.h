#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define CLASS_1_8AF99E12A71014CC__CTOR_OFFSET UNITYSDK_OFFSET(0xD822860)

inline static constexpr unsigned int Class_1_8AF99E12A71014CC_TypeDefinitionIndex = 56029;

class Class_1_8AF99E12A71014CC : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* CLJEBKODGHK; // 0x10
	::Class_3_07C3C4D2990C49EE* LEAHACBFJBP; // 0x18
	::Class_3_07C3C4D2990C49EE* AHEEAFKFALM; // 0x20
	::RPG::GameCore::DynamicValueRangeCallback* EABKOHGCHFP; // 0x28
	::System::Boolean PDAAIEKJOJK; // 0x30
	::System::SByte IEFMFPIDINK; // 0x31
	::System::SByte PLPOFKKEENK; // 0x32
	::System::SByte EBPHCMMFAPJ; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF99E12A71014CC__CTOR_OFFSET))(this);
	}
};
