#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148D6D70)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148D6DB0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__ONBIGSCENEDUNGEONEND_B__4_0_OFFSET UNITYSDK_OFFSET(0x148D6DC0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c_TypeDefinitionIndex = 69993;

	class ExitDonjonUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils___c_TypeDefinitionIndex)->GetStaticField(0x35100);
		}
		static ::Foundation::ViewObject::Donjon::ExitDonjonUtils___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::ExitDonjonUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils___c_TypeDefinitionIndex)->GetStaticField(0x35108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBigSceneDungeonEnd_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__ONBIGSCENEDUNGEONEND_B__4_0_OFFSET))(this);
		}
	};
}
