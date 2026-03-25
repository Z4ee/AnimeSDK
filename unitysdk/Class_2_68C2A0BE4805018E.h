#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleAIDegrade; }

#define CLASS_2_68C2A0BE4805018E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16A154D0)
#define CLASS_2_68C2A0BE4805018E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A15530)
#define CLASS_2_68C2A0BE4805018E__CTOR_OFFSET UNITYSDK_OFFSET(0x16A154C0)

inline static constexpr unsigned int Class_2_68C2A0BE4805018E_TypeDefinitionIndex = 33191;

class Class_2_68C2A0BE4805018E : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAIDegrade* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAIDegrade* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAIDegrade*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_68C2A0BE4805018E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C2A0BE4805018E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C2A0BE4805018E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
