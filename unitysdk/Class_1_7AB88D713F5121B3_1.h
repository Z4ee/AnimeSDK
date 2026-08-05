#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1025;

#define CLASS_1_7AB88D713F5121B3_1_METHOD_1_A7B86BF7FC0871BA_OFFSET UNITYSDK_OFFSET(0x137C29E0)
#define CLASS_1_7AB88D713F5121B3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x137C29D0)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_1_TypeDefinitionIndex = 65136;

class Class_1_7AB88D713F5121B3_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_1__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1025* Method_1_A7B86BF7FC0871BA()
	{
		return ((::Class_2_208CC9941471731A_1025*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_1_METHOD_1_A7B86BF7FC0871BA_OFFSET))(this);
	}
};
