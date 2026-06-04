#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_METHOD_3_3EE98E0BC8C9437B_OFFSET UNITYSDK_OFFSET(0x195F4160)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_METHOD_3_968887063E59E3D2_OFFSET UNITYSDK_OFFSET(0x195F41E0)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x195F41B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureCurrentInteractDialogueEntity_TypeDefinitionIndex = 21066;

	class CaptureCurrentInteractDialogueEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3EE98E0BC8C9437B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_METHOD_3_3EE98E0BC8C9437B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_968887063E59E3D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureCurrentInteractDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTDIALOGUEENTITY_METHOD_3_968887063E59E3D2_OFFSET))(a1, a2);
		}
	};
}
