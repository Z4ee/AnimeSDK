#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"

class Class_1_C89D8D1595D8D05F;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xD198AF0)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xD198B10)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0xD198B00)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xD198B20)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__BUILDROLE_OFFSET UNITYSDK_OFFSET(0xD198750)
#define RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD198680)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeExpertAwardData_TypeDefinitionIndex = 65050;

	class GridFightForgeExpertAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::UInt32 _CoinNum_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_C89D8D1595D8D05F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C89D8D1595D8D05F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildRole(::Class_1_C89D8D1595D8D05F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C89D8D1595D8D05F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA__BUILDROLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_COINNUM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEXPERTAWARDDATA_SET_ROLE_OFFSET))(this, a1);
		}
	};
}
