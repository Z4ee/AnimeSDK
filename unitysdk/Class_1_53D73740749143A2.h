#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_11AE5D13DB0DB102;
class Class_1_7D0B754E2D8CECAF;
class Class_3_FA020C2C23A72B3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53D73740749143A2_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x18495520)
#define CLASS_1_53D73740749143A2_METHOD_1_7EA2AAAE7B6580AD_OFFSET UNITYSDK_OFFSET(0x184957C0)
#define CLASS_1_53D73740749143A2_METHOD_1_8EDC5B702148C1D6_OFFSET UNITYSDK_OFFSET(0x184953F0)
#define CLASS_1_53D73740749143A2__CTOR_OFFSET UNITYSDK_OFFSET(0x184954C0)

inline static constexpr unsigned int Class_1_53D73740749143A2_TypeDefinitionIndex = 75929;

class Class_1_53D73740749143A2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_11AE5D13DB0DB102*>* FAINBBPOEDA; // 0x10
	::RPG::GameCore::CakeRaceTriggerEventType OBPOCFKOCFK; // 0x18

	::System::Void _ctor(::RPG::GameCore::CakeRaceTriggerEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + CLASS_1_53D73740749143A2__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_53D73740749143A2* Method_1_8EDC5B702148C1D6(::RPG::GameCore::CakeRaceTriggerEventType a1)
	{
		return ((::Class_1_53D73740749143A2*(*)(::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + CLASS_1_53D73740749143A2_METHOD_1_8EDC5B702148C1D6_OFFSET))(a1);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D73740749143A2_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_7EA2AAAE7B6580AD(::Class_3_FA020C2C23A72B3F* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_53D73740749143A2_METHOD_1_7EA2AAAE7B6580AD_OFFSET))(this, a1, a2);
	}
};
