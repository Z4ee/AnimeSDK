#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INTVECTOR2_METHOD_2_0DF8757906AEA59C_OFFSET UNITYSDK_OFFSET(0x172BD040)
#define RPG_GAMECORE_INTVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x172BD1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntVector2_TypeDefinitionIndex = 16194;

	class IntVector2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTVECTOR2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0DF8757906AEA59C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IntVector2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IntVector2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTVECTOR2_METHOD_2_0DF8757906AEA59C_OFFSET))(a1, a2);
		}
	};
}
