#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SCENEGACHALISTENER_METHOD_3_05006A720F513692_OFFSET UNITYSDK_OFFSET(0x1DB47B50)
#define RPG_GAMECORE_SCENEGACHALISTENER_METHOD_3_C5FD2DCEB6EDD545_OFFSET UNITYSDK_OFFSET(0x1DB47B90)
#define RPG_GAMECORE_SCENEGACHALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SceneGachaListener_TypeDefinitionIndex = 20112;

	class SceneGachaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GrandRewardCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SmallRewardCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENEGACHALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05006A720F513692(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SceneGachaListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SceneGachaListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENEGACHALISTENER_METHOD_3_05006A720F513692_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5FD2DCEB6EDD545(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SceneGachaListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SceneGachaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENEGACHALISTENER_METHOD_3_C5FD2DCEB6EDD545_OFFSET))(a1, a2);
		}
	};
}
