#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelNpcModelView.h"

#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A8E1670)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8E1740)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E1720)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNpcHipplenMiniModelView_TypeDefinitionIndex = 77863;

	class ChimeraDuelNpcHipplenMiniModelView : public ::RPG::Client::Prop::ChimeraDuelNpcModelView
	{
	public:
		static ::System::Int32* StaticGet_HBDKFNHJLAN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelNpcHipplenMiniModelView_TypeDefinitionIndex)->GetStaticField(0x14220);
		}
		::System::Boolean _IsLeftSide; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_ONENABLE_OFFSET))(this);
		}
	};
}
