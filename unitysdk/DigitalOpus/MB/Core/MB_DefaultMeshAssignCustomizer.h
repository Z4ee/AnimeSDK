#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace UnityEngine { class Mesh; }

#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_DEFAULTDELEGATEASSIGNMESHCOLORS_OFFSET UNITYSDK_OFFSET(0x1E35BDE0)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_COLORS_OFFSET UNITYSDK_OFFSET(0x1E35BDB0)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV0_OFFSET UNITYSDK_OFFSET(0x1E35BC30)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV2_OFFSET UNITYSDK_OFFSET(0x1E35BC60)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV3_OFFSET UNITYSDK_OFFSET(0x1E35BC90)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV4_OFFSET UNITYSDK_OFFSET(0x1E35BCC0)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV5_OFFSET UNITYSDK_OFFSET(0x1E35BCF0)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV6_OFFSET UNITYSDK_OFFSET(0x1E35BD20)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV7_OFFSET UNITYSDK_OFFSET(0x1E35BD50)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV8_OFFSET UNITYSDK_OFFSET(0x1E35BD80)
#define DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E35BE10)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_DefaultMeshAssignCustomizer_TypeDefinitionIndex = 90658;

	class MB_DefaultMeshAssignCustomizer : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER__CTOR_OFFSET))(this);
		}

		::System::Void meshAssign_UV0(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV0_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV2(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV2_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV3(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV3_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV4(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV4_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV5(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV5_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV6(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV6_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV7(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV7_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_UV8(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_UV8_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}

		::System::Void meshAssign_colors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Color>* colors, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_MESHASSIGN_COLORS_OFFSET))(this, settings, textureBakeResults, mesh, colors, sliceIndexes);
		}

		static ::System::Void DefaultDelegateAssignMeshColors(::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Color>* colors, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_DEFAULTMESHASSIGNCUSTOMIZER_DEFAULTDELEGATEASSIGNMESHCOLORS_OFFSET))(settings, textureBakeResults, mesh, colors, sliceIndexes);
		}
	};
}
