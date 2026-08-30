#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_43B0AF86156D9901;
namespace RPG::GameCore { class RandomSelectDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CB435857F142D481_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3F72D0)
#define CLASS_3_CB435857F142D481__CTOR_OFFSET UNITYSDK_OFFSET(0xF3F71C0)

inline static constexpr unsigned int Class_3_CB435857F142D481_TypeDefinitionIndex = 55476;

class Class_3_CB435857F142D481 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectDynamicValue*>
{
public:
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x28
	::RPG::GameCore::StringHash BCFCHFBDIHE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_CB435857F142D481__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB435857F142D481_ONTASKBEGIN_OFFSET))(this);
	}
};
