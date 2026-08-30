#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3423680D9D7EF5F0;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_1_A9C466B0994F2417_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1A0378F0)
#define CLASS_1_A9C466B0994F2417_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x1A037910)
#define CLASS_1_A9C466B0994F2417_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x1A0378A0)
#define CLASS_1_A9C466B0994F2417_SET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1A037900)
#define CLASS_1_A9C466B0994F2417__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0377D0)

inline static constexpr unsigned int Class_1_A9C466B0994F2417_TypeDefinitionIndex = 62213;

class Class_1_A9C466B0994F2417 : public ::System::Object
{
public:
	::RPG::GameCore::RuntimeGroupInfo* _RuntimeGroupInfo_k__BackingField; // 0x10
	::RPG::Client::MapDef* JMOAJFAHMPO; // 0x18
	::Class_1_3423680D9D7EF5F0* JCABNKODCOF; // 0x20

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

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C466B0994F2417_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}
};
