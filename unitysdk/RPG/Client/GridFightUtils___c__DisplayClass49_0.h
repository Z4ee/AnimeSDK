#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD37AC80)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS49_0__GETHACKEQUIPRANK_B__0_OFFSET UNITYSDK_OFFSET(0xD37C7C0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS49_0__GETHACKEQUIPRANK_B__1_OFFSET UNITYSDK_OFFSET(0xD37C8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils___c__DisplayClass49_0_TypeDefinitionIndex = 64947;

	class GridFightUtils___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Boolean>* __9__1; // 0x10
		::System::UInt32 hackEquipID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetHackEquipRank_b__0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS49_0__GETHACKEQUIPRANK_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetHackEquipRank_b__1(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS49_0__GETHACKEQUIPRANK_B__1_OFFSET))(this, a1);
		}
	};
}
