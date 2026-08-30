#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD5A5A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5A5E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__74_0_OFFSET UNITYSDK_OFFSET(0x1BD5A830)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__74_1_OFFSET UNITYSDK_OFFSET(0x1BD5A840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_MAINROLES_B__92_0_OFFSET UNITYSDK_OFFSET(0x1BD5A850)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__51_0_OFFSET UNITYSDK_OFFSET(0x1BD5A690)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__51_1_OFFSET UNITYSDK_OFFSET(0x1BD5A6A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BD5A760)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__53_1_OFFSET UNITYSDK_OFFSET(0x1BD5A770)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__HASANYEQUIPTOTRACK_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BD5A5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c_TypeDefinitionIndex = 64741;

	class GridFightGameFormation___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28EF0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28EF8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__74_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F00);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F08);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__51_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F10);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F18);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__74_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F20);
		}
		static ::RPG::Client::GridFightGameFormation___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormation___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F28);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x28F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasAnyEquipToTrack_b__29_0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__HASANYEQUIPTOTRACK_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_RecommendBasicEquips_b__51_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__51_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendBasicEquips_b__51_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__51_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_RecommendEquips_b__53_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__53_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendEquips_b__53_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__53_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsEmpty_b__74_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__74_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsEmpty_b__74_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__74_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_MainRoles_b__92_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_MAINROLES_B__92_0_OFFSET))(this, a1);
		}
	};
}
