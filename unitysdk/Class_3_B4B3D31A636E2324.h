#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
class Class_1_B3122B2B681EA91E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryTriggerAid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4B3D31A636E2324_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1430B580)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_1_OFFSET UNITYSDK_OFFSET(0x1430CAE0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_2_OFFSET UNITYSDK_OFFSET(0x1430CB60)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1430CA50)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x1430CBE0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x1430CC90)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_4DB819C9BF9D2E06_OFFSET UNITYSDK_OFFSET(0x1430B790)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_4F18F1FE559348B5_OFFSET UNITYSDK_OFFSET(0x1430B8C0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_6439908016A5A909_OFFSET UNITYSDK_OFFSET(0x1430BCF0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0x1430B700)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_9D804C998C2640AF_OFFSET UNITYSDK_OFFSET(0x1430B9B0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_AEF4798E022C392F_OFFSET UNITYSDK_OFFSET(0x1430C320)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_CF002F075D824BF4_OFFSET UNITYSDK_OFFSET(0x1430BA70)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_E484621534821291_1_OFFSET UNITYSDK_OFFSET(0x1430C950)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_E484621534821291_OFFSET UNITYSDK_OFFSET(0x1430C850)
#define CLASS_3_B4B3D31A636E2324_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1430C5D0)
#define CLASS_3_B4B3D31A636E2324__CTOR_OFFSET UNITYSDK_OFFSET(0x1430B420)
#define CLASS_3_B4B3D31A636E2324___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1430CDE0)

inline static constexpr unsigned int Class_3_B4B3D31A636E2324_TypeDefinitionIndex = 52092;

class Class_3_B4B3D31A636E2324 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryTriggerAid*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryTriggerAid* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryTriggerAid*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4DB819C9BF9D2E06(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_4DB819C9BF9D2E06_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_4F18F1FE559348B5(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_4F18F1FE559348B5_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_9D804C998C2640AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_9D804C998C2640AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CF002F075D824BF4(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_CF002F075D824BF4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_AEF4798E022C392F(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_AEF4798E022C392F_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_E484621534821291(::Class_1_B3122B2B681EA91E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3122B2B681EA91E*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void Method_3_E484621534821291_1(::Class_1_B3122B2B681EA91E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3122B2B681EA91E*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_E484621534821291_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_B3122B2B681EA91E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3122B2B681EA91E*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_0AB718BEE9EA06D7_1(::Class_1_B3122B2B681EA91E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3122B2B681EA91E*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_0AB718BEE9EA06D7_2(::Class_1_B3122B2B681EA91E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3122B2B681EA91E*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_6439908016A5A909(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_6439908016A5A909_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
