#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }

#define RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193A27F0)
#define RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS62_0___MOVELINKEDGACHAGROUPAFTERPRIORGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x193A3220)
#define RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS62_0___MOVELINKEDGACHAGROUPAFTERPRIORGROUP_B__1_OFFSET UNITYSDK_OFFSET(0x193A3260)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule___c__DisplayClass62_0_TypeDefinitionIndex = 64366;

	class GachaModule___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* linkedGachaGroupOrder; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __MoveLinkedGachaGroupAfterPriorGroup_b__0(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS62_0___MOVELINKEDGACHAGROUPAFTERPRIORGROUP_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __MoveLinkedGachaGroupAfterPriorGroup_b__1(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__DISPLAYCLASS62_0___MOVELINKEDGACHAGROUPAFTERPRIORGROUP_B__1_OFFSET))(this, a1);
		}
	};
}
