#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E748840)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS60_0__RECORDERALTER_B__0_OFFSET UNITYSDK_OFFSET(0x1E7488D0)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS60_0__RECORDERALTER_B__1_OFFSET UNITYSDK_OFFSET(0x1E748850)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialInfo___c__DisplayClass60_0_TypeDefinitionIndex = 32180;

	class MaterialInfo___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::String* valKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RecorderAlter_b__1(::MoleMole::Timeline::ColorRecorderUnit* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS60_0__RECORDERALTER_B__1_OFFSET))(this, item);
		}

		::System::Boolean _RecorderAlter_b__0(::MoleMole::Timeline::FloatRecorderUnit* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS60_0__RECORDERALTER_B__0_OFFSET))(this, item);
		}
	};
}
