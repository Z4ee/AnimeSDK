#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_170;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DBD400)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBD440)
#define MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER___C__ONCLICKBTN_B__34_1_OFFSET UNITYSDK_OFFSET(0x14DBD450)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController___c_TypeDefinitionIndex = 75263;

	class UISuibianDevelopRightWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_025FF4981524A424_170*>** StaticGet___9__34_1()
		{
			return (::System::Action_1<::Class_3_025FF4981524A424_170*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianDevelopRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x380D0);
		}
		static ::MoleMole::UISuibianDevelopRightWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianDevelopRightWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianDevelopRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x380D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBtn_b__34_1(::Class_3_025FF4981524A424_170* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_170*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANDEVELOPRIGHTWIDGETCONTROLLER___C__ONCLICKBTN_B__34_1_OFFSET))(this, _);
		}
	};
}
