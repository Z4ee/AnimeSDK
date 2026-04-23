#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

#define CLASS_2_61DD098C4AD3E56F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AF2110)
#define CLASS_2_61DD098C4AD3E56F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AF20D0)
#define CLASS_2_61DD098C4AD3E56F__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF2180)

inline static constexpr unsigned int Class_2_61DD098C4AD3E56F_TypeDefinitionIndex = 52769;

class Class_2_61DD098C4AD3E56F : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61DD098C4AD3E56F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61DD098C4AD3E56F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61DD098C4AD3E56F_DISPOSE_OFFSET))(this);
	}
};
