#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_594;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0A2A241FA995454D_METHOD_1_125678244B96159A_OFFSET UNITYSDK_OFFSET(0xF8D1A60)
#define CLASS_1_0A2A241FA995454D__CTOR_OFFSET UNITYSDK_OFFSET(0xF8D1A50)

inline static constexpr unsigned int Class_1_0A2A241FA995454D_TypeDefinitionIndex = 86234;

class Class_1_0A2A241FA995454D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2A241FA995454D__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_594* Method_1_125678244B96159A()
	{
		return ((::Class_2_208CC9941471731A_594*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2A241FA995454D_METHOD_1_125678244B96159A_OFFSET))(this);
	}
};
