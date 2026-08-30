#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B7473CCDD2B9AE2A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC15C240)
#define CLASS_1_B7473CCDD2B9AE2A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC15C280)
#define CLASS_1_B7473CCDD2B9AE2A___C__TRYCREATEWITHEFFECT_B__2_0_OFFSET UNITYSDK_OFFSET(0xC15C290)
#define CLASS_1_B7473CCDD2B9AE2A___C___TRYCREATEEFFECT_B__6_1_OFFSET UNITYSDK_OFFSET(0xC15C2A0)

inline static constexpr unsigned int Class_1_B7473CCDD2B9AE2A___c_TypeDefinitionIndex = 77876;

class Class_1_B7473CCDD2B9AE2A___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7473CCDD2B9AE2A___c_TypeDefinitionIndex)->GetStaticField(0x1CE50);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7473CCDD2B9AE2A___c_TypeDefinitionIndex)->GetStaticField(0x1CE58);
	}
	static ::Class_1_B7473CCDD2B9AE2A___c** StaticGet___9()
	{
		return (::Class_1_B7473CCDD2B9AE2A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7473CCDD2B9AE2A___c_TypeDefinitionIndex)->GetStaticField(0x1CE60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7473CCDD2B9AE2A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7473CCDD2B9AE2A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _TryCreateWithEffect_b__2_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7473CCDD2B9AE2A___C__TRYCREATEWITHEFFECT_B__2_0_OFFSET))(this, a1);
	}

	::System::Boolean __TryCreateEffect_b__6_1(::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_B7473CCDD2B9AE2A___C___TRYCREATEEFFECT_B__6_1_OFFSET))(this, a1);
	}
};
