#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PetPartySingleDoubleStartOrder.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN_METHOD_2_47EE7BE8B93A8A2D_OFFSET UNITYSDK_OFFSET(0x1D8DD5B0)
#define RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySingleDoubleStartPattern_TypeDefinitionIndex = 17550;

	class PetPartySingleDoubleStartPattern : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::RPG::GameCore::PetPartySingleDoubleStartOrder StartOrder; // 0x14
		::System::Single MinIntervalSeconds; // 0x18
		::System::Single MaxIntervalSeconds; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_47EE7BE8B93A8A2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartySingleDoubleStartPattern*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartySingleDoubleStartPattern*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN_METHOD_2_47EE7BE8B93A8A2D_OFFSET))(a1, a2);
		}
	};
}
