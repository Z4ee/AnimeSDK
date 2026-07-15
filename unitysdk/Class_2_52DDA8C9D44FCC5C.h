#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckSkillUsabilityAxis; }

#define CLASS_2_52DDA8C9D44FCC5C_METHOD_2_7D33D8CED839A910_OFFSET UNITYSDK_OFFSET(0x18EFD1B0)
#define CLASS_2_52DDA8C9D44FCC5C_METHOD_2_8203E2C5C2C8E2BA_OFFSET UNITYSDK_OFFSET(0x18EFCFB0)
#define CLASS_2_52DDA8C9D44FCC5C_METHOD_2_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x18EFD280)
#define CLASS_2_52DDA8C9D44FCC5C_METHOD_2_E3ABB142DE2CE32D_OFFSET UNITYSDK_OFFSET(0x18EFD060)
#define CLASS_2_52DDA8C9D44FCC5C__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFCFA0)

inline static constexpr unsigned int Class_2_52DDA8C9D44FCC5C_TypeDefinitionIndex = 51903;

class Class_2_52DDA8C9D44FCC5C : public ::Class_1_F9FBCC956DFCF137_4
{
public:
	::RPG::GameCore::CheckSkillUsabilityAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillUsabilityAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillUsabilityAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_52DDA8C9D44FCC5C__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_8203E2C5C2C8E2BA()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52DDA8C9D44FCC5C_METHOD_2_8203E2C5C2C8E2BA_OFFSET))(this);
	}

	::System::Boolean Method_2_E3ABB142DE2CE32D(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_52DDA8C9D44FCC5C_METHOD_2_E3ABB142DE2CE32D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7D33D8CED839A910(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_52DDA8C9D44FCC5C_METHOD_2_7D33D8CED839A910_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A99EF338505A0EA9(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_52DDA8C9D44FCC5C_METHOD_2_A99EF338505A0EA9_OFFSET))(this, a1);
	}
};
