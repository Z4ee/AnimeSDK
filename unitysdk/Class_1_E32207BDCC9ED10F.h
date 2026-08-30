#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E32207BDCC9ED10F_CLEAR_OFFSET UNITYSDK_OFFSET(0xBCE6210)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_36B8E952FA4CE0E8_OFFSET UNITYSDK_OFFSET(0xBCE61A0)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_38BB8B788BA79E7E_OFFSET UNITYSDK_OFFSET(0xBCE6270)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0xBCE6450)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBCE6520)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBCE64E0)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xBCE6570)
#define CLASS_1_E32207BDCC9ED10F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCE64A0)
#define CLASS_1_E32207BDCC9ED10F__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE65B0)

inline static constexpr unsigned int Class_1_E32207BDCC9ED10F_TypeDefinitionIndex = 60903;

class Class_1_E32207BDCC9ED10F : public ::System::Object
{
public:
	::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0x10
	::System::Single KBDPMBDJIOF; // 0x18
	::System::Single HBDJCFFDGDD; // 0x1C
	::System::Single CNDJDPHMHNK; // 0x20
	::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36B8E952FA4CE0E8(::System::Single a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_36B8E952FA4CE0E8_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_38BB8B788BA79E7E(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_38BB8B788BA79E7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D663435C6E609D2(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_8D663435C6E609D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32207BDCC9ED10F_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}
};
