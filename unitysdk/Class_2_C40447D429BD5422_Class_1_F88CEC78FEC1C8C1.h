#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12573614267589AB.h"
#include "unitysdk/Enum_3_334CDFF338C5BE84.h"
#include "unitysdk/System/Object.h"

class Class_1_5CFE684023F165BE;
class Class_1_B0877C107BC7F2BF;
class Class_2_C40447D429BD5422;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C40447D429BD5422_CLASS_1_F88CEC78FEC1C8C1_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x12ABAB80)
#define CLASS_2_C40447D429BD5422_CLASS_1_F88CEC78FEC1C8C1_METHOD_1_B01156638FD29DB3_OFFSET UNITYSDK_OFFSET(0x12ABAB60)
#define CLASS_2_C40447D429BD5422_CLASS_1_F88CEC78FEC1C8C1__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABAB50)

inline static constexpr unsigned int Class_2_C40447D429BD5422_Class_1_F88CEC78FEC1C8C1_TypeDefinitionIndex = 71457;

class Class_2_C40447D429BD5422_Class_1_F88CEC78FEC1C8C1 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_5CFE684023F165BE*>* Field_1_15; // 0x10
	::System::Action* Field_1_8; // 0x18
	::System::Action* Field_1_17; // 0x20
	::System::Action* Field_1_16; // 0x28
	::System::Action_1<::UnityEngine::Transform*>* Field_1_13; // 0x30
	::System::Action* Field_1_10; // 0x38
	::Class_2_C40447D429BD5422* Field_1_2; // 0x40
	::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_12573614267589AB>* Field_1_9; // 0x48
	::System::Boolean Field_1_0; // 0x50
	::System::Boolean Field_1_5; // 0x51
	::System::Boolean Field_1_6; // 0x52
	::System::Boolean Field_1_1; // 0x53
	::System::Int32 Field_1_11; // 0x54
	::System::Int32 Field_1_19; // 0x58
	::Enum_3_334CDFF338C5BE84 Field_1_14; // 0x5C
	::System::Boolean Field_1_4; // 0x60
	::System::Boolean Field_1_12; // 0x61
	::System::Boolean Field_1_7; // 0x62
	::System::Int32 Field_1_18; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C40447D429BD5422_CLASS_1_F88CEC78FEC1C8C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B01156638FD29DB3(::Class_1_B0877C107BC7F2BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + CLASS_2_C40447D429BD5422_CLASS_1_F88CEC78FEC1C8C1_METHOD_1_B01156638FD29DB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C40447D429BD5422_CLASS_1_F88CEC78FEC1C8C1_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}
};
