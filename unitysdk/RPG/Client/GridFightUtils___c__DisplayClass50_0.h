#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB5140)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__GETFATEEQUIPRANK_B__0_OFFSET UNITYSDK_OFFSET(0x18FB6CF0)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__GETFATEEQUIPRANK_B__1_OFFSET UNITYSDK_OFFSET(0x18FB6E00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils___c__DisplayClass50_0_TypeDefinitionIndex = 61964;

	class GridFightUtils___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Boolean>* __9__1; // 0x10
		::System::UInt32 equipID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFateEquipRank_b__0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__GETFATEEQUIPRANK_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFateEquipRank_b__1(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS50_0__GETFATEEQUIPRANK_B__1_OFFSET))(this, a1);
		}
	};
}
