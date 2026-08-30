#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C821CB457FB5EBC6_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E36A957E02CFF480_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3D4C20)
#define CLASS_2_E36A957E02CFF480_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF3D4C60)
#define CLASS_2_E36A957E02CFF480_2___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET UNITYSDK_OFFSET(0xF3D4C70)

inline static constexpr unsigned int Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex = 62851;

class Class_2_E36A957E02CFF480_2___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_C821CB457FB5EBC6_1*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_1_C821CB457FB5EBC6_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex)->GetStaticField(0x127E0);
	}
	static ::Class_2_E36A957E02CFF480_2___c** StaticGet___9()
	{
		return (::Class_2_E36A957E02CFF480_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E36A957E02CFF480_2___c_TypeDefinitionIndex)->GetStaticField(0x127E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__CTOR_OFFSET))(this);
	}

	::System::Void _TakePromotionReward_b__0_0(::Class_1_C821CB457FB5EBC6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_1*))((::PBYTE)hIl2Cpp + CLASS_2_E36A957E02CFF480_2___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET))(this, a1);
	}
};
