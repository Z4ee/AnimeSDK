#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C821CB457FB5EBC6;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E36A957E02CFF480_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE464F30)
#define CLASS_2_E36A957E02CFF480_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE464F70)
#define CLASS_2_E36A957E02CFF480_2___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET UNITYSDK_OFFSET(0xE464F80)

inline static constexpr unsigned int Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex = 58734;

class Class_2_E36A957E02CFF480_2___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_C821CB457FB5EBC6*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_1_C821CB457FB5EBC6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex)->GetStaticField(0x27A00);
	}
	static ::Class_2_E36A957E02CFF480_2___c** StaticGet___9()
	{
		return (::Class_2_E36A957E02CFF480_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex)->GetStaticField(0x27A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__CTOR_OFFSET))(this);
	}

	::System::Void _TakePromotionReward_b__0_0(::Class_1_C821CB457FB5EBC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET))(this, a1);
	}
};
