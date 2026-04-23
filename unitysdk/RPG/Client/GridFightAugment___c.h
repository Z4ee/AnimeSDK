#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA446880)
#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4468C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT___C__GETDESCDETAILOBJECT_B__57_0_OFFSET UNITYSDK_OFFSET(0xA4468D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment___c_TypeDefinitionIndex = 59230;

	class GridFightAugment___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment___c_TypeDefinitionIndex)->GetStaticField(0x17F50);
		}
		static ::RPG::Client::GridFightAugment___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAugment___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment___c_TypeDefinitionIndex)->GetStaticField(0x17F58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetDescDetailObject_b__57_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT___C__GETDESCDETAILOBJECT_B__57_0_OFFSET))(this, x);
		}
	};
}
