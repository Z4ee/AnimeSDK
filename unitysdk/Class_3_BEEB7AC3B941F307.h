#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_324567B4030E1EF5;
class Class_2_230F5EDDB35DAEBA;
class Class_2_A59080F652920B7A;
namespace RPG::Client { class RoadRashFireProjectileLaunchPoint; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectile; }
namespace RPG::Client { class RoadRashGameModifier_FireProjectileEmitter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BEEB7AC3B941F307_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD26E4B0)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_17798091CE5F2FF5_OFFSET UNITYSDK_OFFSET(0xD26ED40)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_24709341E8CFB9C0_OFFSET UNITYSDK_OFFSET(0xD26EA60)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_2A267B600B2C9E5A_OFFSET UNITYSDK_OFFSET(0xD26DCE0)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_2A5F3323FED6A59A_OFFSET UNITYSDK_OFFSET(0xD26E550)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_429F4F11667EF990_OFFSET UNITYSDK_OFFSET(0xD26EB00)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD26DC90)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_841CE588FB30EB5B_OFFSET UNITYSDK_OFFSET(0xD26E6E0)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_86F55D75F560048E_OFFSET UNITYSDK_OFFSET(0xD26EF00)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_8E92B818E69F3E66_OFFSET UNITYSDK_OFFSET(0xD26DF20)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xD26E390)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_E901F4903D57435C_OFFSET UNITYSDK_OFFSET(0xD26EBD0)
#define CLASS_3_BEEB7AC3B941F307_METHOD_3_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0xD26E1E0)
#define CLASS_3_BEEB7AC3B941F307_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD26D790)
#define CLASS_3_BEEB7AC3B941F307_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD26E4F0)
#define CLASS_3_BEEB7AC3B941F307_TICK_OFFSET UNITYSDK_OFFSET(0xD26E280)
#define CLASS_3_BEEB7AC3B941F307__CTOR_OFFSET UNITYSDK_OFFSET(0xD26D760)

inline static constexpr unsigned int Class_3_BEEB7AC3B941F307_TypeDefinitionIndex = 58555;

class Class_3_BEEB7AC3B941F307 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*>
{
public:
	// static const ::System::Single GIKCFECHJJE; // 0x0
	::Il2CppArray<::System::Int32>* ILOEKLANIMA; // 0x28
	::RPG::Client::RoadRashGameAbility_FireProjectile* HEJFBEFFIPA; // 0x30
	::Class_2_A59080F652920B7A* LPCDHEMDNEL; // 0x38
	::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* FNIPIJAKBJD; // 0x40
	::System::Single BPAIDCADMDO; // 0x48
	::System::Int32 HFCAPCGGIFP; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_3_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_2A267B600B2C9E5A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_2A267B600B2C9E5A_OFFSET))(this, a1);
	}

	::System::Void Method_3_8E92B818E69F3E66(::Class_2_230F5EDDB35DAEBA* a1, ::Il2CppArray<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_8E92B818E69F3E66_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_841CE588FB30EB5B(::Class_2_230F5EDDB35DAEBA* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_841CE588FB30EB5B_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_24709341E8CFB9C0(::Class_1_324567B4030E1EF5* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_324567B4030E1EF5*))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_24709341E8CFB9C0_OFFSET))(a1);
	}

	static ::System::Single Method_3_429F4F11667EF990(::Class_2_230F5EDDB35DAEBA* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::Single(*)(::Class_2_230F5EDDB35DAEBA*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_429F4F11667EF990_OFFSET))(a1, a2);
	}

	::System::Int32 Method_3_2A5F3323FED6A59A(::Class_2_230F5EDDB35DAEBA* a1, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>*, ::Il2CppArray<::System::Boolean>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_2A5F3323FED6A59A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_E901F4903D57435C(::Class_2_230F5EDDB35DAEBA* a1, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>*, ::Il2CppArray<::System::Boolean>*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_E901F4903D57435C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_17798091CE5F2FF5(::Class_2_230F5EDDB35DAEBA* a1, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>*, ::Il2CppArray<::System::Boolean>*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_17798091CE5F2FF5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_3_86F55D75F560048E(::RPG::Client::RoadRashFireProjectileLaunchPoint* a1)
	{
		return ((::System::Single(*)(::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + CLASS_3_BEEB7AC3B941F307_METHOD_3_86F55D75F560048E_OFFSET))(a1);
	}
};
