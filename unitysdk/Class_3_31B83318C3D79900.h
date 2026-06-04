#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WriteFsvToDynamicValue; }

#define CLASS_3_31B83318C3D79900_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13709B30)
#define CLASS_3_31B83318C3D79900__CTOR_OFFSET UNITYSDK_OFFSET(0x13709B00)

inline static constexpr unsigned int Class_3_31B83318C3D79900_TypeDefinitionIndex = 49994;

class Class_3_31B83318C3D79900 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WriteFsvToDynamicValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WriteFsvToDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WriteFsvToDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_31B83318C3D79900__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31B83318C3D79900_ONTASKBEGIN_OFFSET))(this);
	}
};
