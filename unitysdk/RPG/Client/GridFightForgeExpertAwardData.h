#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"

class Class_1_BD9825AD31C83B08;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xA49F7A0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xA49F7C0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0xA49F7B0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xA49F7D0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__BUILDROLE_OFFSET UNITYSDK_OFFSET(0xA49F490)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA49F3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeExpertAwardData_TypeDefinitionIndex = 59838;

	class GridFightForgeExpertAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::UInt32 _CoinNum_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 awardIndex, ::Class_1_BD9825AD31C83B08* protoExpertAward)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_BD9825AD31C83B08*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__CTOR_OFFSET))(this, awardIndex, protoExpertAward);
		}

		::System::Void _BuildRole(::Class_1_BD9825AD31C83B08* protoExpertAward)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD9825AD31C83B08*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__BUILDROLE_OFFSET))(this, protoExpertAward);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_COINNUM_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_ROLE_OFFSET))(this, value);
		}
	};
}
