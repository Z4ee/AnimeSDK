#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_656B4378A6148CC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A856100)

inline static constexpr unsigned int Class_1_656B4378A6148CC6_TypeDefinitionIndex = 62986;

class Class_1_656B4378A6148CC6 : public ::System::Object
{
public:
	::System::UInt32 PCCCKLNCLHB; // 0x10
	::UnityEngine::Quaternion JNKLNLKHGBB; // 0x14
	::System::UInt32 DMKMAAEAOGD; // 0x24
	::System::Boolean CPONHCAOFDH; // 0x28
	::System::UInt32 DILCDKOHIFG; // 0x2C
	::System::Int32 HHNGHAKGEBG; // 0x30
	::System::UInt32 LLDCHLHNADA; // 0x34
	::UnityEngine::Vector3 ELFDIEFKCMH; // 0x38
	::System::UInt32 KAGEJBMFGFD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656B4378A6148CC6__CTOR_OFFSET))(this);
	}
};
