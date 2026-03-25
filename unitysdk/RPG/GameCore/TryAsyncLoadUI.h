#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRYASYNCLOADUI_METHOD_3_2D2DF5325EDAFD7A_OFFSET UNITYSDK_OFFSET(0x178D0EF0)
#define RPG_GAMECORE_TRYASYNCLOADUI_METHOD_3_B1432D3A3E5D6746_OFFSET UNITYSDK_OFFSET(0x178D1000)
#define RPG_GAMECORE_TRYASYNCLOADUI__CTOR_OFFSET UNITYSDK_OFFSET(0x178D0FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryAsyncLoadUI_TypeDefinitionIndex = 18878;

	class TryAsyncLoadUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYASYNCLOADUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D2DF5325EDAFD7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryAsyncLoadUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryAsyncLoadUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYASYNCLOADUI_METHOD_3_2D2DF5325EDAFD7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1432D3A3E5D6746(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryAsyncLoadUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryAsyncLoadUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYASYNCLOADUI_METHOD_3_B1432D3A3E5D6746_OFFSET))(a1, a2);
		}
	};
}
