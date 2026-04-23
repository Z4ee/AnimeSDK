#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class PathTracingDebug_DumpPath; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_PATHTRACINGDEBUG_BEGINCAPTURE_OFFSET UNITYSDK_OFFSET(0xB4F1370)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB4F18B0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_DUMPPATHS_OFFSET UNITYSDK_OFFSET(0xB4F12E0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_KEY_OFFSET UNITYSDK_OFFSET(0xB4F12D0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_METHOD_5_50CDA0D6D52C2BA3_OFFSET UNITYSDK_OFFSET(0xB4F13F0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_METHOD_5_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xB4F1510)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB4F1950)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB4F1B20)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB4F19F0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F1C00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PathTracingDebug_TypeDefinitionIndex = 47849;

	class PathTracingDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 MAX_DEBUG_DUMP_PATH_VERT_COUNT = 0x20; // 0x0
		// static const ::System::Int32 DUMP_BUFFER_SIZE = 0x790; // 0x0
		// static const ::System::Int32 VERTEX_STRIDE = 0x3C; // 0x0
		::UnityEngine::ComputeBuffer* Field_5_3; // 0x18
		::UnityEngine::Vector2Int m_PixelPosition; // 0x20
		::System::Int32 m_CapturePathCount; // 0x28
		::System::Collections::Generic::List_1<::RPG::CustomRP::PathTracingDebug_DumpPath*>* m_DumpPaths; // 0x30
		::System::Boolean Field_5_7; // 0x38
		::System::Boolean Field_5_8; // 0x39
		::System::Boolean m_EnableOverridePathVisualizeColor; // 0x3A
		::UnityEngine::Color m_OverridePathVisualizeColor; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_KEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::CustomRP::PathTracingDebug_DumpPath*>* get_DumpPaths()
		{
			return ((::System::Collections::Generic::List_1<::RPG::CustomRP::PathTracingDebug_DumpPath*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_DUMPPATHS_OFFSET))(this);
		}

		::System::Void BeginCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_BEGINCAPTURE_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_50CDA0D6D52C2BA3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_METHOD_5_50CDA0D6D52C2BA3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_96189EDEF38976A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_METHOD_5_96189EDEF38976A6_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_ONDISABLE_OFFSET))(this);
		}
	};
}
