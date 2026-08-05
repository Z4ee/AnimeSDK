#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_NPCMATHUTILS_DISTSQUARED_OFFSET UNITYSDK_OFFSET(0x11949C60)
#define NPCCROWD_NPCMATHUTILS_GETFORWARDVECTOR_OFFSET UNITYSDK_OFFSET(0x1192F3D0)
#define NPCCROWD_NPCMATHUTILS_GETUPVECTOR_OFFSET UNITYSDK_OFFSET(0x11949A50)
#define NPCCROWD_NPCMATHUTILS_LENGTH_OFFSET UNITYSDK_OFFSET(0x11949BE0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCMathUtils_TypeDefinitionIndex = 60428;

	class NPCMathUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 GetForwardVector(::UnityEngine::Quaternion q)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHUTILS_GETFORWARDVECTOR_OFFSET))(q);
		}

		static ::UnityEngine::Vector3 GetUpVector(::UnityEngine::Quaternion q)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHUTILS_GETUPVECTOR_OFFSET))(q);
		}

		static ::System::Single Length(::UnityEngine::Vector3 q)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHUTILS_LENGTH_OFFSET))(q);
		}

		static ::System::Single DistSquared(::UnityEngine::Vector3 a)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHUTILS_DISTSQUARED_OFFSET))(a);
		}
	};
}
