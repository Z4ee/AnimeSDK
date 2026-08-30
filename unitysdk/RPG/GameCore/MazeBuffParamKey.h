#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEBUFFPARAMKEY_METHOD_2_C10F5538C6645469_OFFSET UNITYSDK_OFFSET(0x1D257F00)
#define RPG_GAMECORE_MAZEBUFFPARAMKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D258040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffParamKey_TypeDefinitionIndex = 18047;

	class MazeBuffParamKey : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFPARAMKEY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C10F5538C6645469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeBuffParamKey*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBuffParamKey*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFPARAMKEY_METHOD_2_C10F5538C6645469_OFFSET))(a1, a2);
		}
	};
}
