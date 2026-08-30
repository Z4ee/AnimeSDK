#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveMapPoseSwitcher; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_24718A2855A85611_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AB60A0)
#define CLASS_2_24718A2855A85611_METHOD_2_E9D9F09754C14D8E_OFFSET UNITYSDK_OFFSET(0x19AB6380)
#define CLASS_2_24718A2855A85611_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AB61D0)
#define CLASS_2_24718A2855A85611_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19AB6120)
#define CLASS_2_24718A2855A85611_TICK_OFFSET UNITYSDK_OFFSET(0x19AB6170)
#define CLASS_2_24718A2855A85611__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB6080)

inline static constexpr unsigned int Class_2_24718A2855A85611_TypeDefinitionIndex = 53272;

class Class_2_24718A2855A85611 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::RemoveMapPoseSwitcher* IGHAHBNLIJA; // 0x20
	::System::UInt32 BCAGKLKAFCF; // 0x28
	::System::UInt32 GEFEOLMLPJN; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveMapPoseSwitcher* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_24718A2855A85611__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24718A2855A85611_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24718A2855A85611_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24718A2855A85611_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24718A2855A85611_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_E9D9F09754C14D8E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24718A2855A85611_METHOD_2_E9D9F09754C14D8E_OFFSET))(this, a1, a2);
	}
};
