#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/Enum_3_334CDFF338C5BE84.h"
#include "unitysdk/System/Object.h"

class Class_1_B0877C107BC7F2BF;
class Class_2_8A17A707C5052BEA;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8A17A707C5052BEA_CLASS_1_675070FC88EDE16B_METHOD_1_36003DD00621E1BC_OFFSET UNITYSDK_OFFSET(0x14075B00)
#define CLASS_2_8A17A707C5052BEA_CLASS_1_675070FC88EDE16B_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x14075610)
#define CLASS_2_8A17A707C5052BEA_CLASS_1_675070FC88EDE16B__CTOR_OFFSET UNITYSDK_OFFSET(0x14075600)

inline static constexpr unsigned int Class_2_8A17A707C5052BEA_Class_1_675070FC88EDE16B_TypeDefinitionIndex = 48529;

class Class_2_8A17A707C5052BEA_Class_1_675070FC88EDE16B : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::Class_2_8A17A707C5052BEA* Field_1_0; // 0x18
	::System::Action* Field_1_16; // 0x20
	::System::Action_1<::UnityEngine::Transform*>* Field_1_11; // 0x28
	::System::Action* Field_1_15; // 0x30
	::System::Action* Field_1_9; // 0x38
	::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E>* Field_1_8; // 0x40
	::System::Boolean Field_1_12; // 0x48
	::System::Boolean Field_1_4; // 0x49
	::System::Boolean Field_1_3; // 0x4A
	::System::Boolean Field_1_1; // 0x4B
	::System::Boolean Field_1_5; // 0x4C
	::System::Boolean Field_1_2; // 0x4D
	::System::Int32 Field_1_13; // 0x50
	::System::Int32 Field_1_6; // 0x54
	::System::Int32 Field_1_14; // 0x58
	::Enum_3_334CDFF338C5BE84 Field_1_10; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A17A707C5052BEA_CLASS_1_675070FC88EDE16B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A17A707C5052BEA_CLASS_1_675070FC88EDE16B_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_36003DD00621E1BC(::Class_1_B0877C107BC7F2BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + CLASS_2_8A17A707C5052BEA_CLASS_1_675070FC88EDE16B_METHOD_1_36003DD00621E1BC_OFFSET))(this, a1);
	}
};
