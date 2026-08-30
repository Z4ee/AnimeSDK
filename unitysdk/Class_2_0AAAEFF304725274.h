#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/GuardingState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNPCGuarding; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_0AAAEFF304725274_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC164EA0)
#define CLASS_2_0AAAEFF304725274_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xC165490)
#define CLASS_2_0AAAEFF304725274_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xC165D10)
#define CLASS_2_0AAAEFF304725274_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC1653B0)
#define CLASS_2_0AAAEFF304725274_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC165000)
#define CLASS_2_0AAAEFF304725274_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC165DD0)
#define CLASS_2_0AAAEFF304725274_TICK_OFFSET UNITYSDK_OFFSET(0xC1658D0)
#define CLASS_2_0AAAEFF304725274__CTOR_OFFSET UNITYSDK_OFFSET(0xC164930)

inline static constexpr unsigned int Class_2_0AAAEFF304725274_TypeDefinitionIndex = 52701;

class Class_2_0AAAEFF304725274 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x20
	::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x28
	::Class_1_5F51D4049EA87B7B* HLBNHHGIKFJ; // 0x30
	::RPG::GameCore::AdvNPCGuarding* IGHAHBNLIJA; // 0x38
	::Class_1_5F51D4049EA87B7B* NALKHCPNHHK; // 0x40
	::Class_2_A0580152EB393340* EIJAMKAKADD; // 0x48
	::Class_2_F67FF7EB526BF85C* LKNDEOKIEAK; // 0x50
	::Class_1_5F51D4049EA87B7B* FKGNOLNADND; // 0x58
	::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x60
	::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x68
	::Class_2_469A56953483CA0D* JABCHFIIFIC; // 0x70
	::Class_1_5F51D4049EA87B7B* BFADBJGMBAH; // 0x78
	::RPG::GameCore::GuardingState KNFFMBEJCAN; // 0x80
	::RPG::MVector3 EHAMDCAIFHD; // 0x84

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCGuarding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCGuarding*))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AAAEFF304725274_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
