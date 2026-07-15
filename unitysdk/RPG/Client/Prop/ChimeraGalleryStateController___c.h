#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraGalleryStateController_ActConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FF5830)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF5870)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C___INIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x18FF5880)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGalleryStateController___c_TypeDefinitionIndex = 74539;

	class ChimeraGalleryStateController___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::ChimeraGalleryStateController___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraGalleryStateController___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGalleryStateController___c_TypeDefinitionIndex)->GetStaticField(0x1DA0);
		}
		static ::System::Func_2<::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGalleryStateController___c_TypeDefinitionIndex)->GetStaticField(0x1DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__10_0(::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___C___INIT_B__10_0_OFFSET))(this, a1);
		}
	};
}
