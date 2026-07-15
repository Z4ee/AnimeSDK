#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A09F30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A09F90)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_Class_1_6020EABE4EF866AD_TypeDefinitionIndex = 73245;

	class FiveDimView_Class_1_6020EABE4EF866AD : public ::System::Object
	{
	public:
		::FiveDimRenderingItem* Field_1_0; // 0x10
		::UnityEngine::Transform* Field_1_1; // 0x18
		::UnityEngine::Transform* Field_1_2; // 0x20
		::UnityEngine::Renderer* Field_1_3; // 0x28
		::System::String* Field_1_4; // 0x30
		::UnityEngine::Vector3 Field_1_5; // 0x38
		::System::Boolean Field_1_6; // 0x44
		::System::Boolean Field_1_7; // 0x45
		::System::Boolean Field_1_8; // 0x46
		::System::Boolean Field_1_9; // 0x47
		::System::Boolean Field_1_10; // 0x48
		::System::Boolean Field_1_11; // 0x49
		::UnityEngine::Quaternion Field_1_12; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET))(this);
		}
	};
}
