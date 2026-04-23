#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_GET_INNERSETID_OFFSET UNITYSDK_OFFSET(0xAF82C30)
#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_GET_OUTERSETID1_OFFSET UNITYSDK_OFFSET(0xAF82BF0)
#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_GET_OUTERSETID2_OFFSET UNITYSDK_OFFSET(0xAF82C10)
#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_SET_INNERSETID_OFFSET UNITYSDK_OFFSET(0xAF82C40)
#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_SET_OUTERSETID1_OFFSET UNITYSDK_OFFSET(0xAF82C00)
#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_SET_OUTERSETID2_OFFSET UNITYSDK_OFFSET(0xAF82C20)
#define RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF82BE0)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RelicSuitBigData_TypeDefinitionIndex = 68722;

	class RelicSuitBigData : public ::System::Object
	{
	public:
		::System::UInt32 _OuterSetID2_k__BackingField; // 0x10
		::System::UInt32 _OuterSetID1_k__BackingField; // 0x14
		::System::UInt32 _InnerSetID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_OuterSetID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_GET_OUTERSETID1_OFFSET))(this);
		}

		::System::Void set_OuterSetID1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_SET_OUTERSETID1_OFFSET))(this, value);
		}

		::System::UInt32 get_OuterSetID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_GET_OUTERSETID2_OFFSET))(this);
		}

		::System::Void set_OuterSetID2(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_SET_OUTERSETID2_OFFSET))(this, value);
		}

		::System::UInt32 get_InnerSetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_GET_INNERSETID_OFFSET))(this);
		}

		::System::Void set_InnerSetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RELICSUITBIGDATA_SET_INNERSETID_OFFSET))(this, value);
		}
	};
}
