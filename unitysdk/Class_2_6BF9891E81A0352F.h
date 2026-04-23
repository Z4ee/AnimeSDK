#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleHideAuxiliaryLine; }

#define CLASS_2_6BF9891E81A0352F_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17FB1830)
#define CLASS_2_6BF9891E81A0352F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17FB1990)
#define CLASS_2_6BF9891E81A0352F__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB1820)

inline static constexpr unsigned int Class_2_6BF9891E81A0352F_TypeDefinitionIndex = 38974;

class Class_2_6BF9891E81A0352F : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleHideAuxiliaryLine* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleHideAuxiliaryLine* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleHideAuxiliaryLine*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_6BF9891E81A0352F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BF9891E81A0352F_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BF9891E81A0352F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
