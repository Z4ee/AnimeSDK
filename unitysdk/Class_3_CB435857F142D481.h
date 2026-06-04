#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class RandomSelectDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CB435857F142D481_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE484C90)
#define CLASS_3_CB435857F142D481__CTOR_OFFSET UNITYSDK_OFFSET(0xE484B80)

inline static constexpr unsigned int Class_3_CB435857F142D481_TypeDefinitionIndex = 51630;

class Class_3_CB435857F142D481 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectDynamicValue*>
{
public:
	::Class_1_827373C1CEDFE355* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_CB435857F142D481__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB435857F142D481_ONTASKBEGIN_OFFSET))(this);
	}
};
