#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_39;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RELICPRESETMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF9F870)
#define RPG_CLIENT_RELICPRESETMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9F8B0)
#define RPG_CLIENT_RELICPRESETMODEL___C__GETAVATARRELICPRESETPLAN_B__10_0_OFFSET UNITYSDK_OFFSET(0xAF9F8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetModel___c_TypeDefinitionIndex = 61575;

	class RelicPresetModel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7FF19F6206AF6DD7_39*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::Class_1_7FF19F6206AF6DD7_39*>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetModel___c_TypeDefinitionIndex)->GetStaticField(0x146B0);
		}
		static ::RPG::Client::RelicPresetModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetModel___c_TypeDefinitionIndex)->GetStaticField(0x146B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _GetAvatarRelicPresetPlan_b__10_0(::Class_1_7FF19F6206AF6DD7_39* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__GETAVATARRELICPRESETPLAN_B__10_0_OFFSET))(this, rsp);
		}
	};
}
