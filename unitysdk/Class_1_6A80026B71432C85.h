#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_144075C1871C33A9;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }

#define CLASS_1_6A80026B71432C85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11334EB0)
#define CLASS_1_6A80026B71432C85_INIT_OFFSET UNITYSDK_OFFSET(0x11334D60)
#define CLASS_1_6A80026B71432C85_ONENTER_OFFSET UNITYSDK_OFFSET(0x11334E30)
#define CLASS_1_6A80026B71432C85_ONEXIT_OFFSET UNITYSDK_OFFSET(0x11334E70)
#define CLASS_1_6A80026B71432C85_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x11334DB0)
#define CLASS_1_6A80026B71432C85__CTOR_OFFSET UNITYSDK_OFFSET(0x11334EF0)

inline static constexpr unsigned int Class_1_6A80026B71432C85_TypeDefinitionIndex = 63834;

class Class_1_6A80026B71432C85 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A80026B71432C85__CTOR_OFFSET))(this);
	}

	::System::Void Init(::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* a1, ::Class_1_144075C1871C33A9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*, ::Class_1_144075C1871C33A9*))((::PBYTE)hIl2Cpp + CLASS_1_6A80026B71432C85_INIT_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* PrepareOnStartPuzzle()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A80026B71432C85_PREPAREONSTARTPUZZLE_OFFSET))(this);
	}

	::System::Void OnEnter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A80026B71432C85_ONENTER_OFFSET))(this);
	}

	::System::Void OnExit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A80026B71432C85_ONEXIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A80026B71432C85_DISPOSE_OFFSET))(this);
	}
};
