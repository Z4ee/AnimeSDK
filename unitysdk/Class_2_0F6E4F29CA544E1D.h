#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleRemoveSkill; }

#define CLASS_2_0F6E4F29CA544E1D_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x18E292F0)
#define CLASS_2_0F6E4F29CA544E1D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E293D0)
#define CLASS_2_0F6E4F29CA544E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x18E292E0)

inline static constexpr unsigned int Class_2_0F6E4F29CA544E1D_TypeDefinitionIndex = 39746;

class Class_2_0F6E4F29CA544E1D : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRemoveSkill* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRemoveSkill* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRemoveSkill*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_0F6E4F29CA544E1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6E4F29CA544E1D_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6E4F29CA544E1D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
