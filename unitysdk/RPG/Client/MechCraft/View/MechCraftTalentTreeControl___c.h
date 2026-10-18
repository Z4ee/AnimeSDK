#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6706A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD6706E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C___FINDPOINTCONTROL_B__14_1_OFFSET UNITYSDK_OFFSET(0xD6706F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentTreeControl___c_TypeDefinitionIndex = 80055;

	class MechCraftTalentTreeControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MechCraft::View::MechCraftTalentTreeControl___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::View::MechCraftTalentTreeControl___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftTalentTreeControl___c_TypeDefinitionIndex)->GetStaticField(0x56450);
		}
		static ::System::Func_2<::RPG::Client::MechCraft::View::MechCraftTalentPointControl*, ::System::Boolean>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::MechCraft::View::MechCraftTalentPointControl*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftTalentTreeControl___c_TypeDefinitionIndex)->GetStaticField(0x56458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __FindPointControl_b__14_1(::RPG::Client::MechCraft::View::MechCraftTalentPointControl* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL___C___FINDPOINTCONTROL_B__14_1_OFFSET))(this, a1);
		}
	};
}
