#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0D4B4448C1FD8536.h"
#include "unitysdk/Enum_3_C3928EA7A52D68C3.h"
#include "unitysdk/Enum_3_FFF437E537B836BE.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFilterMaterial; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialState; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameWeatherBlock; }
namespace UnityEngine { class Material; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_METHOD_3_14B7E64C1BB90322_OFFSET UNITYSDK_OFFSET(0x1821B7C0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_METHOD_3_5CB767DF1930DDE8_OFFSET UNITYSDK_OFFSET(0x1821B680)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_METHOD_3_8A575666E4684FA5_OFFSET UNITYSDK_OFFSET(0x1821B840)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1821B620)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialPreset_TypeDefinitionIndex = 43479;

	class GalGameMaterialPreset : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFilterMaterial*>* filterMaterials; // 0x18
		::Il2CppArray<::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameWeatherBlock*>* weatherBlocks; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET__CTOR_OFFSET))(this);
		}

		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState* Method_3_5CB767DF1930DDE8(::Enum_3_C3928EA7A52D68C3 a1, ::Enum_3_FFF437E537B836BE a2)
		{
			return ((::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState*(*)(::PVOID, ::Enum_3_C3928EA7A52D68C3, ::Enum_3_FFF437E537B836BE))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_METHOD_3_5CB767DF1930DDE8_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* Method_3_8A575666E4684FA5(::Enum_3_0D4B4448C1FD8536 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::Enum_3_0D4B4448C1FD8536))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_METHOD_3_8A575666E4684FA5_OFFSET))(this, a1);
		}

		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameWeatherBlock* Method_3_14B7E64C1BB90322(::Enum_3_C3928EA7A52D68C3 a1)
		{
			return ((::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameWeatherBlock*(*)(::PVOID, ::Enum_3_C3928EA7A52D68C3))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_METHOD_3_14B7E64C1BB90322_OFFSET))(this, a1);
		}
	};
}
