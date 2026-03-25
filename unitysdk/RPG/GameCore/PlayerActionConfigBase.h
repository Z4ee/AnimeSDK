#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_7542D13DC033961A_OFFSET UNITYSDK_OFFSET(0x174C8CC0)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_B285F723C48D871F_OFFSET UNITYSDK_OFFSET(0x174C8B00)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174C8D20)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C8CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerActionConfigBase_TypeDefinitionIndex = 17916;

	class PlayerActionConfigBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerActionConfigBase*>*>** StaticGet__FromBinary_PlayerActionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerActionConfigBase_TypeDefinitionIndex)->GetStaticField(0x30620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_4_B285F723C48D871F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_B285F723C48D871F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7542D13DC033961A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_7542D13DC033961A_OFFSET))(a1, a2);
		}
	};
}
