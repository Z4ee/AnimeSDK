#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET UNITYSDK_OFFSET(0xD44D500)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET UNITYSDK_OFFSET(0xD44D560)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_Class_1_6020EABE4EF866AD_TypeDefinitionIndex = 77192;

	class FiveDimView_Class_1_6020EABE4EF866AD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::System::String* AHCPFFKPOMG; // 0x18
		::UnityEngine::Transform* PLEHLKEICMD; // 0x20
		::FiveDimRenderingItem* ODEKPKCDCJJ; // 0x28
		::UnityEngine::Renderer* ONEFCLJPGLE; // 0x30
		::System::Boolean GFNOCJNENHI; // 0x38
		::System::Boolean NMKBHPCCGOJ; // 0x39
		::System::Boolean OMEPBAIGEJN; // 0x3A
		::System::Boolean LGNDLIGICAH; // 0x3B
		::System::Boolean JCEBFAEIBFJ; // 0x3C
		::System::Boolean MCMPDHLFNPG; // 0x3D
		::UnityEngine::Vector3 HONCCBNOKHB; // 0x40
		::UnityEngine::Quaternion NDBGHJDHFLH; // 0x4C

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
