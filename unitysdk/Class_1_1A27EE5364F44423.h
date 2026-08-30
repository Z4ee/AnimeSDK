#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_734;
class Class_1_20FCC2F82753283C;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoUI3DTouch; }

#define CLASS_1_1A27EE5364F44423_METHOD_1_058772F3CAEAB1B5_OFFSET UNITYSDK_OFFSET(0x159C6740)
#define CLASS_1_1A27EE5364F44423_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x159C6960)
#define CLASS_1_1A27EE5364F44423_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x159C6C10)
#define CLASS_1_1A27EE5364F44423_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x159C6D40)
#define CLASS_1_1A27EE5364F44423_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x159C7150)
#define CLASS_1_1A27EE5364F44423_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x159C6EE0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x159C72D0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x159C6F60)
#define CLASS_1_1A27EE5364F44423_METHOD_1_793067EE61114591_OFFSET UNITYSDK_OFFSET(0x159C6AE0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x159C6E00)
#define CLASS_1_1A27EE5364F44423_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x159C71F0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_ADDF7C69AC3A8B56_OFFSET UNITYSDK_OFFSET(0x159C64D0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x159C6CB0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_BC7A11A7B3A4E581_OFFSET UNITYSDK_OFFSET(0x159C6540)
#define CLASS_1_1A27EE5364F44423_METHOD_1_CDB67F8643E189E2_OFFSET UNITYSDK_OFFSET(0x159C6DB0)
#define CLASS_1_1A27EE5364F44423_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x159C66C0)
#define CLASS_1_1A27EE5364F44423_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x159C6450)
#define CLASS_1_1A27EE5364F44423__CTOR_OFFSET UNITYSDK_OFFSET(0x159C7360)

inline static constexpr unsigned int Class_1_1A27EE5364F44423_TypeDefinitionIndex = 62392;

class Class_1_1A27EE5364F44423 : public ::System::Object
{
public:
	// static const ::System::Single GELBGDFGMNB; // 0x0
	// static const ::System::Single FEPJOGPGDHH; // 0x0
	::RPG::Client::MonoExUICamera* BMPJCAJJPHA; // 0x10
	::Cinemachine::CinemachineVirtualCamera* MBMOBDNPFDL; // 0x18
	::Class_0_16E4307DCC419505_734* LOMDHHJLPMJ; // 0x20
	::RPG::Client::MonoUI3DTouch* ADMBIEFLAFD; // 0x28
	::Cinemachine::CinemachineFramingTransposer* EDPJICNHIPF; // 0x30
	::Class_1_20FCC2F82753283C* BPHFCHHFGFC; // 0x38
	::System::Boolean NLPFMNOPJGO; // 0x40
	::System::Boolean DCMBFDPPANO; // 0x41
	::System::Single EKKKMOFOJPL; // 0x44
	::System::Single POFMFCAGGIC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_POINTERPOSITION_OFFSET))(this);
	}

	::System::Void Method_1_ADDF7C69AC3A8B56(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_ADDF7C69AC3A8B56_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC7A11A7B3A4E581(::RPG::Client::MonoExUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_BC7A11A7B3A4E581_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_734* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_734*))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_058772F3CAEAB1B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_058772F3CAEAB1B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_793067EE61114591(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_793067EE61114591_OFFSET))(this, a1);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Boolean Method_1_CDB67F8643E189E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_CDB67F8643E189E2_OFFSET))(this);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1A27EE5364F44423_METHOD_1_664C062015F0C2D3_OFFSET))(this, a1);
	}
};
