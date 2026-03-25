#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyShowEffectResult; }

#define CLASS_2_E6EAF178935910EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A29AF0)
#define CLASS_2_E6EAF178935910EB_METHOD_2_4FD818057BF6A897_OFFSET UNITYSDK_OFFSET(0x10A29CE0)
#define CLASS_2_E6EAF178935910EB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A29E40)
#define CLASS_2_E6EAF178935910EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A29B30)
#define CLASS_2_E6EAF178935910EB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A29D90)
#define CLASS_2_E6EAF178935910EB_TICK_OFFSET UNITYSDK_OFFSET(0x10A29DE0)
#define CLASS_2_E6EAF178935910EB__CTOR_OFFSET UNITYSDK_OFFSET(0x10A29AE0)

inline static constexpr unsigned int Class_2_E6EAF178935910EB_TypeDefinitionIndex = 43261;

class Class_2_E6EAF178935910EB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TrainPartyShowEffectResult* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyShowEffectResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyShowEffectResult*))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FD818057BF6A897()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB_METHOD_2_4FD818057BF6A897_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EAF178935910EB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
