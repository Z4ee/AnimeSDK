#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ResultModuleConfig; }

#define CLASS_2_7B3943C76701CA83_METHOD_2_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0xE8282E0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0xE8285A0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xE8284F0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xE8291F0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_6005C60D45739FA7_OFFSET UNITYSDK_OFFSET(0xE82A380)
#define CLASS_2_7B3943C76701CA83_METHOD_2_688863E66494D7C7_OFFSET UNITYSDK_OFFSET(0xE82A250)
#define CLASS_2_7B3943C76701CA83_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xE828D20)
#define CLASS_2_7B3943C76701CA83_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE82A2B0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_9B18C788922A0B6F_OFFSET UNITYSDK_OFFSET(0xE82AAC0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_9D199E2FEC724B45_OFFSET UNITYSDK_OFFSET(0xE82A600)
#define CLASS_2_7B3943C76701CA83_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xE829110)
#define CLASS_2_7B3943C76701CA83_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE82A070)
#define CLASS_2_7B3943C76701CA83_METHOD_2_CAB57E692BC0A4DE_OFFSET UNITYSDK_OFFSET(0xE82A0B0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0xE8281B0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_FE53B6F7EE7FAEE0_OFFSET UNITYSDK_OFFSET(0xE82A740)
#define CLASS_2_7B3943C76701CA83__CCTOR_OFFSET UNITYSDK_OFFSET(0xE82AD20)
#define CLASS_2_7B3943C76701CA83__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE8280C0)
#define CLASS_2_7B3943C76701CA83__CTOR_OFFSET UNITYSDK_OFFSET(0xE828080)

inline static constexpr unsigned int Class_2_7B3943C76701CA83_TypeDefinitionIndex = 69640;

class Class_2_7B3943C76701CA83 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::System::Single* StaticGet_CMLLDJAAFDF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B3943C76701CA83_TypeDefinitionIndex)->GetStaticField(0x14D20);
	}
	static ::System::Int32* StaticGet_EMGNDOOCJLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B3943C76701CA83_TypeDefinitionIndex)->GetStaticField(0x14D24);
	}
	::RPG::Client::ResultModuleConfig* IMFPFMNCOPO; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* BAPFPKCFFII; // 0x40
	::System::Boolean JAOHHFDACFO; // 0x48
	::System::Int32 DDOKCIFEAFF; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CAB57E692BC0A4DE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_CAB57E692BC0A4DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9D199E2FEC724B45(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_9D199E2FEC724B45_OFFSET))(this, a1);
	}

	::System::Void Method_2_6005C60D45739FA7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_6005C60D45739FA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_688863E66494D7C7(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_688863E66494D7C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE53B6F7EE7FAEE0(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_FE53B6F7EE7FAEE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B18C788922A0B6F(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_9B18C788922A0B6F_OFFSET))(this, a1);
	}
};
