#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1EFEA780)
#define ROOTMOTION_V3TOOLS_CLAMPDIRECTION_OFFSET UNITYSDK_OFFSET(0x1EFEA410)
#define ROOTMOTION_V3TOOLS_EXTRACTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1EFEA2F0)
#define ROOTMOTION_V3TOOLS_EXTRACTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1EFEA210)
#define ROOTMOTION_V3TOOLS_ISNEARLY_OFFSET UNITYSDK_OFFSET(0x1EFEAC90)
#define ROOTMOTION_V3TOOLS_LERP_OFFSET UNITYSDK_OFFSET(0x1EFEA0F0)
#define ROOTMOTION_V3TOOLS_LINETOPLANE_OFFSET UNITYSDK_OFFSET(0x1EFEAAF0)
#define ROOTMOTION_V3TOOLS_SLERP_OFFSET UNITYSDK_OFFSET(0x1EFEA170)

namespace RootMotion
{
	inline static constexpr unsigned int V3Tools_TypeDefinitionIndex = 44841;

	class V3Tools : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_LERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_SLERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ExtractVertical(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_EXTRACTVERTICAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ExtractHorizontal(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_EXTRACTHORIZONTAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean& a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 ClampDirection_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Single& a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_CLAMPDIRECTION_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 LineToPlane(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_LINETOPLANE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsNearly(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_V3TOOLS_ISNEARLY_OFFSET))(a1, a2, a3);
		}
	};
}
