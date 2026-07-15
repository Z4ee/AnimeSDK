#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A79C3B1527350D28;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_185_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CEB790)
#define CLASS_3_27518451A20BB161_185_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CEB7D0)
#define CLASS_3_27518451A20BB161_185__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEB760)

inline static constexpr unsigned int Class_3_27518451A20BB161_185_TypeDefinitionIndex = 52699;

class Class_3_27518451A20BB161_185 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A79C3B1527350D28*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A79C3B1527350D28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A79C3B1527350D28*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_185__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_185_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_185_ONTASKBEGIN_OFFSET))(this);
	}
};
