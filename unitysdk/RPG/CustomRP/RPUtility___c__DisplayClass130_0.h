#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS130_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E4AF0)
#define RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS130_0__GETASSEMBLYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1C6E5220)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPUtility___c__DisplayClass130_0_TypeDefinitionIndex = 37209;

	class RPUtility___c__DisplayClass130_0 : public ::System::Object
	{
	public:
		::System::String* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS130_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAssemblyType_b__0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS130_0__GETASSEMBLYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
