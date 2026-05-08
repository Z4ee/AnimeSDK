#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFFB030)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER___C__CHECKVALIDGAMEPLAYTAGSIMPLESTRINGVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x1BFFB080)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFB070)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagManager___c_TypeDefinitionIndex = 8815;

	class GameplayTagManager___c : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::GameplayTagManager___c** StaticGet___9()
		{
			return (::Foundation::Unreal::GameplayTagManager___c**)Il2CppClass::FromTypeDefinitionIndex(GameplayTagManager___c_TypeDefinitionIndex)->GetStaticField(0x7EB0);
		}
		static ::System::Predicate_1<::System::Char>** StaticGet___9__18_0()
		{
			return (::System::Predicate_1<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(GameplayTagManager___c_TypeDefinitionIndex)->GetStaticField(0x7EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckValidGameplayTagSimpleStringView_b__18_0(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER___C__CHECKVALIDGAMEPLAYTAGSIMPLESTRINGVIEW_B__18_0_OFFSET))(this, ch);
		}
	};
}
