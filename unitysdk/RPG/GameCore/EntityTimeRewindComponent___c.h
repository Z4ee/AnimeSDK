#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA920B40)
#define RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA920B80)
#define RPG_GAMECORE_ENTITYTIMEREWINDCOMPONENT___C__MANUALSNAPLOOPREWINDRATIO_B__269_0_OFFSET UNITYSDK_OFFSET(0xA920B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTimeRewindComponent___c_TypeDefinitionIndex = 46298;

	class EntityTimeRewindComponent___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::GameCore::EntityTimeRewindComponent*, ::System::Action*>** StaticGet___9__269_0()
		{
			return (::System::Action_2<::RPG::GameCore::EntityTimeRewindComponent*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(EntityTimeRewindComponent___c_TypeDefinitionIndex)->GetStaticField(0x464E0);
		}
		static ::RPG::GameCore::EntityTimeRewindComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::EntityTimeRewindComponent___c**)Il2CppClass::FromTypeDefinitionIndex(EntityTimeRewindComponent___c_TypeDefinitionIndex)->GetStaticField(0x464E8);
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
