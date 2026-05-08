#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_5_AD4C245E8EE54E03___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE8A4AD0)
#define CLASS_5_AD4C245E8EE54E03___C_METHOD_1_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0xE8A4A90)
#define CLASS_5_AD4C245E8EE54E03___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8A4A40)
#define CLASS_5_AD4C245E8EE54E03___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A4A80)

inline static constexpr unsigned int Class_5_AD4C245E8EE54E03___c_TypeDefinitionIndex = 49384;

class Class_5_AD4C245E8EE54E03___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_AD4C245E8EE54E03___c_TypeDefinitionIndex)->GetStaticField(0x357A0);
	}
	static ::Class_5_AD4C245E8EE54E03___c** StaticGet___9()
	{
		return (::Class_5_AD4C245E8EE54E03___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_AD4C245E8EE54E03___c_TypeDefinitionIndex)->GetStaticField(0x357A8);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__4_1()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_5_AD4C245E8EE54E03___c_TypeDefinitionIndex)->GetStaticField(0x357B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03___C_METHOD_1_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AD4C245E8EE54E03___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
