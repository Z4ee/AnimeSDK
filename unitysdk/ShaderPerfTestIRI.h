#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BABA01B6D912C22A;
namespace RPG::Client { class IRIManager; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define SHADERPERFTESTIRI_METHOD_5_FF8AAA1EAD899F63_OFFSET UNITYSDK_OFFSET(0xD07FE70)
#define SHADERPERFTESTIRI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0808F0)
#define SHADERPERFTESTIRI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0800E0)
#define SHADERPERFTESTIRI__CTOR_OFFSET UNITYSDK_OFFSET(0xD080A00)

inline static constexpr unsigned int ShaderPerfTestIRI_TypeDefinitionIndex = 44698;

class ShaderPerfTestIRI : public ::UnityEngine::MonoBehaviour
{
public:
	static ::RPG::Client::IRIManager** StaticGet_Field_5_0()
	{
		return (::RPG::Client::IRIManager**)Il2CppClass::FromTypeDefinitionIndex(ShaderPerfTestIRI_TypeDefinitionIndex)->GetStaticField(0xF270);
	}
	::UnityEngine::Mesh* TestMesh; // 0x18
	::UnityEngine::Material* TestMat; // 0x20
	::Class_1_BABA01B6D912C22A* Field_5_3; // 0x28
	::System::UInt64 Field_5_4; // 0x30

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
