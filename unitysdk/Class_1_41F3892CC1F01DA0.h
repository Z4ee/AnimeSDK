#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_41F3892CC1F01DA0_METHOD_1_192FAC1CB42E0F7F_OFFSET UNITYSDK_OFFSET(0x99B1CE0)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_1F130271093617A5_1_OFFSET UNITYSDK_OFFSET(0x99B21D0)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x99B1AB0)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_52510872F1FAAB30_OFFSET UNITYSDK_OFFSET(0x99B2030)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_7F5FD2B234BD5CBF_OFFSET UNITYSDK_OFFSET(0x99B1F70)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x99B1DD0)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99B1A70)
#define CLASS_1_41F3892CC1F01DA0_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x99B1B00)
#define CLASS_1_41F3892CC1F01DA0__CTOR_OFFSET UNITYSDK_OFFSET(0x99B1A60)

inline static constexpr unsigned int Class_1_41F3892CC1F01DA0_TypeDefinitionIndex = 69536;

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

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_192FAC1CB42E0F7F(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_192FAC1CB42E0F7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52510872F1FAAB30(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_52510872F1FAAB30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1F130271093617A5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_1F130271093617A5_1_OFFSET))(this);
	}

	::System::Void Method_1_9972734FC91A4B95(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_9972734FC91A4B95_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_7F5FD2B234BD5CBF(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_41F3892CC1F01DA0_METHOD_1_7F5FD2B234BD5CBF_OFFSET))(this, a1);
	}
};
