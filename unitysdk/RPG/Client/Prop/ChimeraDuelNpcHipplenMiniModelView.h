#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelNpcModelView.h"

#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA057170)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xA057240)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA057220)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNpcHipplenMiniModelView_TypeDefinitionIndex = 63784;

	class ChimeraDuelNpcHipplenMiniModelView : public ::RPG::Client::Prop::ChimeraDuelNpcModelView
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelNpcHipplenMiniModelView_TypeDefinitionIndex)->GetStaticField(0x12BC0);
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
