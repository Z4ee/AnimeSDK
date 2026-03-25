#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
class Class_1_BB62CC0FD1E45ADE_4;
namespace RPG::GameCore { class HipplenGameAreaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CEA06A24449F369D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C66BC0)
#define CLASS_2_CEA06A24449F369D_METHOD_2_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0x9C66E00)
#define CLASS_2_CEA06A24449F369D_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x9C66D30)
#define CLASS_2_CEA06A24449F369D_METHOD_2_D60F4BA24E06086B_OFFSET UNITYSDK_OFFSET(0x9C66FA0)
#define CLASS_2_CEA06A24449F369D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C66B20)
#define CLASS_2_CEA06A24449F369D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9C66C50)
#define CLASS_2_CEA06A24449F369D_TICK_OFFSET UNITYSDK_OFFSET(0x9C66CA0)
#define CLASS_2_CEA06A24449F369D__CTOR_OFFSET UNITYSDK_OFFSET(0x9C66B10)

inline static constexpr unsigned int Class_2_CEA06A24449F369D_TypeDefinitionIndex = 42296;

class Class_2_CEA06A24449F369D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_69FF5DE516C87A66* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::HipplenGameAreaListener* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameAreaListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameAreaListener*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_841D90BDB3E94FF6(::Class_1_BB62CC0FD1E45ADE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB62CC0FD1E45ADE_4*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_METHOD_2_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_D60F4BA24E06086B(::Class_1_BB62CC0FD1E45ADE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB62CC0FD1E45ADE_4*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_METHOD_2_D60F4BA24E06086B_OFFSET))(this, a1);
	}
};
