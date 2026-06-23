#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_440;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D890F2F8C9260D13__CTOR_OFFSET UNITYSDK_OFFSET(0x13179FE0)

inline static constexpr unsigned int Class_1_D890F2F8C9260D13_TypeDefinitionIndex = 54456;

class Class_1_D890F2F8C9260D13 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_440* Field_1_0; // 0x10
	::System::Func_3<::System::Int32, ::UnityEngine::Vector3, ::System::Boolean>* Field_1_4; // 0x18
	::System::Action_1<::System::Int32>* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x2C
	::System::Int32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D890F2F8C9260D13__CTOR_OFFSET))(this);
	}
};
