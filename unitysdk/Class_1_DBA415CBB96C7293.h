#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_262;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DBA415CBB96C7293_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDF3E70)
#define CLASS_1_DBA415CBB96C7293_METHOD_1_B1EEFC4FD39408C2_OFFSET UNITYSDK_OFFSET(0x1CDF3CF0)
#define CLASS_1_DBA415CBB96C7293__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF3F20)

inline static constexpr unsigned int Class_1_DBA415CBB96C7293_TypeDefinitionIndex = 41708;

class Class_1_DBA415CBB96C7293 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_262* OLMBFAMHDON; // 0x10
	::UnityEngine::Transform* DICDJJOJKGF; // 0x18
	::RPG::PoolHashSet_1<::System::Int32>* FFEAHPNNDGO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBA415CBB96C7293__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B1EEFC4FD39408C2(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DBA415CBB96C7293_METHOD_1_B1EEFC4FD39408C2_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBA415CBB96C7293_CLEAR_OFFSET))(this);
	}
};
