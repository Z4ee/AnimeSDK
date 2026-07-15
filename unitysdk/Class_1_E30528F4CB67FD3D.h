#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3423680D9D7EF5F0;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define CLASS_1_E30528F4CB67FD3D_GET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x17F20820)
#define CLASS_1_E30528F4CB67FD3D_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x17F20840)
#define CLASS_1_E30528F4CB67FD3D_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x17F207D0)
#define CLASS_1_E30528F4CB67FD3D_SET_RUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x17F20830)
#define CLASS_1_E30528F4CB67FD3D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F20790)

inline static constexpr unsigned int Class_1_E30528F4CB67FD3D_TypeDefinitionIndex = 59378;

class Class_1_E30528F4CB67FD3D : public ::System::Object
{
public:
	::RPG::GameCore::RuntimeGroupInfo* _RuntimeGroupInfo_k__BackingField; // 0x10
	::Class_1_3423680D9D7EF5F0* Field_1_1; // 0x18
	::RPG::Client::MapDef* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E30528F4CB67FD3D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30528F4CB67FD3D_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* get_RuntimeGroupInfo()
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30528F4CB67FD3D_GET_RUNTIMEGROUPINFO_OFFSET))(this);
	}

	::System::Void set_RuntimeGroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E30528F4CB67FD3D_SET_RUNTIMEGROUPINFO_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30528F4CB67FD3D_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}
};
