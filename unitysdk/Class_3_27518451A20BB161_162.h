#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_75570C33900A66A8;
class Class_3_DC72D69AE0D0B635;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_162_METHOD_3_47BA313143631830_OFFSET UNITYSDK_OFFSET(0x17ED2C20)
#define CLASS_3_27518451A20BB161_162_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ED2980)
#define CLASS_3_27518451A20BB161_162__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED2950)

inline static constexpr unsigned int Class_3_27518451A20BB161_162_TypeDefinitionIndex = 55136;

class Class_3_27518451A20BB161_162 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DC72D69AE0D0B635*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DC72D69AE0D0B635* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DC72D69AE0D0B635*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_162__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_162_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_75570C33900A66A8* Method_3_47BA313143631830()
	{
		return ((::Class_1_75570C33900A66A8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_162_METHOD_3_47BA313143631830_OFFSET))(this);
	}
};
