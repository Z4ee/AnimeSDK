#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_CLASS_1_FD08728D5376E6FD_METHOD_1_463BBA3D141B80D8_OFFSET UNITYSDK_OFFSET(0x147A60C0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_CLASS_1_FD08728D5376E6FD__CTOR_OFFSET UNITYSDK_OFFSET(0x147A6090)

inline static constexpr unsigned int Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD_TypeDefinitionIndex = 87014;

class Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD : public ::System::Object
{
public:
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_11; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Int32 Field_1_6; // 0x18
	::System::Single Field_1_7; // 0x1C
	::System::Single Field_1_5; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_CLASS_1_FD08728D5376E6FD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_463BBA3D141B80D8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_CLASS_1_FD08728D5376E6FD_METHOD_1_463BBA3D141B80D8_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
