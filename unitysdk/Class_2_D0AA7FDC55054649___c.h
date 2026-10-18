#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_20;
class Class_2_BB7158A19169E7DC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_D0AA7FDC55054649___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C53B2C0)
#define CLASS_2_D0AA7FDC55054649___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53B300)
#define CLASS_2_D0AA7FDC55054649___C___REFRESHFULLLINEBUFFEFFECT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1C53B310)
#define CLASS_2_D0AA7FDC55054649___C___REFRESHFULLLINEBUFFEFFECT_B__26_1_OFFSET UNITYSDK_OFFSET(0x1C53B380)

inline static constexpr unsigned int Class_2_D0AA7FDC55054649___c_TypeDefinitionIndex = 41754;

class Class_2_D0AA7FDC55054649___c : public ::System::Object
{
public:
	static ::Class_2_D0AA7FDC55054649___c** StaticGet___9()
	{
		return (::Class_2_D0AA7FDC55054649___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D0AA7FDC55054649___c_TypeDefinitionIndex)->GetStaticField(0x22080);
	}
	static ::System::Func_2<::Class_1_43BD383C98B4C0C5_20*, ::Class_2_BB7158A19169E7DC*>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::Class_1_43BD383C98B4C0C5_20*, ::Class_2_BB7158A19169E7DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D0AA7FDC55054649___c_TypeDefinitionIndex)->GetStaticField(0x22088);
	}
	static ::System::Func_2<::Class_2_BB7158A19169E7DC*, ::System::Boolean>** StaticGet___9__26_1()
	{
		return (::System::Func_2<::Class_2_BB7158A19169E7DC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D0AA7FDC55054649___c_TypeDefinitionIndex)->GetStaticField(0x22090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D0AA7FDC55054649___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0AA7FDC55054649___C__CTOR_OFFSET))(this);
	}

	::Class_2_BB7158A19169E7DC* __RefreshFullLineBuffEffect_b__26_0(::Class_1_43BD383C98B4C0C5_20* a1)
	{
		return ((::Class_2_BB7158A19169E7DC*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + CLASS_2_D0AA7FDC55054649___C___REFRESHFULLLINEBUFFEFFECT_B__26_0_OFFSET))(this, a1);
	}

	::System::Boolean __RefreshFullLineBuffEffect_b__26_1(::Class_2_BB7158A19169E7DC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_BB7158A19169E7DC*))((::PBYTE)hIl2Cpp + CLASS_2_D0AA7FDC55054649___C___REFRESHFULLLINEBUFFEFFECT_B__26_1_OFFSET))(this, a1);
	}
};
