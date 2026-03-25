#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleAddSkillLog; }

#define CLASS_2_EBF12A58C79742FF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168121A0)
#define CLASS_2_EBF12A58C79742FF_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x168120D0)
#define CLASS_2_EBF12A58C79742FF__CTOR_OFFSET UNITYSDK_OFFSET(0x168120C0)

inline static constexpr unsigned int Class_2_EBF12A58C79742FF_TypeDefinitionIndex = 33192;

class Class_2_EBF12A58C79742FF : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAddSkillLog* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddSkillLog* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkillLog*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
