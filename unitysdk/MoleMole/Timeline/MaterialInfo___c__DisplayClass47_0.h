#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD09050)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS47_0__RECOVER_B__0_OFFSET UNITYSDK_OFFSET(0x1DD09060)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialInfo___c__DisplayClass47_0_TypeDefinitionIndex = 32179;

	class MaterialInfo___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MoleMole::Timeline::FloatRecorderUnit* floatValConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Recover_b__0(::System::String* propertyName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__DISPLAYCLASS47_0__RECOVER_B__0_OFFSET))(this, propertyName);
		}
	};
}
