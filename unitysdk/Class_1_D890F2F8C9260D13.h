#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_882;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D890F2F8C9260D13__CTOR_OFFSET UNITYSDK_OFFSET(0x1457ED40)

inline static constexpr unsigned int Class_1_D890F2F8C9260D13_TypeDefinitionIndex = 89733;

class Class_1_D890F2F8C9260D13 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_882* Field_1_1; // 0x10
	::System::Func_3<::System::Int32, ::UnityEngine::Vector3, ::System::Boolean>* Field_1_5; // 0x18
	::System::Action_1<::System::Int32>* Field_1_4; // 0x20
	::System::Int32 Field_1_6; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D890F2F8C9260D13__CTOR_OFFSET))(this);
	}
};
