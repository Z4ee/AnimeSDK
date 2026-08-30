#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HOUDINIENGINEUNITY_CURVENODEDATA_GETROTATION_OFFSET UNITYSDK_OFFSET(0x167BBF70)
#define HOUDINIENGINEUNITY_CURVENODEDATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x167BBFD0)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167BBC20)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x167BBC70)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x167BBDA0)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x167BBEE0)
#define HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167BBBE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int CurveNodeData_TypeDefinitionIndex = 39080;

	class CurveNodeData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x28
		::System::Int32 curveCountIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::HoudiniEngineUnity::CurveNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA__CTOR_4_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA_GETROTATION_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::CurveNodeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_CURVENODEDATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
