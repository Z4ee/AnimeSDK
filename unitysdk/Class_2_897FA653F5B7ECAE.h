#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipWaitNavigationArrive; }
namespace System { class Object; }

#define CLASS_2_897FA653F5B7ECAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE42D80)
#define CLASS_2_897FA653F5B7ECAE_METHOD_2_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0xDE432D0)
#define CLASS_2_897FA653F5B7ECAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE42F40)
#define CLASS_2_897FA653F5B7ECAE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE42E60)
#define CLASS_2_897FA653F5B7ECAE_TICK_OFFSET UNITYSDK_OFFSET(0xDE431F0)
#define CLASS_2_897FA653F5B7ECAE__CTOR_OFFSET UNITYSDK_OFFSET(0xDE42D00)

inline static constexpr unsigned int Class_2_897FA653F5B7ECAE_TypeDefinitionIndex = 43275;

class Class_2_897FA653F5B7ECAE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TravelShipWaitNavigationArrive* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_897FA653F5B7ECAE_METHOD_2_5934C7451F9426C2_OFFSET))(this, a1);
	}
};
