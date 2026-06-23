#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_AD28E7CF47263F50_METHOD_1_44B1749488ABD866_OFFSET UNITYSDK_OFFSET(0x152074E0)
#define CLASS_1_AD28E7CF47263F50_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15207610)
#define CLASS_1_AD28E7CF47263F50_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x15207560)
#define CLASS_1_AD28E7CF47263F50__CTOR_OFFSET UNITYSDK_OFFSET(0x152074D0)

inline static constexpr unsigned int Class_1_AD28E7CF47263F50_TypeDefinitionIndex = 57511;

class Class_1_AD28E7CF47263F50 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AD28E7CF47263F50__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_AD28E7CF47263F50* Method_1_44B1749488ABD866(::System::Action* a1)
	{
		return ((::Class_1_AD28E7CF47263F50*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AD28E7CF47263F50_METHOD_1_44B1749488ABD866_OFFSET))(a1);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD28E7CF47263F50_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD28E7CF47263F50_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
