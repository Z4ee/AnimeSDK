#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_F8F1752DCDE35E35;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ST_Main_FollowTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_425C4E17F08EC907_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12397400)
#define CLASS_3_425C4E17F08EC907_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x123976B0)
#define CLASS_3_425C4E17F08EC907_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x12397910)
#define CLASS_3_425C4E17F08EC907_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12397780)
#define CLASS_3_425C4E17F08EC907_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12397480)
#define CLASS_3_425C4E17F08EC907_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123978A0)
#define CLASS_3_425C4E17F08EC907_TICK_OFFSET UNITYSDK_OFFSET(0x12397820)
#define CLASS_3_425C4E17F08EC907__CTOR_OFFSET UNITYSDK_OFFSET(0x12396D30)
#define CLASS_3_425C4E17F08EC907___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123979B0)
#define CLASS_3_425C4E17F08EC907___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12397A50)

inline static constexpr unsigned int Class_3_425C4E17F08EC907_TypeDefinitionIndex = 48195;

class Class_3_425C4E17F08EC907 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_FollowTarget*>
{
public:
	::RPG::Client::CameraBlendCurve* Field_3_1; // 0x28
	::Class_1_F8F1752DCDE35E35* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FollowTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FollowTarget*))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_METHOD_3_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_425C4E17F08EC907___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
