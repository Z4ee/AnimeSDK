#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E01A66D05D835284_1_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x1626D970)
#define CLASS_1_E01A66D05D835284_1_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1626D980)
#define CLASS_1_E01A66D05D835284_1_GET_WAITSELECTCARD_OFFSET UNITYSDK_OFFSET(0x1626D990)
#define CLASS_1_E01A66D05D835284_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1626D9A0)
#define CLASS_1_E01A66D05D835284_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1626D960)

inline static constexpr unsigned int Class_1_E01A66D05D835284_1_TypeDefinitionIndex = 79394;

class Class_1_E01A66D05D835284_1 : public ::System::Object
{
public:
	::System::Int32 _EnemyIndex_k__BackingField; // 0x10
	::System::Boolean _WaitSelectCard_k__BackingField; // 0x14
	::System::Int32 _CardIndex_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 get_CardIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_1_GET_CARDINDEX_OFFSET))(this);
	}

	::System::Int32 get_EnemyIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_1_GET_ENEMYINDEX_OFFSET))(this);
	}

	::System::Boolean get_WaitSelectCard()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_1_GET_WAITSELECTCARD_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A66D05D835284_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
