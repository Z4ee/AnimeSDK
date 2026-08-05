#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DebugForCPInspector_BuffInfo.h"
#include "unitysdk/DebugForCPInspector_EffInfo.h"
#include "unitysdk/System/Object.h"

#define DEBUGFORCPINSPECTOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E957620)
#define DEBUGFORCPINSPECTOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E957660)
#define DEBUGFORCPINSPECTOR___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E957670)
#define DEBUGFORCPINSPECTOR___C___CCTOR_B__29_1_OFFSET UNITYSDK_OFFSET(0x1E957690)

inline static constexpr unsigned int DebugForCPInspector___c_TypeDefinitionIndex = 94700;

class DebugForCPInspector___c : public ::System::Object
{
public:
	static ::DebugForCPInspector___c** StaticGet___9()
	{
		return (::DebugForCPInspector___c**)Il2CppClass::FromTypeDefinitionIndex(DebugForCPInspector___c_TypeDefinitionIndex)->GetStaticField(0x526C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__29_0(::DebugForCPInspector_EffInfo l, ::DebugForCPInspector_EffInfo r)
	{
		return ((::System::Int32(*)(::PVOID, ::DebugForCPInspector_EffInfo, ::DebugForCPInspector_EffInfo))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR___C___CCTOR_B__29_0_OFFSET))(this, l, r);
	}

	::System::Int32 __cctor_b__29_1(::DebugForCPInspector_BuffInfo l, ::DebugForCPInspector_BuffInfo r)
	{
		return ((::System::Int32(*)(::PVOID, ::DebugForCPInspector_BuffInfo, ::DebugForCPInspector_BuffInfo))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR___C___CCTOR_B__29_1_OFFSET))(this, l, r);
	}
};
