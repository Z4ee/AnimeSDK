#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class ByLevelLoseCheck; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_D040966F9D0B72F8_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBAFA00)
#define CLASS_3_D040966F9D0B72F8_METHOD_3_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xBBAFFA0)
#define CLASS_3_D040966F9D0B72F8_METHOD_3_303A86721449D50E_OFFSET UNITYSDK_OFFSET(0xBBB0190)
#define CLASS_3_D040966F9D0B72F8_METHOD_3_381C51ACB0197D8A_OFFSET UNITYSDK_OFFSET(0xBBB00F0)
#define CLASS_3_D040966F9D0B72F8_METHOD_3_D6E51DD7396F80CE_OFFSET UNITYSDK_OFFSET(0xBBAFB60)
#define CLASS_3_D040966F9D0B72F8_METHOD_3_F00FC502F7150C33_OFFSET UNITYSDK_OFFSET(0xBBAFE50)
#define CLASS_3_D040966F9D0B72F8__CTOR_OFFSET UNITYSDK_OFFSET(0xBBAF890)

inline static constexpr unsigned int Class_3_D040966F9D0B72F8_TypeDefinitionIndex = 58142;

class Class_3_D040966F9D0B72F8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByLevelLoseCheck*>
{
public:
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* LNAHEJHFOIL; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_D6E51DD7396F80CE(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8_METHOD_3_D6E51DD7396F80CE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F00FC502F7150C33(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8_METHOD_3_F00FC502F7150C33_OFFSET))(this, a1);
	}

	::System::Void Method_3_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8_METHOD_3_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_3_381C51ACB0197D8A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8_METHOD_3_381C51ACB0197D8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_303A86721449D50E(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_D040966F9D0B72F8_METHOD_3_303A86721449D50E_OFFSET))(this, a1);
	}
};
