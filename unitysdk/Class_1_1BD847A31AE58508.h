#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E;
class Class_1_21BD3AD2A1214F1C;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_1BD847A31AE58508_GET_GUIDEPROMISE_OFFSET UNITYSDK_OFFSET(0x1590FA60)
#define CLASS_1_1BD847A31AE58508_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1590FA40)
#define CLASS_1_1BD847A31AE58508_METHOD_1_A0FECB40FCCACBA7_OFFSET UNITYSDK_OFFSET(0x1590FA80)
#define CLASS_1_1BD847A31AE58508_SET_GUIDEPROMISE_OFFSET UNITYSDK_OFFSET(0x1590FA70)
#define CLASS_1_1BD847A31AE58508_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1590FA50)
#define CLASS_1_1BD847A31AE58508__CTOR_OFFSET UNITYSDK_OFFSET(0x1590FDA0)

inline static constexpr unsigned int Class_1_1BD847A31AE58508_TypeDefinitionIndex = 79487;

class Class_1_1BD847A31AE58508 : public ::System::Object
{
public:
	::Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E* _Target_k__BackingField; // 0x10
	::RPG::Client::Promises::Promise_1<::System::Boolean>* _GuidePromise_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508__CTOR_OFFSET))(this);
	}

	::Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E* get_Target()
	{
		return ((::Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_GET_TARGET_OFFSET))(this);
	}

	::System::Void set_Target(::Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1BD847A31AE58508_Class_1_3BF89FA580FCE89E*))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_SET_TARGET_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise_1<::System::Boolean>* get_GuidePromise()
	{
		return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_GET_GUIDEPROMISE_OFFSET))(this);
	}

	::System::Void set_GuidePromise(::RPG::Client::Promises::Promise_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_SET_GUIDEPROMISE_OFFSET))(this, a1);
	}

	::Class_1_21BD3AD2A1214F1C* Method_1_A0FECB40FCCACBA7()
	{
		return ((::Class_1_21BD3AD2A1214F1C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD847A31AE58508_METHOD_1_A0FECB40FCCACBA7_OFFSET))(this);
	}
};
