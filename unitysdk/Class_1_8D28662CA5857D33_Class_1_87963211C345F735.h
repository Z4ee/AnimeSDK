#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_171;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_8D28662CA5857D33_CLASS_1_87963211C345F735_METHOD_1_9A20A2A8EA3174BD_OFFSET UNITYSDK_OFFSET(0x18080880)
#define CLASS_1_8D28662CA5857D33_CLASS_1_87963211C345F735__CTOR_OFFSET UNITYSDK_OFFSET(0x18080870)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_Class_1_87963211C345F735_TypeDefinitionIndex = 76543;

class Class_1_8D28662CA5857D33_Class_1_87963211C345F735 : public ::System::Object
{
public:
	::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_171*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_87963211C345F735__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A20A2A8EA3174BD(::System::Boolean a1, ::Class_3_025FF4981524A424_171* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_171*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_87963211C345F735_METHOD_1_9A20A2A8EA3174BD_OFFSET))(this, a1, a2);
	}
};
