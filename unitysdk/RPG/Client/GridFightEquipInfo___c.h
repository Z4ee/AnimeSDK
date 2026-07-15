#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A68A500)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68A540)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__GET_IDLEEQUIPCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1A68A550)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c_TypeDefinitionIndex = 62038;

	class GridFightEquipInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightEquipInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipInfo___c_TypeDefinitionIndex)->GetStaticField(0x23C10);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipInfo___c_TypeDefinitionIndex)->GetStaticField(0x23C18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IdleEquipCount_b__26_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__GET_IDLEEQUIPCOUNT_B__26_0_OFFSET))(this, a1);
		}
	};
}
