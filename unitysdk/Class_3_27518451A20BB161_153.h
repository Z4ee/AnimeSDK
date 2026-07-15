#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_75570C33900A66A8;
class Class_3_1DD13CDB3C0E488B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_153_METHOD_3_47BA313143631830_OFFSET UNITYSDK_OFFSET(0x17AABC90)
#define CLASS_3_27518451A20BB161_153_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AAB9F0)
#define CLASS_3_27518451A20BB161_153__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAB9C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_153_TypeDefinitionIndex = 52440;

class Class_3_27518451A20BB161_153 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1DD13CDB3C0E488B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1DD13CDB3C0E488B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1DD13CDB3C0E488B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_75570C33900A66A8* Method_3_47BA313143631830()
	{
		return ((::Class_1_75570C33900A66A8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_153_METHOD_3_47BA313143631830_OFFSET))(this);
	}
};
