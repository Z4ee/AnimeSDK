#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_126;
class Class_1_D17272E82AE804C2_128;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E36A957E02CFF480___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1953C300)
#define CLASS_2_E36A957E02CFF480___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1953C340)
#define CLASS_2_E36A957E02CFF480___C__DRESSSKIN_B__0_0_OFFSET UNITYSDK_OFFSET(0x1953C350)
#define CLASS_2_E36A957E02CFF480___C__TAKEOFFSKIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1953C3A0)

inline static constexpr unsigned int Class_2_E36A957E02CFF480___c_TypeDefinitionIndex = 62821;

class Class_2_E36A957E02CFF480___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_D17272E82AE804C2_128*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_128*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480___c_TypeDefinitionIndex)->GetStaticField(0x65F70);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_126*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_126*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480___c_TypeDefinitionIndex)->GetStaticField(0x65F78);
	}
	static ::Class_2_E36A957E02CFF480___c** StaticGet___9()
	{
		return (::Class_2_E36A957E02CFF480___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480___c_TypeDefinitionIndex)->GetStaticField(0x65F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480___C__CTOR_OFFSET))(this);
	}

	::System::Void _DressSkin_b__0_0(::Class_1_D17272E82AE804C2_126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_126*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480___C__DRESSSKIN_B__0_0_OFFSET))(this, a1);
	}

	::System::Void _TakeOffSkin_b__1_0(::Class_1_D17272E82AE804C2_128* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_128*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480___C__TAKEOFFSKIN_B__1_0_OFFSET))(this, a1);
	}
};
