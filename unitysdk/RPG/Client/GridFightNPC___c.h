#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTNPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2212B0)
#define RPG_CLIENT_GRIDFIGHTNPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD2212F0)
#define RPG_CLIENT_GRIDFIGHTNPC___C___ONEQUIPCOMPONENTCOLLECTIONCHANGED_B__29_0_OFFSET UNITYSDK_OFFSET(0xD221300)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPC___c_TypeDefinitionIndex = 65123;

	class GridFightNPC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightNPC___c_TypeDefinitionIndex)->GetStaticField(0x3E4F0);
		}
		static ::RPG::Client::GridFightNPC___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightNPC___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightNPC___c_TypeDefinitionIndex)->GetStaticField(0x3E4F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __OnEquipComponentCollectionChanged_b__29_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC___C___ONEQUIPCOMPONENTCOLLECTIONCHANGED_B__29_0_OFFSET))(this, a1);
		}
	};
}
