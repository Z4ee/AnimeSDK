#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }

#define CLASS_1_A7A4B83BB51BED0E___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x10C999F0)
#define CLASS_1_A7A4B83BB51BED0E___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C99960)

inline static constexpr unsigned int Class_1_A7A4B83BB51BED0E___c__DisplayClass0_0_TypeDefinitionIndex = 61393;

class Class_1_A7A4B83BB51BED0E___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::UInt32 sectionID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Create_b__0(::RPG::Client::NavMap::FiveDim::SectionConfig* s)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SectionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET))(this, s);
	}
};
