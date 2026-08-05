#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194945E0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19494620)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__SETTHIRDLOGIN_B__15_0_OFFSET UNITYSDK_OFFSET(0x19494630)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__SETTHIRDLOGIN_B__15_1_OFFSET UNITYSDK_OFFSET(0x19494640)

inline static constexpr unsigned int CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex = 62966;

class CustomSkin_AccountLoginOversea___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex)->GetStaticField(0x4CC30);
	}
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex)->GetStaticField(0x4CC38);
	}
	static ::CustomSkin_AccountLoginOversea___c** StaticGet___9()
	{
		return (::CustomSkin_AccountLoginOversea___c**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex)->GetStaticField(0x4CC40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetThirdLogin_b__15_0(::System::Boolean inparam)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__SETTHIRDLOGIN_B__15_0_OFFSET))(this, inparam);
	}

	::System::Boolean _SetThirdLogin_b__15_1(::System::Boolean inParam)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__SETTHIRDLOGIN_B__15_1_OFFSET))(this, inParam);
	}
};
