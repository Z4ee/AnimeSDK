#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1288B2D0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1288B310)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTPREPAREENTERSCENE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1288B400)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1288B320)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager___c_TypeDefinitionIndex = 74374;

	class DonjonFloorManager___c : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::Donjon::DonjonFloorManager___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::DonjonFloorManager___c**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x45C50);
		}
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x45C58);
		}
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x45C60);
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
	};
}
