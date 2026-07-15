#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class TAComponetPositonPasterMonoPlugin; }

#define CLASS_3_5AB18F7F8B74B214_METHOD_3_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x149CF1A0)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x149D0070)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x149D00D0)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x149D0130)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x149D0190)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x149D0010)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0x149CED20)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_874751B687A07EF4_OFFSET UNITYSDK_OFFSET(0x149D0250)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x149CEC80)
#define CLASS_3_5AB18F7F8B74B214_TICK_OFFSET UNITYSDK_OFFSET(0x149D01F0)
#define CLASS_3_5AB18F7F8B74B214__CTOR_OFFSET UNITYSDK_OFFSET(0x149D02D0)

inline static constexpr unsigned int Class_3_5AB18F7F8B74B214_TypeDefinitionIndex = 67226;

class Class_3_5AB18F7F8B74B214 : public ::RPG::Client::TABehaviorBase
{
public:
	::System::Int32 Field_3_0; // 0x38
	::UnityEngine::Vector4 Field_3_1; // 0x3C
	::UnityEngine::Vector3 Field_3_2; // 0x4C
	::UnityEngine::Vector3 Field_3_3; // 0x58
	::UnityEngine::Vector3 Field_3_4; // 0x64
	::System::Int32 Field_3_5; // 0x70
	::System::Single Field_3_6; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_596FD8239C601ED8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_596FD8239C601ED8_OFFSET))(this);
	}

	::System::Void Method_3_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::RPG::Client::TAComponetPositonPasterMonoPlugin* Method_3_874751B687A07EF4()
	{
		return ((::RPG::Client::TAComponetPositonPasterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_874751B687A07EF4_OFFSET))(this);
	}
};
