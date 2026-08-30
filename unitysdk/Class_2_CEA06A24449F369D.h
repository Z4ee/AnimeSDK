#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_BB62CC0FD1E45ADE_5;
class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class HipplenGameAreaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CEA06A24449F369D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD5E780)
#define CLASS_2_CEA06A24449F369D_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xBD5E920)
#define CLASS_2_CEA06A24449F369D_METHOD_2_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0xBD5E9F0)
#define CLASS_2_CEA06A24449F369D_METHOD_2_D60F4BA24E06086B_OFFSET UNITYSDK_OFFSET(0xBD5EB90)
#define CLASS_2_CEA06A24449F369D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD5E6D0)
#define CLASS_2_CEA06A24449F369D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD5E840)
#define CLASS_2_CEA06A24449F369D_TICK_OFFSET UNITYSDK_OFFSET(0xBD5E890)
#define CLASS_2_CEA06A24449F369D__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5E6C0)

inline static constexpr unsigned int Class_2_CEA06A24449F369D_TypeDefinitionIndex = 52554;

class Class_2_CEA06A24449F369D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::HipplenGameAreaListener* OFKGLJOAMLD; // 0x20
	::Class_1_F3391C70DC37088D* HEAGLNNMMNJ; // 0x28

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

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_841D90BDB3E94FF6(::Class_1_BB62CC0FD1E45ADE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB62CC0FD1E45ADE_5*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_METHOD_2_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_D60F4BA24E06086B(::Class_1_BB62CC0FD1E45ADE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB62CC0FD1E45ADE_5*))((::PBYTE)hIl2Cpp + CLASS_2_CEA06A24449F369D_METHOD_2_D60F4BA24E06086B_OFFSET))(this, a1);
	}
};
