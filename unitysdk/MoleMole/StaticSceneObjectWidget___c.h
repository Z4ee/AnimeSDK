#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x15E5BAD0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15E5BAC0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E5BA70)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectWidget___c_TypeDefinitionIndex = 61301;

	class StaticSceneObjectWidget___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget___c_TypeDefinitionIndex)->GetStaticField(0x40580);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget___c_TypeDefinitionIndex)->GetStaticField(0x40588);
		}
		static ::MoleMole::StaticSceneObjectWidget___c** StaticGet___9()
		{
			return (::MoleMole::StaticSceneObjectWidget___c**)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget___c_TypeDefinitionIndex)->GetStaticField(0x40590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
