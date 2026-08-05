#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x191B3280)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x191B3270)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191B3220)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191B3260)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectStateWidget___c_TypeDefinitionIndex = 52739;

	class SceneObjectStateWidget___c : public ::System::Object
	{
	public:
		static ::MoleMole::SceneObjectStateWidget___c** StaticGet___9()
		{
			return (::MoleMole::SceneObjectStateWidget___c**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectStateWidget___c_TypeDefinitionIndex)->GetStaticField(0x3CCC0);
		}
		static ::System::Action** StaticGet___9__43_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectStateWidget___c_TypeDefinitionIndex)->GetStaticField(0x3CCC8);
		}
		static ::System::Action** StaticGet___9__43_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectStateWidget___c_TypeDefinitionIndex)->GetStaticField(0x3CCD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
