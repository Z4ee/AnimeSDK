#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FFD140)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFD180)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__SETTHIRDLOGIN_B__15_0_OFFSET UNITYSDK_OFFSET(0x15FFD190)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA___C__SETTHIRDLOGIN_B__15_1_OFFSET UNITYSDK_OFFSET(0x15FFD1A0)

inline static constexpr unsigned int CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex = 66162;

class CustomSkin_AccountLoginOversea___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex)->GetStaticField(0x45A30);
	}
	static ::CustomSkin_AccountLoginOversea___c** StaticGet___9()
	{
		return (::CustomSkin_AccountLoginOversea___c**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex)->GetStaticField(0x45A38);
	}
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea___c_TypeDefinitionIndex)->GetStaticField(0x45A40);
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
