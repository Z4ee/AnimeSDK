#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_CC746FE14BEFEBCD;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3E7D7FDF42A4A869_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1237DCE0)
#define CLASS_2_3E7D7FDF42A4A869_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x1237E340)
#define CLASS_2_3E7D7FDF42A4A869_METHOD_2_BCEDF88FD731AB55_OFFSET UNITYSDK_OFFSET(0x1237E2E0)
#define CLASS_2_3E7D7FDF42A4A869_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1237DD70)
#define CLASS_2_3E7D7FDF42A4A869_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1237E1E0)
#define CLASS_2_3E7D7FDF42A4A869_TICK_OFFSET UNITYSDK_OFFSET(0x1237E230)
#define CLASS_2_3E7D7FDF42A4A869__CTOR_OFFSET UNITYSDK_OFFSET(0x1237DB90)

inline static constexpr unsigned int Class_2_3E7D7FDF42A4A869_TypeDefinitionIndex = 49691;

class Class_2_3E7D7FDF42A4A869 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_0AD6129525BF5F86* Field_2_3; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x20
	::Class_3_CC746FE14BEFEBCD* Field_2_0; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CC746FE14BEFEBCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CC746FE14BEFEBCD*))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BCEDF88FD731AB55(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_METHOD_2_BCEDF88FD731AB55_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_3E7D7FDF42A4A869_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}
};
