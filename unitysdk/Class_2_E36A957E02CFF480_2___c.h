#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C821CB457FB5EBC6_3;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E36A957E02CFF480_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB94040)
#define CLASS_2_E36A957E02CFF480_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEB94080)
#define CLASS_2_E36A957E02CFF480_2___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET UNITYSDK_OFFSET(0xEB94090)

inline static constexpr unsigned int Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex = 62784;

class Class_2_E36A957E02CFF480_2___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_C821CB457FB5EBC6_3*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_1_C821CB457FB5EBC6_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex)->GetStaticField(0x57810);
	}
	static ::Class_2_E36A957E02CFF480_2___c** StaticGet___9()
	{
		return (::Class_2_E36A957E02CFF480_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex)->GetStaticField(0x57818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__CTOR_OFFSET))(this);
	}

	::System::Void _TakePromotionReward_b__0_0(::Class_1_C821CB457FB5EBC6_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_3*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET))(this, a1);
	}
};
