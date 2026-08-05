#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__APPLYTRIGGERHITANIMATORPARAM_B__65_0_OFFSET UNITYSDK_OFFSET(0x162F5E00)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162F5DB0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162F5DF0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovYokaiHenshinSubSystem___c_TypeDefinitionIndex = 81756;

	class ZenkovYokaiHenshinSubSystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::ZenkovYokaiHenshinSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::ZenkovYokaiHenshinSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x40310);
		}
		static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet___9__65_0()
		{
			return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x40318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyTriggerHitAnimatorParam_b__65_0(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__APPLYTRIGGERHITANIMATORPARAM_B__65_0_OFFSET))(this, entity);
		}
	};
}
