#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_492;
class Class_0_16E4307DCC419505_514;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9008BE27A15A0A08_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA591B0)
#define CLASS_1_9008BE27A15A0A08_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA59120)
#define CLASS_1_9008BE27A15A0A08__CTOR_OFFSET UNITYSDK_OFFSET(0xAA59110)

inline static constexpr unsigned int Class_1_9008BE27A15A0A08_TypeDefinitionIndex = 55202;

class Class_1_9008BE27A15A0A08 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_492* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_514* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_492* a1, ::Class_0_16E4307DCC419505_514* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_492*, ::Class_0_16E4307DCC419505_514*))((::PBYTE)hIl2Cpp + CLASS_1_9008BE27A15A0A08__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_9008BE27A15A0A08_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_9008BE27A15A0A08_EVALUATE_OFFSET))(this, a1, a2);
	}
};
