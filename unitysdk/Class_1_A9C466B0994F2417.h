#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3423680D9D7EF5F0;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_1_A9C466B0994F2417_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1365A910)
#define CLASS_1_A9C466B0994F2417_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x1365A930)
#define CLASS_1_A9C466B0994F2417_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x1365A8C0)
#define CLASS_1_A9C466B0994F2417_SET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1365A920)
#define CLASS_1_A9C466B0994F2417__CTOR_OFFSET UNITYSDK_OFFSET(0x1365A7F0)

inline static constexpr unsigned int Class_1_A9C466B0994F2417_TypeDefinitionIndex = 58112;

class Class_1_A9C466B0994F2417 : public ::System::Object
{
public:
	::Class_1_3423680D9D7EF5F0* Field_1_0; // 0x10
	::RPG::GameCore::RuntimeGroupInfo* _RuntimeGroupInfo_k__BackingField; // 0x18
	::RPG::Client::MapDef* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_RuntimeGroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_GET_RUNTIMEGROUPINFO_OFFSET))(this);
	}

	::System::Void set_RuntimeGroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_SET_RUNTIMEGROUPINFO_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_METHOD_1_23B573F7FD360F67_OFFSET))(this);
	}
};
