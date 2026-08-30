#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_20;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RELICPRESETMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B672770)
#define RPG_CLIENT_RELICPRESETMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6727B0)
#define RPG_CLIENT_RELICPRESETMODEL___C__GETAVATARRELICPRESETPLAN_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B6727C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetModel___c_TypeDefinitionIndex = 66865;

	class RelicPresetModel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_28D410CCE235575F_20*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::Class_1_28D410CCE235575F_20*>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetModel___c_TypeDefinitionIndex)->GetStaticField(0x66980);
		}
		static ::RPG::Client::RelicPresetModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetModel___c_TypeDefinitionIndex)->GetStaticField(0x66988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _GetAvatarRelicPresetPlan_b__10_0(::Class_1_28D410CCE235575F_20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__GETAVATARRELICPRESETPLAN_B__10_0_OFFSET))(this, a1);
		}
	};
}
