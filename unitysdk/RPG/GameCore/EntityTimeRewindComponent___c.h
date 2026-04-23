#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB66BA80)
#define RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB66BAC0)
#define RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__MANUALSNAPLOOPREWINDRATIO_B__269_0_OFFSET UNITYSDK_OFFSET(0xB66BAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTimeRewindComponent___c_TypeDefinitionIndex = 52973;

	class EntityTimeRewindComponent___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::EntityTimeRewindComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::EntityTimeRewindComponent___c**)Il2CppClass::FromTypeDefinitionIndex(EntityTimeRewindComponent___c_TypeDefinitionIndex)->GetStaticField(0x4D280);
		}
		static ::System::Action_2<::RPG::GameCore::EntityTimeRewindComponent*, ::System::Action*>** StaticGet___9__269_0()
		{
			return (::System::Action_2<::RPG::GameCore::EntityTimeRewindComponent*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(EntityTimeRewindComponent___c_TypeDefinitionIndex)->GetStaticField(0x4D288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Void _ManualSnapLoopRewindRatio_b__269_0(::RPG::GameCore::EntityTimeRewindComponent* self, ::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__MANUALSNAPLOOPREWINDRATIO_B__269_0_OFFSET))(this, self, cb);
		}
	};
}
