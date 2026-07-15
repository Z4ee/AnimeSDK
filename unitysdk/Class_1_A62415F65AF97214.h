#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ExtraEffectRow; }

#define CLASS_1_A62415F65AF97214_METHOD_1_5039A15A28C4B4F2_OFFSET UNITYSDK_OFFSET(0x15091D20)
#define CLASS_1_A62415F65AF97214__CTOR_OFFSET UNITYSDK_OFFSET(0x15091D90)

inline static constexpr unsigned int Class_1_A62415F65AF97214_TypeDefinitionIndex = 76089;

class Class_1_A62415F65AF97214 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A62415F65AF97214__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ExtraEffectRow* Method_1_5039A15A28C4B4F2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A62415F65AF97214_METHOD_1_5039A15A28C4B4F2_OFFSET))(this, a1);
	}
};
