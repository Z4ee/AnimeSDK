#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xD18E2A0)
#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD18E200)
#define RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET UNITYSDK_OFFSET(0xD18E1B0)
#define RPG_CLIENT_GRIDFIGHTFINANCING__CTOR_OFFSET UNITYSDK_OFFSET(0xD18E1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFinancing_TypeDefinitionIndex = 65096;

	class GridFightFinancing : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET))(this);
		}
	};
}
