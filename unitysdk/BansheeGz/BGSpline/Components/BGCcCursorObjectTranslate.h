#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursorObject.h"

namespace System { class EventHandler; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE_ADD_OBJECTTRANSLATED_OFFSET UNITYSDK_OFFSET(0x17B8C8F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE_REMOVE_OBJECTTRANSLATED_OFFSET UNITYSDK_OFFSET(0x17B8C950)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B8C9B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B8CC70)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorObjectTranslate_TypeDefinitionIndex = 33840;

	class BGCcCursorObjectTranslate : public ::BansheeGz::BGSpline::Components::BGCcWithCursorObject
	{
	public:
		::System::EventHandler* ObjectTranslated; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE__CTOR_OFFSET))(this);
		}

		::System::Void add_ObjectTranslated(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE_ADD_OBJECTTRANSLATED_OFFSET))(this, value);
		}

		::System::Void remove_ObjectTranslated(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE_REMOVE_OBJECTTRANSLATED_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTTRANSLATE_UPDATE_OFFSET))(this);
		}
	};
}
