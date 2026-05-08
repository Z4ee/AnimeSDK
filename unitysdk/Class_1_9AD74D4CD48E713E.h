#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_C3F0E3B5AB5977AE_3;
class MonoUITableScrollV2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_9AD74D4CD48E713E_METHOD_1_291A8E50F0E05104_OFFSET UNITYSDK_OFFSET(0x110D2050)
#define CLASS_1_9AD74D4CD48E713E_METHOD_1_929FBF7FD1A60820_OFFSET UNITYSDK_OFFSET(0x110D2500)

inline static constexpr unsigned int Class_1_9AD74D4CD48E713E_TypeDefinitionIndex = 52547;

class Class_1_9AD74D4CD48E713E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_291A8E50F0E05104(::MonoUITableScrollV2* a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32>* a5, ::System::Action*& a6)
	{
		return ((::System::Boolean(*)(::MonoUITableScrollV2*, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32>*, ::System::Action*&))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_METHOD_1_291A8E50F0E05104_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_929FBF7FD1A60820(::UnityEngine::Vector2 a1, ::MonoUITableScrollV2* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_1_9AD74D4CD48E713E_METHOD_1_929FBF7FD1A60820_OFFSET))(a1, a2);
	}
};
