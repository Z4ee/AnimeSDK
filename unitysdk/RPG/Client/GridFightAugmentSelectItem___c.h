#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4496F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA449730)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__GETDESCDETAILOBJECT_B__31_0_OFFSET UNITYSDK_OFFSET(0xA449740)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelectItem___c_TypeDefinitionIndex = 59239;

	class GridFightAugmentSelectItem___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightAugmentSelectItem___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAugmentSelectItem___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentSelectItem___c_TypeDefinitionIndex)->GetStaticField(0x18210);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentSelectItem___c_TypeDefinitionIndex)->GetStaticField(0x18218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetDescDetailObject_b__31_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM___C__GETDESCDETAILOBJECT_B__31_0_OFFSET))(this, x);
		}
	};
}
