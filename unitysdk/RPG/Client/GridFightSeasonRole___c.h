#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD68CA0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CREATE_B__66_0_OFFSET UNITYSDK_OFFSET(0x1AD68CF0)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD68CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonRole___c_TypeDefinitionIndex = 62224;

	class GridFightSeasonRole___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightSeasonRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSeasonRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonRole___c_TypeDefinitionIndex)->GetStaticField(0x2C090);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonRole___c_TypeDefinitionIndex)->GetStaticField(0x2C098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _Create_b__66_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CREATE_B__66_0_OFFSET))(this, a1);
		}
	};
}
