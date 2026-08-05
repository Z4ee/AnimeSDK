#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_3_1C214E03D1E1228E___C_METHOD_1_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0xE9739D0)
#define CLASS_3_1C214E03D1E1228E___C_METHOD_1_F38398C364AE5340_OFFSET UNITYSDK_OFFSET(0xE973600)
#define CLASS_3_1C214E03D1E1228E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9735B0)
#define CLASS_3_1C214E03D1E1228E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE9735F0)

inline static constexpr unsigned int Class_3_1C214E03D1E1228E___c_TypeDefinitionIndex = 63345;

class Class_3_1C214E03D1E1228E___c : public ::System::Object
{
public:
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__50_0()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1C214E03D1E1228E___c_TypeDefinitionIndex)->GetStaticField(0x3AFB0);
	}
	static ::System::Action** StaticGet___9__37_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1C214E03D1E1228E___c_TypeDefinitionIndex)->GetStaticField(0x3AFB8);
	}
	static ::Class_3_1C214E03D1E1228E___c** StaticGet___9()
	{
		return (::Class_3_1C214E03D1E1228E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1C214E03D1E1228E___c_TypeDefinitionIndex)->GetStaticField(0x3AFC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F38398C364AE5340()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E___C_METHOD_1_F38398C364AE5340_OFFSET))(this);
	}

	::System::Void Method_1_8327FEEFBF3EC917()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E___C_METHOD_1_8327FEEFBF3EC917_OFFSET))(this);
	}
};
