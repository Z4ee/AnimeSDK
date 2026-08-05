#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_06539F1E30FD04C9_1.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_443.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_208CC9941471731A_217_METHOD_2_2009AD5E74A906A3_OFFSET UNITYSDK_OFFSET(0x17CB0EE0)
#define CLASS_2_208CC9941471731A_217__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB0ED0)

inline static constexpr unsigned int Class_2_208CC9941471731A_217_TypeDefinitionIndex = 15328;

class Class_2_208CC9941471731A_217 : public ::Class_1_06539F1E30FD04C9_1
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_443 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_443, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_217__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_2009AD5E74A906A3(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_217_METHOD_2_2009AD5E74A906A3_OFFSET))(this, a1);
	}
};
