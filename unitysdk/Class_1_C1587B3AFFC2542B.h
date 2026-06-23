#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C1587B3AFFC2542B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15B1FD10)
#define CLASS_1_C1587B3AFFC2542B_METHOD_1_AED51F4D557EB1D5_OFFSET UNITYSDK_OFFSET(0x15B1FD40)
#define CLASS_1_C1587B3AFFC2542B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15B1FD20)
#define CLASS_1_C1587B3AFFC2542B__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1FD30)

inline static constexpr unsigned int Class_1_C1587B3AFFC2542B_TypeDefinitionIndex = 81453;

class Class_1_C1587B3AFFC2542B : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C1587B3AFFC2542B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1587B3AFFC2542B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1587B3AFFC2542B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_AED51F4D557EB1D5(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C1587B3AFFC2542B_METHOD_1_AED51F4D557EB1D5_OFFSET))(this, a1, a2, a3);
	}
};
