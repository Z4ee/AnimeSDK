#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3423680D9D7EF5F0;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_1_A9C466B0994F2417_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x128A6650)
#define CLASS_1_A9C466B0994F2417_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x128A6670)
#define CLASS_1_A9C466B0994F2417_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x128A6600)
#define CLASS_1_A9C466B0994F2417_SET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x128A6660)
#define CLASS_1_A9C466B0994F2417__CTOR_OFFSET UNITYSDK_OFFSET(0x128A6530)

inline static constexpr unsigned int Class_1_A9C466B0994F2417_TypeDefinitionIndex = 57322;

class Class_1_A9C466B0994F2417 : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_1; // 0x10
	::RPG::GameCore::RuntimeGroupInfo* _RuntimeGroupInfo_k__BackingField; // 0x18
	::Class_1_3423680D9D7EF5F0* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_RuntimeGroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_GET_RUNTIMEGROUPINFO_OFFSET))(this);
	}

	::System::Void set_RuntimeGroupInfo(::RPG::GameCore::RuntimeGroupInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_SET_RUNTIMEGROUPINFO_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_METHOD_1_23B573F7FD360F67_OFFSET))(this);
	}
};
