#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A66EF8194C962E2;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_2CB1C51BDDC28181_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA44D80)
#define CLASS_1_2CB1C51BDDC28181_METHOD_1_49E4584AE2A535A5_OFFSET UNITYSDK_OFFSET(0x1CA44C50)
#define CLASS_1_2CB1C51BDDC28181__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA44EC0)

inline static constexpr unsigned int Class_1_2CB1C51BDDC28181_TypeDefinitionIndex = 43317;

class Class_1_2CB1C51BDDC28181 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_3A66EF8194C962E2*>* MBLMCBOBIDD; // 0x10
	::RPG::PoolList_1<::Class_1_3A66EF8194C962E2*>* NIIHIBMNDFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CB1C51BDDC28181__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_49E4584AE2A535A5(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CB1C51BDDC28181_METHOD_1_49E4584AE2A535A5_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CB1C51BDDC28181_CLEAR_OFFSET))(this);
	}
};
