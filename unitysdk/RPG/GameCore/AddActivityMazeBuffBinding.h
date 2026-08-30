#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_METHOD_3_3E92011DEB8E7153_OFFSET UNITYSDK_OFFSET(0x1CDAFC00)
#define RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_METHOD_3_771C68875E7F8A16_OFFSET UNITYSDK_OFFSET(0x1CDAFCD0)
#define RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAFCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddActivityMazeBuffBinding_TypeDefinitionIndex = 23155;

	class AddActivityMazeBuffBinding : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E92011DEB8E7153(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddActivityMazeBuffBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddActivityMazeBuffBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_METHOD_3_3E92011DEB8E7153_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_771C68875E7F8A16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddActivityMazeBuffBinding* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddActivityMazeBuffBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDACTIVITYMAZEBUFFBINDING_METHOD_3_771C68875E7F8A16_OFFSET))(a1, a2);
		}
	};
}
