#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_64F26B9ED0181D80.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_BATTLEINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD335E0)
#define RPG_GAMECORE_BATTLEINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCD33610)
#define RPG_GAMECORE_BATTLEINSTANCE___C__GENERATETURNSNAPSHOT_B__8_0_OFFSET UNITYSDK_OFFSET(0xCD33620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance___c_TypeDefinitionIndex = 52308;

	class BattleInstance___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Struct_2_64F26B9ED0181D80>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Struct_2_64F26B9ED0181D80>**)Il2CppClass::FromTypeDefinitionIndex(BattleInstance___c_TypeDefinitionIndex)->GetStaticField(0x66130);
		}
		static ::RPG::GameCore::BattleInstance___c** StaticGet___9()
		{
			return (::RPG::GameCore::BattleInstance___c**)Il2CppClass::FromTypeDefinitionIndex(BattleInstance___c_TypeDefinitionIndex)->GetStaticField(0x66138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateTurnSnapshot_b__8_0(::Struct_2_64F26B9ED0181D80 a1, ::Struct_2_64F26B9ED0181D80 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_64F26B9ED0181D80, ::Struct_2_64F26B9ED0181D80))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__GENERATETURNSNAPSHOT_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
