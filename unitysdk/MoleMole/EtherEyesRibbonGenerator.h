#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B522CF0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x1B522CA0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_6675531D375F235D_OFFSET UNITYSDK_OFFSET(0x1B5230A0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1B523850)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x1B5257D0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B522BA0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B523040)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525760)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesRibbonGenerator_TypeDefinitionIndex = 49413;

	class EtherEyesRibbonGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* startPoint; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* endPoints; // 0x20
		::System::Single stripWidth; // 0x28
		::System::Single tilePerUnit; // 0x2C
		::System::Single uvOffset; // 0x30
		::System::Single desiredSegmentLength; // 0x34
		::System::Single midAlphaBand; // 0x38
		::System::Single midAlpha; // 0x3C
		::UnityEngine::MeshFilter* Field_5_9; // 0x40
		::UnityEngine::Mesh* Field_5_8; // 0x48
		::UnityEngine::Vector3 Field_5_15; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_14; // 0x60
		::Il2CppArray<::System::Int32>* Field_5_13; // 0x68
		::System::Single Field_5_12; // 0x70
		::System::Single Field_5_19; // 0x74
		::System::Boolean Field_5_18; // 0x78
		::System::Single Field_5_17; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_40EBA7013E4CCDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_40EBA7013E4CCDDF_OFFSET))(this);
		}

		::System::Void Method_5_F29D7A7F508EABE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_F29D7A7F508EABE1_OFFSET))(this);
		}

		::System::Boolean Method_5_6675531D375F235D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_6675531D375F235D_OFFSET))(this);
		}

		::System::Void Method_5_9AB55F553C4AC6E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_9AB55F553C4AC6E8_OFFSET))(this);
		}
	};
}
