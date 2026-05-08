#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A7230)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS35_0__RECORDERALTER_B__0_OFFSET UNITYSDK_OFFSET(0x1B7AC410)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS35_0__RECORDERALTER_B__1_OFFSET UNITYSDK_OFFSET(0x1B7AC390)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialInfo___c__DisplayClass35_0_TypeDefinitionIndex = 30648;

	class SourceMaterialInfo___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::String* valKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RecorderAlter_b__1(::MoleMole::Timeline::ColorRecorderUnit* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS35_0__RECORDERALTER_B__1_OFFSET))(this, item);
		}

		::System::Boolean _RecorderAlter_b__0(::MoleMole::Timeline::FloatRecorderUnit* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS35_0__RECORDERALTER_B__0_OFFSET))(this, item);
		}
	};
}
