#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_11A94C28E8E3ACC1_CLASS_1_A6E4E6461B310F59_METHOD_1_EBC1C6E91542E706_OFFSET UNITYSDK_OFFSET(0x143E5870)
#define CLASS_2_11A94C28E8E3ACC1_CLASS_1_A6E4E6461B310F59__CTOR_OFFSET UNITYSDK_OFFSET(0x143E5860)

inline static constexpr unsigned int Class_2_11A94C28E8E3ACC1_Class_1_A6E4E6461B310F59_TypeDefinitionIndex = 71391;

class Class_2_11A94C28E8E3ACC1_Class_1_A6E4E6461B310F59 : public ::System::Object
{
public:
	::System::Action_3<::System::Boolean, ::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_CLASS_1_A6E4E6461B310F59__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBC1C6E91542E706(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_CLASS_1_A6E4E6461B310F59_METHOD_1_EBC1C6E91542E706_OFFSET))(this, a1);
	}
};
