#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_75570C33900A66A8;
class Class_3_DC72D69AE0D0B635;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_168_METHOD_3_47BA313143631830_OFFSET UNITYSDK_OFFSET(0xB152B10)
#define CLASS_3_27518451A20BB161_168_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB152870)
#define CLASS_3_27518451A20BB161_168__CTOR_OFFSET UNITYSDK_OFFSET(0xB152840)

inline static constexpr unsigned int Class_3_27518451A20BB161_168_TypeDefinitionIndex = 54929;

class Class_3_27518451A20BB161_168 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DC72D69AE0D0B635*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DC72D69AE0D0B635* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DC72D69AE0D0B635*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_168__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_168_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_75570C33900A66A8* Method_3_47BA313143631830()
	{
		return ((::Class_1_75570C33900A66A8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_168_METHOD_3_47BA313143631830_OFFSET))(this);
	}
};
