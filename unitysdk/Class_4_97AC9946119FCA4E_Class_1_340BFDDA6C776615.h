#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_97AC9946119FCA4E_Class_1_81DCBEDA26216B1F_1;
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }

#define CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x12E06370)
#define CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_E02F100F3080733B_OFFSET UNITYSDK_OFFSET(0x12E06390)
#define CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615__CTOR_OFFSET UNITYSDK_OFFSET(0x12E06360)

inline static constexpr unsigned int Class_4_97AC9946119FCA4E_Class_1_340BFDDA6C776615_TypeDefinitionIndex = 73870;

class Class_4_97AC9946119FCA4E_Class_1_340BFDDA6C776615 : public ::System::Object
{
public:
	::NapStreaming::NapStreamingManager_StreamingPosProvider* Field_1_3; // 0x10
	::Class_4_97AC9946119FCA4E_Class_1_81DCBEDA26216B1F_1* Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_E02F100F3080733B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_E02F100F3080733B_OFFSET))(this);
	}
};
