#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET UNITYSDK_OFFSET(0xA6C3600)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C3660)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_Class_1_6020EABE4EF866AD_TypeDefinitionIndex = 70898;

	class FiveDimView_Class_1_6020EABE4EF866AD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Field_1_5; // 0x10
		::FiveDimRenderingItem* Field_1_2; // 0x18
		::System::String* Field_1_6; // 0x20
		::UnityEngine::Renderer* Field_1_0; // 0x28
		::UnityEngine::Quaternion Field_1_8; // 0x30
		::System::Boolean Field_1_1; // 0x40
		::System::Boolean Field_1_9; // 0x41
		::UnityEngine::Vector3 Field_1_7; // 0x44
		::System::Boolean Field_1_11; // 0x50
		::System::Boolean Field_1_4; // 0x51
		::System::Boolean Field_1_10; // 0x52
		::System::Boolean Field_1_3; // 0x53

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
