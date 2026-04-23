#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicPresetPlanData; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__BUILDPLANVIEWMODELS_B__16_0_OFFSET UNITYSDK_OFFSET(0xAFA4B00)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFA4AB0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA4AF0)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__GETDISPLAYPLANS_B__17_0_OFFSET UNITYSDK_OFFSET(0xAFA4B40)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__GETDISPLAYPLANS_B__17_1_OFFSET UNITYSDK_OFFSET(0xAFA4B60)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetSaveDialogViewModel___c_TypeDefinitionIndex = 61586;

	class RelicPresetSaveDialogViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetSaveDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14A30);
		}
		static ::RPG::Client::RelicPresetSaveDialogViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetSaveDialogViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetSaveDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14A38);
		}
		static ::System::Comparison_1<::RPG::Client::RelicPresetPlanData*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::RelicPresetPlanData*>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetSaveDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14A40);
		}
		static ::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::RelicPresetPlanViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetSaveDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x14A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildPlanViewModels_b__16_0(::RPG::Client::RelicPresetPlanData* a, ::RPG::Client::RelicPresetPlanData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicPresetPlanData*, ::RPG::Client::RelicPresetPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__BUILDPLANVIEWMODELS_B__16_0_OFFSET))(this, a, b);
		}

		::System::Boolean _GetDisplayPlans_b__17_0(::RPG::Client::RelicPresetPlanViewModel* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__GETDISPLAYPLANS_B__17_0_OFFSET))(this, p);
		}

		::System::Boolean _GetDisplayPlans_b__17_1(::RPG::Client::RelicPresetPlanViewModel* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetPlanViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL___C__GETDISPLAYPLANS_B__17_1_OFFSET))(this, p);
		}
	};
}
