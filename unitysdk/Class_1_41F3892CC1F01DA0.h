#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_41F3892CC1F01DA0_METHOD_1_065319E108769C98_OFFSET UNITYSDK_OFFSET(0x158820D0)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15881C20)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_192FAC1CB42E0F7F_OFFSET UNITYSDK_OFFSET(0x15881E10)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_4D2A473556700CDC_1_OFFSET UNITYSDK_OFFSET(0x15882330)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x15881BD0)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_52510872F1FAAB30_OFFSET UNITYSDK_OFFSET(0x15882190)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15881B90)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_EEA082F774806CCC_OFFSET UNITYSDK_OFFSET(0x15881F20)
#define CLASS_1_41F3892CC1F01DA0__CTOR_OFFSET UNITYSDK_OFFSET(0x15881B80)

inline static constexpr unsigned int Class_1_41F3892CC1F01DA0_TypeDefinitionIndex = 71871;

class Class_1_41F3892CC1F01DA0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_192FAC1CB42E0F7F(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_192FAC1CB42E0F7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52510872F1FAAB30(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_52510872F1FAAB30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D2A473556700CDC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_4D2A473556700CDC_1_OFFSET))(this);
	}

	::System::Void Method_1_EEA082F774806CCC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_EEA082F774806CCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_065319E108769C98(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_065319E108769C98_OFFSET))(this, a1);
	}
};
