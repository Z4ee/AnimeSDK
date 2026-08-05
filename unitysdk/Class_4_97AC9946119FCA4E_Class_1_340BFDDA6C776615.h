#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_97AC9946119FCA4E_Class_1_81DCBEDA26216B1F_1;
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }

#define CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_CFAB49FD2BDE40CE_OFFSET UNITYSDK_OFFSET(0x1401EEE0)
#define CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1401F7E0)
#define CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615__CTOR_OFFSET UNITYSDK_OFFSET(0x1401EED0)

inline static constexpr unsigned int Class_4_97AC9946119FCA4E_Class_1_340BFDDA6C776615_TypeDefinitionIndex = 53463;

class Class_4_97AC9946119FCA4E_Class_1_340BFDDA6C776615 : public ::System::Object
{
public:
	::NapStreaming::NapStreamingManager_StreamingPosProvider* Field_1_7; // 0x10
	::Class_4_97AC9946119FCA4E_Class_1_81DCBEDA26216B1F_1* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFAB49FD2BDE40CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_CFAB49FD2BDE40CE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_97AC9946119FCA4E_CLASS_1_340BFDDA6C776615_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
