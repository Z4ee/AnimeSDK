#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SetDynamicValueByCharacterCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_02ECE597CF180D14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15474B40)
#define CLASS_3_02ECE597CF180D14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15474710)
#define CLASS_3_02ECE597CF180D14__CTOR_OFFSET UNITYSDK_OFFSET(0x154745A0)

inline static constexpr unsigned int Class_3_02ECE597CF180D14_TypeDefinitionIndex = 55612;

class Class_3_02ECE597CF180D14 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByCharacterCount*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCharacterCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCharacterCount*))((::PBYTE)hIl2Cpp + CLASS_3_02ECE597CF180D14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02ECE597CF180D14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02ECE597CF180D14_DISPOSE_OFFSET))(this);
	}
};
