#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBE11A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE11E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__74_0_OFFSET UNITYSDK_OFFSET(0xBBE11F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__74_1_OFFSET UNITYSDK_OFFSET(0xBBE1220)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__77_0_OFFSET UNITYSDK_OFFSET(0xBBE1260)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c_TypeDefinitionIndex = 60880;

	class GridFightRoleConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>** StaticGet___9__74_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x36630);
		}
		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>** StaticGet___9__74_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x36638);
		}
		static ::RPG::Client::GridFightRoleConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x36640);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>** StaticGet___9__77_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x36648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetAllRankBackEquipmentDesc_b__74_0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__74_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetAllRankBackEquipmentDesc_b__74_1(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__74_1_OFFSET))(this, a1);
		}

		::System::Int32 __InitBackRankConfigs_b__77_0(::RPG::Client::GridFightBackRankConfig* a1, ::RPG::Client::GridFightBackRankConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__77_0_OFFSET))(this, a1, a2);
		}
	};
}
