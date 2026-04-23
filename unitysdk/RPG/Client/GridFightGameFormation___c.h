#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4ADBB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4ADBF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__72_0_OFFSET UNITYSDK_OFFSET(0xA4ADDB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__72_1_OFFSET UNITYSDK_OFFSET(0xA4ADDC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_MAINROLES_B__90_0_OFFSET UNITYSDK_OFFSET(0xA4ADDD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__49_0_OFFSET UNITYSDK_OFFSET(0xA4ADC30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__49_1_OFFSET UNITYSDK_OFFSET(0xA4ADC40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__51_0_OFFSET UNITYSDK_OFFSET(0xA4ADCF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__51_1_OFFSET UNITYSDK_OFFSET(0xA4ADD00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__HASANYEQUIPTOTRACK_B__27_0_OFFSET UNITYSDK_OFFSET(0xA4ADC00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c_TypeDefinitionIndex = 59531;

	class GridFightGameFormation___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__51_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11340);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__90_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11348);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11350);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__72_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11358);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11360);
		}
		static ::System::Func_2<::Class_2_181F61C600ECA68B*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Class_2_181F61C600ECA68B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11368);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11370);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__72_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11378);
		}
		static ::RPG::Client::GridFightGameFormation___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormation___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormation___c_TypeDefinitionIndex)->GetStaticField(0x11380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasAnyEquipToTrack_b__27_0(::Class_2_181F61C600ECA68B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__HASANYEQUIPTOTRACK_B__27_0_OFFSET))(this, x);
		}

		::System::Boolean _get_RecommendBasicEquips_b__49_0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__49_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendBasicEquips_b__49_1(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDBASICEQUIPS_B__49_1_OFFSET))(this, x);
		}

		::System::Boolean _get_RecommendEquips_b__51_0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__51_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemData* _get_RecommendEquips_b__51_1(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_RECOMMENDEQUIPS_B__51_1_OFFSET))(this, x);
		}

		::System::Boolean _get_IsEmpty_b__72_0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__72_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsEmpty_b__72_1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_ISEMPTY_B__72_1_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* _get_MainRoles_b__90_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__GET_MAINROLES_B__90_0_OFFSET))(this, x);
		}
	};
}
