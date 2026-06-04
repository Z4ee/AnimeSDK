#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Mono { class FiveDimTriggerRegionPlugin; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC056B40)
#define RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC056B80)
#define RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__GET__ONTRANSFORMCHANGECLOSURE_B__5_0_OFFSET UNITYSDK_OFFSET(0xC056B90)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimTriggerRegionPlugin___c_TypeDefinitionIndex = 70601;

	class FiveDimTriggerRegionPlugin___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Mono::FiveDimTriggerRegionPlugin___c** StaticGet___9()
		{
			return (::RPG::Client::Mono::FiveDimTriggerRegionPlugin___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimTriggerRegionPlugin___c_TypeDefinitionIndex)->GetStaticField(0x5FBD0);
		}
		static ::System::Action_1<::RPG::Client::Mono::FiveDimTriggerRegionPlugin*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::RPG::Client::Mono::FiveDimTriggerRegionPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimTriggerRegionPlugin___c_TypeDefinitionIndex)->GetStaticField(0x5FBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__CTOR_OFFSET))(this);
		}

		::System::Void _get__OnTransformChangeClosure_b__5_0(::RPG::Client::Mono::FiveDimTriggerRegionPlugin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Mono::FiveDimTriggerRegionPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMTRIGGERREGIONPLUGIN___C__GET__ONTRANSFORMCHANGECLOSURE_B__5_0_OFFSET))(this, a1);
		}
	};
}
