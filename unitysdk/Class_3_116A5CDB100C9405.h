#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6B2834ABDD896153;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_116A5CDB100C9405_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB07E60)
#define CLASS_3_116A5CDB100C9405__CTOR_OFFSET UNITYSDK_OFFSET(0xBB07E30)

inline static constexpr unsigned int Class_3_116A5CDB100C9405_TypeDefinitionIndex = 55344;

class Class_3_116A5CDB100C9405 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6B2834ABDD896153*>
{
public:
	::Il2CppArray<::System::Int32>* AHFJFKHPNME; // 0x28
	::Il2CppArray<::System::Int32>* GNICJKOLLPB; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6B2834ABDD896153* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6B2834ABDD896153*))((::PBYTE)hIl2Cpp + CLASS_3_116A5CDB100C9405__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_116A5CDB100C9405_ONTASKBEGIN_OFFSET))(this);
	}
};
