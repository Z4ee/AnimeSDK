#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB340D0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS24_0__RECOVER_B__0_OFFSET UNITYSDK_OFFSET(0x1FB340E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialInfo___c__DisplayClass24_0_TypeDefinitionIndex = 32822;

	class SourceMaterialInfo___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::Timeline::FloatRecorderUnit* floatValConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Recover_b__0(::System::String* propertyName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__DISPLAYCLASS24_0__RECOVER_B__0_OFFSET))(this, propertyName);
		}
	};
}
