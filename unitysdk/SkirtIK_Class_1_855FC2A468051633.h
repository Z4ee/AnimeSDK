#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SkirtIK;
namespace UnityEngine { class MonoBehaviour; }

#define SKIRTIK_CLASS_1_855FC2A468051633_COPYTO_OFFSET UNITYSDK_OFFSET(0x1BF528B0)
#define SKIRTIK_CLASS_1_855FC2A468051633_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF52970)
#define SKIRTIK_CLASS_1_855FC2A468051633__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF496D0)

inline static constexpr unsigned int SkirtIK_Class_1_855FC2A468051633_TypeDefinitionIndex = 47711;

class SkirtIK_Class_1_855FC2A468051633 : public ::System::Object
{
public:
	::System::Single FKPKPNKHGLP; // 0x10
	::System::Single GJJFGBGAKKN; // 0x14
	::System::Single GOGHLCLFIDM; // 0x18
	::System::Single EKGOPHADBMP; // 0x1C
	::System::Single OEHIALMOMPN; // 0x20
	::System::Single NMMCJAFDNPG; // 0x24

	::System::Void _ctor(::SkirtIK* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SkirtIK*))((::PBYTE)hIl2Cpp + SKIRTIK_CLASS_1_855FC2A468051633__CTOR_OFFSET))(this, a1);
	}

	::System::Void CopyTo(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SKIRTIK_CLASS_1_855FC2A468051633_COPYTO_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_CLASS_1_855FC2A468051633_DISPOSE_OFFSET))(this);
	}
};
