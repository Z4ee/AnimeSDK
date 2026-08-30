#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD301C20)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD301C60)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_0_OFFSET UNITYSDK_OFFSET(0xD301C70)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_1_OFFSET UNITYSDK_OFFSET(0xD301CD0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__79_0_OFFSET UNITYSDK_OFFSET(0xD301D40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c_TypeDefinitionIndex = 65178;

	class GridFightRoleConfig___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>** StaticGet___9__79_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x44C90);
		}
		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>** StaticGet___9__76_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x44C98);
		}
		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>** StaticGet___9__76_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x44CA0);
		}
		static ::RPG::Client::GridFightRoleConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x44CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetAllRankBackEquipmentDesc_b__76_0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetAllRankBackEquipmentDesc_b__76_1(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_1_OFFSET))(this, a1);
		}

		::System::Int32 __InitBackRankConfigs_b__79_0(::RPG::Client::GridFightBackRankConfig* a1, ::RPG::Client::GridFightBackRankConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__79_0_OFFSET))(this, a1, a2);
		}
	};
}
