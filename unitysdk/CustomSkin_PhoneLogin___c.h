#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CUSTOMSKIN_PHONELOGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122193E0)
#define CUSTOMSKIN_PHONELOGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12219420)
#define CUSTOMSKIN_PHONELOGIN___C__SETTHIRDENTRY_B__21_0_OFFSET UNITYSDK_OFFSET(0x12219430)

inline static constexpr unsigned int CustomSkin_PhoneLogin___c_TypeDefinitionIndex = 41944;

class CustomSkin_PhoneLogin___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneLogin___c_TypeDefinitionIndex)->GetStaticField(0x4A870);
	}
	static ::CustomSkin_PhoneLogin___c** StaticGet___9()
	{
		return (::CustomSkin_PhoneLogin___c**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneLogin___c_TypeDefinitionIndex)->GetStaticField(0x4A878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetThirdEntry_b__21_0(::System::Boolean inparam)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN___C__SETTHIRDENTRY_B__21_0_OFFSET))(this, inparam);
	}
};
