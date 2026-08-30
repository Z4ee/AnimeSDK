#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleChooseTarget; }

#define CLASS_2_06093749E022C42C_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1BE367C0)
#define CLASS_2_06093749E022C42C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BE36830)
#define CLASS_2_06093749E022C42C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE367B0)

inline static constexpr unsigned int Class_2_06093749E022C42C_TypeDefinitionIndex = 41476;

class Class_2_06093749E022C42C : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleChooseTarget* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleChooseTarget* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleChooseTarget*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_06093749E022C42C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06093749E022C42C_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06093749E022C42C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
