#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x986CB20)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x986CB60)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETBOSS_B__2_0_OFFSET UNITYSDK_OFFSET(0x986CB70)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETELITE_B__3_0_OFFSET UNITYSDK_OFFSET(0x986CBB0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETMINION_B__4_0_OFFSET UNITYSDK_OFFSET(0x986CBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampConfig___c_TypeDefinitionIndex = 52821;

	class GridFightMonsterCampConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x177F0);
		}
		static ::RPG::Client::GridFightMonsterCampConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightMonsterCampConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x177F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x17800);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x17808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBoss_b__2_0(::RPG::Client::GridFightMonsterData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETBOSS_B__2_0_OFFSET))(this, data);
		}

		::System::Boolean _GetElite_b__3_0(::RPG::Client::GridFightMonsterData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETELITE_B__3_0_OFFSET))(this, data);
		}

		::System::Boolean _GetMinion_b__4_0(::RPG::Client::GridFightMonsterData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETMINION_B__4_0_OFFSET))(this, data);
		}
	};
}
