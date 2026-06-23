#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A7B4F700A87A9DC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_72305E8DFABA2803_METHOD_1_C8CE839E665C417D_OFFSET UNITYSDK_OFFSET(0x13A49E50)
#define CLASS_1_72305E8DFABA2803_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x13A49E30)
#define CLASS_1_72305E8DFABA2803__CTOR_OFFSET UNITYSDK_OFFSET(0x13A49E10)

inline static constexpr unsigned int Class_1_72305E8DFABA2803_TypeDefinitionIndex = 84656;

class Class_1_72305E8DFABA2803 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_4; // 0x10
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_5; // 0x18
	::Enum_3_2A7B4F700A87A9DC Field_1_6; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::System::UInt64 Field_1_0; // 0x28
	::System::Int32 Field_1_1; // 0x30
	::System::Boolean Field_1_3; // 0x34
	::UnityEngine::Vector3 Field_1_7; // 0x38

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::UnityEngine::Vector3, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_72305E8DFABA2803__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72305E8DFABA2803_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::String* Method_1_C8CE839E665C417D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72305E8DFABA2803_METHOD_1_C8CE839E665C417D_OFFSET))(this);
	}
};
