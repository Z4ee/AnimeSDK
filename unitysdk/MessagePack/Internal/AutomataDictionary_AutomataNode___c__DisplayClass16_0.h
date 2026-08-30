#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16684F30)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS16_0__EMITSEARCHNEXTCORE_B__2_OFFSET UNITYSDK_OFFSET(0x16685170)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS16_0__EMITSEARCHNEXTCORE_B__3_OFFSET UNITYSDK_OFFSET(0x166850E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode___c__DisplayClass16_0_TypeDefinitionIndex = 7230;

	class AutomataDictionary_AutomataNode___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Reflection::Emit::Label _EmitSearchNextCore_b__3(::System::Int32 a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS16_0__EMITSEARCHNEXTCORE_B__3_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label _EmitSearchNextCore_b__2(::System::Int32 a1)
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE___C__DISPLAYCLASS16_0__EMITSEARCHNEXTCORE_B__2_OFFSET))(this, a1);
		}
	};
}
