#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CANDRESS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD1B2F40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1B2EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B2F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex = 64700;

	class GridFightGameFormationEditor_AllSlotEmptyDressRule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightGameFormationEditor_AllSlotEmptyDressRule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormationEditor_AllSlotEmptyDressRule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex)->GetStaticField(0x2DD00);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex)->GetStaticField(0x2DD08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanDress_b__2_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CANDRESS_B__2_0_OFFSET))(this, a1);
		}
	};
}
