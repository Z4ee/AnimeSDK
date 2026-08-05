#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ContourVertex.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_CONTOURVERTICESTOPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1F031EA0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_FROMCONTOURVERTEX_OFFSET UNITYSDK_OFFSET(0x1F031E00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_SETFROMCONTOURVERTEX_OFFSET UNITYSDK_OFFSET(0x1F031FF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_SETTOCONTOURVERTEX_OFFSET UNITYSDK_OFFSET(0x1F0320F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_TOCONTOURVERTEX_1_OFFSET UNITYSDK_OFFSET(0x1F031CE0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_TOCONTOURVERTEX_OFFSET UNITYSDK_OFFSET(0x1F031B60)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int UnityLibTessUtility_TypeDefinitionIndex = 29048;

	class UnityLibTessUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* ToContourVertex(::Il2CppArray<::UnityEngine::Vector3>* v, ::System::Boolean zeroZ)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_TOCONTOURVERTEX_OFFSET))(v, zeroZ);
		}

		static ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* ToContourVertex_1(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> v, ::System::Boolean zeroZ)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*(*)(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_TOCONTOURVERTEX_1_OFFSET))(v, zeroZ);
		}

		static ::System::Void FromContourVertex(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* v, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> output)
		{
			return ((::System::Void(*)(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_FROMCONTOURVERTEX_OFFSET))(v, output);
		}

		static ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> ContourVerticesToPositions(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* v)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_CONTOURVERTICESTOPOSITIONS_OFFSET))(v);
		}

		static ::System::Void SetFromContourVertex(::Il2CppArray<::UnityEngine::Vector3>*& v3Array, ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*& cvArray)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_SETFROMCONTOURVERTEX_OFFSET))(v3Array, cvArray);
		}

		static ::System::Void SetToContourVertex(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*& cvArray, ::Il2CppArray<::UnityEngine::Vector3>*& v3Array)
		{
			return ((::System::Void(*)(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_UNITYLIBTESSUTILITY_SETTOCONTOURVERTEX_OFFSET))(cvArray, v3Array);
		}
	};
}
