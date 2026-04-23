#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_472;
class Class_0_16E4307DCC419505_495;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24560A852252CAEC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x924B700)
#define CLASS_1_24560A852252CAEC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x924B670)
#define CLASS_1_24560A852252CAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x924B660)

inline static constexpr unsigned int Class_1_24560A852252CAEC_TypeDefinitionIndex = 54479;

class Class_1_24560A852252CAEC : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_495* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_472* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_472* a1, ::Class_0_16E4307DCC419505_495* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_472*, ::Class_0_16E4307DCC419505_495*))((::PBYTE)hIl2Cpp + CLASS_1_24560A852252CAEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_24560A852252CAEC_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_24560A852252CAEC_EVALUATE_OFFSET))(this, a1, a2);
	}
};
