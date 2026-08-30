#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1300B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1300F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__GETDESCDETAILOBJECT_B__56_0_OFFSET UNITYSDK_OFFSET(0xD130100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment___c_TypeDefinitionIndex = 64435;

	class GridFightAugment___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment___c_TypeDefinitionIndex)->GetStaticField(0x1E9B0);
		}
		static ::RPG::Client::GridFightAugment___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAugment___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment___c_TypeDefinitionIndex)->GetStaticField(0x1E9B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetDescDetailObject_b__56_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__GETDESCDETAILOBJECT_B__56_0_OFFSET))(this, a1);
		}
	};
}
