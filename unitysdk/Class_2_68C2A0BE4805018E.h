#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleAIDegrade; }

#define CLASS_2_68C2A0BE4805018E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A9E8FA0)
#define CLASS_2_68C2A0BE4805018E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A9E9000)
#define CLASS_2_68C2A0BE4805018E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E8F90)

inline static constexpr unsigned int Class_2_68C2A0BE4805018E_TypeDefinitionIndex = 40558;

class Class_2_68C2A0BE4805018E : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAIDegrade* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAIDegrade* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAIDegrade*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_68C2A0BE4805018E__CTOR_OFFSET))(this, a1, a2);
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
