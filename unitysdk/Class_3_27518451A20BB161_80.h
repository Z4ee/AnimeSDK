#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3A361C133909F092;
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_80_METHOD_3_7052CBBDB832B1D7_OFFSET UNITYSDK_OFFSET(0x153E8020)
#define CLASS_3_27518451A20BB161_80_METHOD_3_919E09C96DEA0001_OFFSET UNITYSDK_OFFSET(0x153E7F30)
#define CLASS_3_27518451A20BB161_80_METHOD_3_BD0ACFAEB4C78308_OFFSET UNITYSDK_OFFSET(0x153E8080)
#define CLASS_3_27518451A20BB161_80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153E7DF0)
#define CLASS_3_27518451A20BB161_80__CTOR_OFFSET UNITYSDK_OFFSET(0x153E7DC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_80_TypeDefinitionIndex = 53222;

class Class_3_27518451A20BB161_80 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3A361C133909F092*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3A361C133909F092* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3A361C133909F092*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* Method_3_BD0ACFAEB4C78308(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80_METHOD_3_BD0ACFAEB4C78308_OFFSET))(this, a1);
	}

	static ::Il2CppArray<::System::UInt32>* Method_3_919E09C96DEA0001(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80_METHOD_3_919E09C96DEA0001_OFFSET))(a1);
	}

	static ::System::Void Method_3_7052CBBDB832B1D7(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_80_METHOD_3_7052CBBDB832B1D7_OFFSET))(a1);
	}
};
