#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CANDRESS_B__2_0_OFFSET UNITYSDK_OFFSET(0xBB59230)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB591E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB59220)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex = 60425;

	class GridFightGameFormationEditor_AllSlotEmptyDressRule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex)->GetStaticField(0x2D900);
		}
		static ::RPG::Client::GridFightGameFormationEditor_AllSlotEmptyDressRule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormationEditor_AllSlotEmptyDressRule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex)->GetStaticField(0x2D908);
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
