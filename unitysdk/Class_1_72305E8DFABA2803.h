#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A7B4F700A87A9DC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_72305E8DFABA2803_METHOD_1_3ABF6B401A7F23BE_OFFSET UNITYSDK_OFFSET(0x156C8CC0)
#define CLASS_1_72305E8DFABA2803_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x156C8CA0)
#define CLASS_1_72305E8DFABA2803__CTOR_OFFSET UNITYSDK_OFFSET(0x156C8C70)

inline static constexpr unsigned int Class_1_72305E8DFABA2803_TypeDefinitionIndex = 81552;

class Class_1_72305E8DFABA2803 : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_4; // 0x10
	::System::Action_1<::System::Int32>* Field_1_5; // 0x18
	::Enum_3_2A7B4F700A87A9DC Field_1_11; // 0x20
	::System::Boolean Field_1_6; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::System::UInt64 Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_10; // 0x38
	::System::Int32 Field_1_7; // 0x44

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::UnityEngine::Vector3, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_72305E8DFABA2803__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72305E8DFABA2803_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::String* Method_1_3ABF6B401A7F23BE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72305E8DFABA2803_METHOD_1_3ABF6B401A7F23BE_OFFSET))(this);
	}
};
