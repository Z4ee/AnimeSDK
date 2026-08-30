#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS129_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E4A00)
#define RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS129_0__GETASSEMBLYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1C6E5060)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPUtility___c__DisplayClass129_0_TypeDefinitionIndex = 37208;

	class RPUtility___c__DisplayClass129_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::String* interfaceName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS129_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAssemblyType_b__0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPUTILITY___C__DISPLAYCLASS129_0__GETASSEMBLYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
