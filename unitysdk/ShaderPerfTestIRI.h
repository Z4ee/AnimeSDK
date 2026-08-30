#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_B947D336595B4072;
namespace RPG::Client { class IRIManager; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define SHADERPERFTESTIRI_METHOD_5_FF8AAA1EAD899F63_OFFSET UNITYSDK_OFFSET(0x1BF485D0)
#define SHADERPERFTESTIRI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BF49110)
#define SHADERPERFTESTIRI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF48840)
#define SHADERPERFTESTIRI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF49220)

inline static constexpr unsigned int ShaderPerfTestIRI_TypeDefinitionIndex = 47864;

class ShaderPerfTestIRI : public ::UnityEngine::MonoBehaviour
{
public:
	static ::RPG::Client::IRIManager** StaticGet_KJEGMPNCGEH()
	{
		return (::RPG::Client::IRIManager**)Il2CppClass::FromTypeDefinitionIndex(ShaderPerfTestIRI_TypeDefinitionIndex)->GetStaticField(0x52E20);
	}
	::UnityEngine::Mesh* TestMesh; // 0x18
	::UnityEngine::Material* TestMat; // 0x20
	::Class_1_B947D336595B4072* JOOGPAFFGNM; // 0x28
	::System::UInt64 ALJBKHKHDIF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI__CTOR_OFFSET))(this);
	}

	::RPG::Client::IRIManager* Method_5_FF8AAA1EAD899F63()
	{
		return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_METHOD_5_FF8AAA1EAD899F63_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_ONDISABLE_OFFSET))(this);
	}
};
