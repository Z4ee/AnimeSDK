#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_9B6FEDE9E4474E79_OFFSET UNITYSDK_OFFSET(0x174D6680)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_DCABBC680DD0F634_OFFSET UNITYSDK_OFFSET(0x174D6840)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174D68D0)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x174D6850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondConfigBase_TypeDefinitionIndex = 17918;

	class PlayerCondConfigBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*>*>** StaticGet__FromBinary_PlayerCondConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerCondConfigBase_TypeDefinitionIndex)->GetStaticField(0x307B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_4_9B6FEDE9E4474E79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_9B6FEDE9E4474E79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCABBC680DD0F634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_DCABBC680DD0F634_OFFSET))(a1, a2);
		}
	};
}
