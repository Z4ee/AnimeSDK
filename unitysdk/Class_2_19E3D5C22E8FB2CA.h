#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_2_19E3D5C22E8FB2CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12339DB0)
#define CLASS_2_19E3D5C22E8FB2CA_METHOD_2_458F6A2A308822BF_OFFSET UNITYSDK_OFFSET(0x1233A030)
#define CLASS_2_19E3D5C22E8FB2CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12339FE0)
#define CLASS_2_19E3D5C22E8FB2CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12339E00)
#define CLASS_2_19E3D5C22E8FB2CA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12339F30)
#define CLASS_2_19E3D5C22E8FB2CA_TICK_OFFSET UNITYSDK_OFFSET(0x12339F80)
#define CLASS_2_19E3D5C22E8FB2CA__CTOR_OFFSET UNITYSDK_OFFSET(0x12339DA0)

inline static constexpr unsigned int Class_2_19E3D5C22E8FB2CA_TypeDefinitionIndex = 53437;

class Class_2_19E3D5C22E8FB2CA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::Promises::Promise* Field_2_2; // 0x20
	::RPG::GameCore::BattlePerformInit* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePerformInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePerformInit*))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_458F6A2A308822BF(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_19E3D5C22E8FB2CA_METHOD_2_458F6A2A308822BF_OFFSET))(this, a1);
	}
};
