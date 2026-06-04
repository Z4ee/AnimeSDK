#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_75B65B88FAFB3689___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD3FCF0)
#define CLASS_1_75B65B88FAFB3689___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3FD30)
#define CLASS_1_75B65B88FAFB3689___C__TRYCREATEWITHEFFECT_B__2_0_OFFSET UNITYSDK_OFFSET(0xAD3FD40)
#define CLASS_1_75B65B88FAFB3689___C___TRYCREATEEFFECT_B__6_1_OFFSET UNITYSDK_OFFSET(0xAD3FD50)

inline static constexpr unsigned int Class_1_75B65B88FAFB3689___c_TypeDefinitionIndex = 72865;

class Class_1_75B65B88FAFB3689___c : public ::System::Object
{
public:
	static ::Class_1_75B65B88FAFB3689___c** StaticGet___9()
	{
		return (::Class_1_75B65B88FAFB3689___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75B65B88FAFB3689___c_TypeDefinitionIndex)->GetStaticField(0x25C80);
	}
	static ::System::Func_2<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75B65B88FAFB3689___c_TypeDefinitionIndex)->GetStaticField(0x25C88);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75B65B88FAFB3689___c_TypeDefinitionIndex)->GetStaticField(0x25C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _TryCreateWithEffect_b__2_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689___C__TRYCREATEWITHEFFECT_B__2_0_OFFSET))(this, a1);
	}

	::System::Boolean __TryCreateEffect_b__6_1(::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689___C___TRYCREATEEFFECT_B__6_1_OFFSET))(this, a1);
	}
};
