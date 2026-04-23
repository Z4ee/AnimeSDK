#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_382;
class Class_1_B3122B2B681EA91E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryTriggerAid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4B3D31A636E2324_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D47FB0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_1_OFFSET UNITYSDK_OFFSET(0x11D493A0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_2_OFFSET UNITYSDK_OFFSET(0x11D49420)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x11D49310)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_46A9E1157A426D93_OFFSET UNITYSDK_OFFSET(0x11D48C50)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x11D49550)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11D494A0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_6131940E3FA6D9B7_OFFSET UNITYSDK_OFFSET(0x11D482C0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_6439908016A5A909_OFFSET UNITYSDK_OFFSET(0x11D48630)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_662F19C2DFE267DD_OFFSET UNITYSDK_OFFSET(0x11D48390)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0x11D48110)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_A614BF36F85CC1DF_OFFSET UNITYSDK_OFFSET(0x11D48430)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_E484621534821291_1_OFFSET UNITYSDK_OFFSET(0x11D49200)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_E484621534821291_OFFSET UNITYSDK_OFFSET(0x11D490F0)
#define CLASS_3_B4B3D31A636E2324_METHOD_3_FC5236432DBB9571_OFFSET UNITYSDK_OFFSET(0x11D481A0)
#define CLASS_3_B4B3D31A636E2324_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11D48E80)
#define CLASS_3_B4B3D31A636E2324__CTOR_OFFSET UNITYSDK_OFFSET(0x11D47E80)
#define CLASS_3_B4B3D31A636E2324___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D49690)

inline static constexpr unsigned int Class_3_B4B3D31A636E2324_TypeDefinitionIndex = 51424;

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

	::System::Boolean Method_3_FC5236432DBB9571(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_FC5236432DBB9571_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_6131940E3FA6D9B7(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_6131940E3FA6D9B7_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_662F19C2DFE267DD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_662F19C2DFE267DD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A614BF36F85CC1DF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_A614BF36F85CC1DF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_46A9E1157A426D93(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_46A9E1157A426D93_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_3_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324_METHOD_3_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4B3D31A636E2324___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
