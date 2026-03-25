#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleAddSkill; }

#define CLASS_2_047721DD21A4720F_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x1681F350)
#define CLASS_2_047721DD21A4720F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1681F440)
#define CLASS_2_047721DD21A4720F__CTOR_OFFSET UNITYSDK_OFFSET(0x1681F340)

inline static constexpr unsigned int Class_2_047721DD21A4720F_TypeDefinitionIndex = 33187;

class Class_2_047721DD21A4720F : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAddSkill* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddSkill* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkill*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_047721DD21A4720F__CTOR_OFFSET))(this, a1, a2);
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
