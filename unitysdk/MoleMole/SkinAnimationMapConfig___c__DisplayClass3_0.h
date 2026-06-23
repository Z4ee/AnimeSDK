#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }

#define MOLEMOLE_SKINANIMATIONMAPCONFIG___C__DISPLAYCLASS3_0__ADDCOLLECT_B__0_OFFSET UNITYSDK_OFFSET(0x183991C0)
#define MOLEMOLE_SKINANIMATIONMAPCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183991B0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinAnimationMapConfig___c__DisplayClass3_0_TypeDefinitionIndex = 81953;

	class SkinAnimationMapConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* skinName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINANIMATIONMAPCONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddCollect_b__0(::System::ValueTuple_2<::System::String*, ::System::String*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINANIMATIONMAPCONFIG___C__DISPLAYCLASS3_0__ADDCOLLECT_B__0_OFFSET))(this, item);
		}
	};
}
