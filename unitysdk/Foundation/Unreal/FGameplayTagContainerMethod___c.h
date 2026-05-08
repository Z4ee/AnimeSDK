#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA631F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA63230)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C___CCTOR_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BA63240)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagContainerMethod___c_TypeDefinitionIndex = 8793;

	class FGameplayTagContainerMethod___c : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTagContainerMethod___c** StaticGet___9()
		{
			return (::Foundation::Unreal::FGameplayTagContainerMethod___c**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainerMethod___c_TypeDefinitionIndex)->GetStaticField(0x7D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__20_0(::Foundation::Unreal::FGameplayTag a, ::Foundation::Unreal::FGameplayTag b)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINERMETHOD___C___CCTOR_B__20_0_OFFSET))(this, a, b);
		}
	};
}
