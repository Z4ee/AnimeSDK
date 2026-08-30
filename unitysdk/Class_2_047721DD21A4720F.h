#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleAddSkill; }

#define CLASS_2_047721DD21A4720F_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x1BA93390)
#define CLASS_2_047721DD21A4720F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BA93470)
#define CLASS_2_047721DD21A4720F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93380)

inline static constexpr unsigned int Class_2_047721DD21A4720F_TypeDefinitionIndex = 41492;

class Class_2_047721DD21A4720F : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddSkill* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddSkill* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkill*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_047721DD21A4720F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047721DD21A4720F_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047721DD21A4720F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
