#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/RPG/Client/TAUtils/MeshSelfIntersectionDebugger_Struct_2_97AE06CE5D4F548E_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3FA830)
#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FA820)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MeshSelfIntersectionDebugger_TypeDefinitionIndex = 73527;

	class MeshSelfIntersectionDebugger : public ::RPG::Client::TAMonoBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_NOFFDGKAJEL()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(MeshSelfIntersectionDebugger_TypeDefinitionIndex)->GetStaticField(0x3D890);
		}
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* targetRenderers; // 0x18
		::UnityEngine::AnimationClip* overrideClip; // 0x20
		::System::Single overlapThreshold; // 0x28
		::System::Single triClusterMaxAreaSizeThreshold; // 0x2C
		::System::Boolean enableTriClusterMaxAreaSizeThreshold; // 0x30
		::System::Boolean hasResult; // 0x31
		::System::String* resultClipName; // 0x38
		::System::Int32 resultFrame; // 0x40
		::System::Single resultTime; // 0x44
		::System::Int32 resultGroupCount; // 0x48
		::System::Single resultSelfIntersectionProjectionArea; // 0x4C
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::TAUtils::MeshSelfIntersectionDebugger_Struct_2_97AE06CE5D4F548E_2>*>* BIGHPJHJJGG; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER__CCTOR_OFFSET))();
		}
	};
}
