#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DA7C9B2D7841637.h"

namespace System { class Action; }

#define CLASS_3_42565DA77E1D8FCD_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11908EC0)
#define CLASS_3_42565DA77E1D8FCD_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11908FC0)
#define CLASS_3_42565DA77E1D8FCD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11908F30)
#define CLASS_3_42565DA77E1D8FCD_METHOD_3_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x11908E40)
#define CLASS_3_42565DA77E1D8FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x11908E20)

inline static constexpr unsigned int Class_3_42565DA77E1D8FCD_TypeDefinitionIndex = 66214;

class Class_3_42565DA77E1D8FCD : public ::Class_2_3DA7C9B2D7841637
{
public:
	::System::Action* Field_3_0; // 0x38

	::System::Void _ctor(::System::Double a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_42565DA77E1D8FCD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42565DA77E1D8FCD_METHOD_3_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42565DA77E1D8FCD_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42565DA77E1D8FCD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42565DA77E1D8FCD_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
