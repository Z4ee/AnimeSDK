#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x108374A0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x108374E0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__ONBIGSCENEDUNGEONEND_B__3_0_OFFSET UNITYSDK_OFFSET(0x108374F0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c_TypeDefinitionIndex = 64849;

	class ExitDonjonUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils___c_TypeDefinitionIndex)->GetStaticField(0x32EF0);
		}
		static ::Foundation::ViewObject::Donjon::ExitDonjonUtils___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::ExitDonjonUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils___c_TypeDefinitionIndex)->GetStaticField(0x32EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBigSceneDungeonEnd_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__ONBIGSCENEDUNGEONEND_B__3_0_OFFSET))(this);
		}
	};
}
