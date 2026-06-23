#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_CAMERACUTSCENESHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12B93ED0)
#define MOLEMOLE_CAMERACUTSCENESHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12B93FB0)
#define MOLEMOLE_CAMERACUTSCENESHOW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12B93F30)
#define MOLEMOLE_CAMERACUTSCENESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x12B93EE0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraCutSceneShow_TypeDefinitionIndex = 77973;

	class CameraCutSceneShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 _ccsParam; // 0x28

		::System::Void _ctor(::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14 ccsParam, ::Enum_3_205B03D40B9BD873 matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43E0F27F37AC299B_Struct_2_52AD02145F5FCE3A_14, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW__CTOR_OFFSET))(this, ccsParam, matchPage);
		}

		::System::Void _ctor_1(::System::String* cutSceneName, ::Enum_3_205B03D40B9BD873 matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW__CTOR_1_OFFSET))(this, cutSceneName, matchPage);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
