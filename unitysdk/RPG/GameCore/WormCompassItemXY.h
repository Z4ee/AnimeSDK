#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WORMCOMPASSITEMXY_METHOD_2_127EA6CDB6955818_OFFSET UNITYSDK_OFFSET(0x1D1C78C0)
#define RPG_GAMECORE_WORMCOMPASSITEMXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WormCompassItemXY_TypeDefinitionIndex = 21357;

	class WormCompassItemXY : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Row; // 0x10
		::System::Int32 Col; // 0x14
		::System::String* SubPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORMCOMPASSITEMXY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_127EA6CDB6955818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WormCompassItemXY*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WormCompassItemXY*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORMCOMPASSITEMXY_METHOD_2_127EA6CDB6955818_OFFSET))(a1, a2);
		}
	};
}
