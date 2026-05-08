#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x111AF150)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111AF190)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__12_0_OFFSET UNITYSDK_OFFSET(0x111AF1A0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager___c_TypeDefinitionIndex = 60748;

	class DonjonFloorManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x45220);
		}
		static ::Foundation::ViewObject::Donjon::DonjonFloorManager___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::DonjonFloorManager___c**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x45228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPrepareEnterScene_b__12_0(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__12_0_OFFSET))(this, decor);
		}
	};
}
