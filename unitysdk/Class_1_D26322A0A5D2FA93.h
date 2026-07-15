#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"

class Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11;
namespace RPG::Client { class UIManager; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D26322A0A5D2FA93_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x18F0C3D0)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18F0C360)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_223FCF5315354AB5_OFFSET UNITYSDK_OFFSET(0x18F0BDD0)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_4B1FB5B1C14B54F5_OFFSET UNITYSDK_OFFSET(0x18F0BED0)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_81B63EC00BDA4B22_OFFSET UNITYSDK_OFFSET(0x18F0BC20)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x18F0B620)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x18F0C040)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x18F0BC00)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F0B460)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x18F0B4C0)
#define CLASS_1_D26322A0A5D2FA93_METHOD_1_E5179FA5DCDA5B7D_OFFSET UNITYSDK_OFFSET(0x18F0BCC0)
#define CLASS_1_D26322A0A5D2FA93__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0B3E0)

inline static constexpr unsigned int Class_1_D26322A0A5D2FA93_TypeDefinitionIndex = 58041;

class Class_1_D26322A0A5D2FA93 : public ::System::Object
{
public:
	::RPG::Client::UIManager* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11*>* Field_1_2; // 0x20
	::RPG::GameCore::ScreenTransferReason Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_E5179FA5DCDA5B7D(::System::Action* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_E5179FA5DCDA5B7D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4B1FB5B1C14B54F5(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_4B1FB5B1C14B54F5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_223FCF5315354AB5(::Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11*))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_223FCF5315354AB5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_DEAC86EB2AD5D389_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_81B63EC00BDA4B22(::Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D26322A0A5D2FA93_Class_1_7075CD4ADAC35B11*))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_81B63EC00BDA4B22_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D26322A0A5D2FA93_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}
};
