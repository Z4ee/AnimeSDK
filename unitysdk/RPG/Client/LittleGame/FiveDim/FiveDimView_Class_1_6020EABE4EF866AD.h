#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET UNITYSDK_OFFSET(0xD4FF350)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET UNITYSDK_OFFSET(0xD4FF3B0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_Class_1_6020EABE4EF866AD_TypeDefinitionIndex = 76722;

	class FiveDimView_Class_1_6020EABE4EF866AD : public ::System::Object
	{
	public:
		::FiveDimRenderingItem* ODEKPKCDCJJ; // 0x10
		::UnityEngine::Renderer* ONEFCLJPGLE; // 0x18
		::System::String* AHCPFFKPOMG; // 0x20
		::UnityEngine::Transform* DICDJJOJKGF; // 0x28
		::UnityEngine::Transform* PLEHLKEICMD; // 0x30
		::System::Boolean JCEBFAEIBFJ; // 0x38
		::System::Boolean LGNDLIGICAH; // 0x39
		::UnityEngine::Quaternion NDBGHJDHFLH; // 0x3C
		::UnityEngine::Vector3 HONCCBNOKHB; // 0x4C
		::System::Boolean NMKBHPCCGOJ; // 0x58
		::System::Boolean OMEPBAIGEJN; // 0x59
		::System::Boolean MCMPDHLFNPG; // 0x5A
		::System::Boolean GFNOCJNENHI; // 0x5B

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
