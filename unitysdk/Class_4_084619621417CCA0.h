#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F31596D70431331B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_0_16E4307DCC419505_379;
class Class_1_EAF7984A8FAD6BE4;
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_4_084619621417CCA0_METHOD_4_208B86572CA481A3_OFFSET UNITYSDK_OFFSET(0x19FF6B40)
#define CLASS_4_084619621417CCA0_METHOD_4_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x19FF6810)
#define CLASS_4_084619621417CCA0_METHOD_4_6F6DD3DC870AC77B_OFFSET UNITYSDK_OFFSET(0x19FF6980)
#define CLASS_4_084619621417CCA0_METHOD_4_9A271693E4F170A8_OFFSET UNITYSDK_OFFSET(0x19FF6940)
#define CLASS_4_084619621417CCA0_METHOD_4_C358A54C8B3E1E33_OFFSET UNITYSDK_OFFSET(0x19FF6C00)
#define CLASS_4_084619621417CCA0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF6C80)
#define CLASS_4_084619621417CCA0__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x19FF6CA0)
#define CLASS_4_084619621417CCA0__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x19FF6CD0)

inline static constexpr unsigned int Class_4_084619621417CCA0_TypeDefinitionIndex = 49761;

class Class_4_084619621417CCA0 : public ::Class_3_F31596D70431331B
{
public:
	::UnityEngine::Rendering::VolumeProfile* DCKEKDFJBHJ; // 0x70
	::System::Single OLDBNJPFNNP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_2B66C008535F8B01_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeProfile* Method_4_9A271693E4F170A8()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_9A271693E4F170A8_OFFSET))(this);
	}

	::System::Void Method_4_6F6DD3DC870AC77B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_6F6DD3DC870AC77B_OFFSET))(this);
	}

	::System::Void Method_4_208B86572CA481A3(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_379* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_208B86572CA481A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_C358A54C8B3E1E33(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_C358A54C8B3E1E33_OFFSET))(this, a1);
	}

	::System::Void _Init_b__1_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0__INIT_B__1_0_OFFSET))(this, a1);
	}

	::System::Void _Init_b__1_1(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0__INIT_B__1_1_OFFSET))(this, a1);
	}
};
