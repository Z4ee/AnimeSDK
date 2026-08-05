#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1271A130)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1271A170)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTLEVELREADY_B__16_0_OFFSET UNITYSDK_OFFSET(0x1271A340)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTPREPAREENTERSCENE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1271A260)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1271A180)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager___c_TypeDefinitionIndex = 69032;

	class DonjonFloorManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x49EE0);
		}
		static ::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__16_0()
		{
			return (::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x49EE8);
		}
		static ::Foundation::ViewObject::Donjon::DonjonFloorManager___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::DonjonFloorManager___c**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x49EF0);
		}
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x49EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPrepareEnterScene_b__14_0(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__14_0_OFFSET))(this, decor);
		}

		::System::Void _OnPostPrepareEnterScene_b__15_0(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTPREPAREENTERSCENE_B__15_0_OFFSET))(this, decor);
		}

		::System::Void _OnPostLevelReady_b__16_0(::Foundation::ViewObject::Donjon::DonjonFloorObject* floorObject, ::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTLEVELREADY_B__16_0_OFFSET))(this, floorObject, decor);
		}
	};
}
