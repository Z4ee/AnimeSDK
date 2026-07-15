#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6437D0)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS16_0___GETNEEDEQUIPID_B__0_OFFSET UNITYSDK_OFFSET(0x1A644EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent___c__DisplayClass16_0_TypeDefinitionIndex = 62445;

	class GridFightElationTraitEquipComponent___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* baseEquip; // 0x10
		::System::Func_2<::System::UInt32, ::System::Boolean>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetNeedEquipID_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS16_0___GETNEEDEQUIPID_B__0_OFFSET))(this, a1);
		}
	};
}
