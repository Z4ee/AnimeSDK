#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C214950)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C214990)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER___C__OP_EQUALITY_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C2149A0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagContainer___c_TypeDefinitionIndex = 9153;

	class FGameplayTagContainer___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_3<::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainer___c_TypeDefinitionIndex)->GetStaticField(0x7F60);
		}
		static ::Foundation::Unreal::FGameplayTagContainer___c** StaticGet___9()
		{
			return (::Foundation::Unreal::FGameplayTagContainer___c**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainer___c_TypeDefinitionIndex)->GetStaticField(0x7F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _op_Equality_b__7_0(::Foundation::Unreal::FGameplayTag a, ::Foundation::Unreal::FGameplayTagContainer b)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER___C__OP_EQUALITY_B__7_0_OFFSET))(this, a, b);
		}
	};
}
