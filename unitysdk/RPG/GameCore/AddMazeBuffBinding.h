#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDMAZEBUFFBINDING_METHOD_3_0914133C6F65EF79_OFFSET UNITYSDK_OFFSET(0x1940F480)
#define RPG_GAMECORE_ADDMAZEBUFFBINDING_METHOD_3_46CBAE8F561D31BF_OFFSET UNITYSDK_OFFSET(0x1940F400)
#define RPG_GAMECORE_ADDMAZEBUFFBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1940F450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMazeBuffBinding_TypeDefinitionIndex = 22140;

	class AddMazeBuffBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MazeBuffInBattleBindingType>* BindingTypes; // 0x18
		::System::Boolean IsAfterWave; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFFBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_46CBAE8F561D31BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMazeBuffBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMazeBuffBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFFBINDING_METHOD_3_46CBAE8F561D31BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0914133C6F65EF79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddMazeBuffBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFFBINDING_METHOD_3_0914133C6F65EF79_OFFSET))(a1, a2);
		}
	};
}
