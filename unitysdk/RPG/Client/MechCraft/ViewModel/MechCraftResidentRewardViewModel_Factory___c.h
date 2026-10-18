#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD67B6F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CREATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xD67B740)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD67B730)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftResidentRewardViewModel_Factory___c_TypeDefinitionIndex = 79688;

	class MechCraftResidentRewardViewModel_Factory___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::ViewModel::MechCraftResidentRewardViewModel_Factory___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::ViewModel::MechCraftResidentRewardViewModel_Factory___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftResidentRewardViewModel_Factory___c_TypeDefinitionIndex)->GetStaticField(0x4EE50);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftResidentRewardViewModel_Factory___c_TypeDefinitionIndex)->GetStaticField(0x4EE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__8_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_FACTORY___C__CREATE_B__8_0_OFFSET))(this, a1);
		}
	};
}
