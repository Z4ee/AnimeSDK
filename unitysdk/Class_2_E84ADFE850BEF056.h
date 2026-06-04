#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FireMultiProjectilesBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E84ADFE850BEF056_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141E2890)
#define CLASS_2_E84ADFE850BEF056_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x141E2C90)
#define CLASS_2_E84ADFE850BEF056_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x141E1FE0)
#define CLASS_2_E84ADFE850BEF056_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x141E2A90)
#define CLASS_2_E84ADFE850BEF056_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0x141E2D80)
#define CLASS_2_E84ADFE850BEF056_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x141E22C0)
#define CLASS_2_E84ADFE850BEF056_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x141E25D0)
#define CLASS_2_E84ADFE850BEF056_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141E28F0)
#define CLASS_2_E84ADFE850BEF056_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x141E2BF0)
#define CLASS_2_E84ADFE850BEF056_TICK_OFFSET UNITYSDK_OFFSET(0x141E2B10)
#define CLASS_2_E84ADFE850BEF056__CTOR_OFFSET UNITYSDK_OFFSET(0x141E1D30)

inline static constexpr unsigned int Class_2_E84ADFE850BEF056_TypeDefinitionIndex = 51433;

class Class_2_E84ADFE850BEF056 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_3; // 0x30
	::RPG::GameCore::FireMultiProjectilesBase* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::System::Single>* Field_2_7; // 0x50
	::System::Int32 Field_2_8; // 0x58
	::System::Int32 Field_2_9; // 0x5C
	::System::Int32 Field_2_10; // 0x60
	::System::Single Field_2_11; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_E84ADFE850BEF056_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}
};
