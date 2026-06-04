#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F31596D70431331B.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_0_16E4307DCC419505_336;
class Class_1_EAF7984A8FAD6BE4;
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_4_084619621417CCA0_METHOD_4_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x136A9F20)
#define CLASS_4_084619621417CCA0_METHOD_4_208B86572CA481A3_OFFSET UNITYSDK_OFFSET(0x136AA270)
#define CLASS_4_084619621417CCA0_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x136AA430)
#define CLASS_4_084619621417CCA0_METHOD_4_6F6DD3DC870AC77B_OFFSET UNITYSDK_OFFSET(0x136AA0B0)
#define CLASS_4_084619621417CCA0_METHOD_4_89EF2863097EF656_OFFSET UNITYSDK_OFFSET(0x136AA330)
#define CLASS_4_084619621417CCA0_METHOD_4_9477F51FD7F0407B_OFFSET UNITYSDK_OFFSET(0x136AA4A0)
#define CLASS_4_084619621417CCA0_METHOD_4_9A271693E4F170A8_OFFSET UNITYSDK_OFFSET(0x136AA070)
#define CLASS_4_084619621417CCA0_METHOD_4_E22295B853DF41A7_OFFSET UNITYSDK_OFFSET(0x136AA500)
#define CLASS_4_084619621417CCA0__CTOR_OFFSET UNITYSDK_OFFSET(0x136AA3B0)
#define CLASS_4_084619621417CCA0__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x136AA3D0)
#define CLASS_4_084619621417CCA0__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x136AA400)

inline static constexpr unsigned int Class_4_084619621417CCA0_TypeDefinitionIndex = 46516;

class Class_4_084619621417CCA0 : public ::Class_3_F31596D70431331B
{
public:
	::UnityEngine::Rendering::VolumeProfile* Field_4_0; // 0x70
	::System::Single Field_4_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_0865E94460F11643_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeProfile* Method_4_9A271693E4F170A8()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_9A271693E4F170A8_OFFSET))(this);
	}

	::System::Void Method_4_6F6DD3DC870AC77B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_6F6DD3DC870AC77B_OFFSET))(this);
	}

	::System::Void Method_4_208B86572CA481A3(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_336* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_208B86572CA481A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_89EF2863097EF656(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_89EF2863097EF656_OFFSET))(this, a1);
	}

	::System::Void _Init_b__1_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0__INIT_B__1_0_OFFSET))(this, a1);
	}

	::System::Void _Init_b__1_1(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0__INIT_B__1_1_OFFSET))(this, a1);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_4_9477F51FD7F0407B(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_336* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_9477F51FD7F0407B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_E22295B853DF41A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_084619621417CCA0_METHOD_4_E22295B853DF41A7_OFFSET))(this, a1);
	}
};
