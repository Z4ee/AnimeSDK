#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1513EE00)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1513EE40)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__ONSTART_B__14_1_OFFSET UNITYSDK_OFFSET(0x1513EE50)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__REFRESHDETAIL_B__24_1_OFFSET UNITYSDK_OFFSET(0x1513EE60)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__REFRESHLEVELLIST_B__28_1_OFFSET UNITYSDK_OFFSET(0x1513F060)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c_TypeDefinitionIndex = 84621;

	class UITowerDefenseLevelPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITowerDefenseLevelPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITowerDefenseLevelPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x473D0);
		}
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x473D8);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__24_1()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x473E0);
		}
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x473E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__ONSTART_B__14_1_OFFSET))(this);
		}

		::System::Int32 _RefreshDetail_b__24_1(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__REFRESHDETAIL_B__24_1_OFFSET))(this, a, b);
		}

		::System::Void _RefreshLevelList_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__REFRESHLEVELLIST_B__28_1_OFFSET))(this);
		}
	};
}
