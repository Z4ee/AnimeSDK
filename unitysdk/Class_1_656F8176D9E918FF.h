#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define CLASS_1_656F8176D9E918FF_CLONE_OFFSET UNITYSDK_OFFSET(0x165C5D20)
#define CLASS_1_656F8176D9E918FF_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x165C5CA0)
#define CLASS_1_656F8176D9E918FF_ISVALID_OFFSET UNITYSDK_OFFSET(0x165C5CE0)
#define CLASS_1_656F8176D9E918FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C5D60)
#define CLASS_1_656F8176D9E918FF__CTOR_OFFSET UNITYSDK_OFFSET(0x165C5CD0)

inline static constexpr unsigned int Class_1_656F8176D9E918FF_TypeDefinitionIndex = 74695;

class Class_1_656F8176D9E918FF : public ::System::Object
{
public:
	static ::Class_1_656F8176D9E918FF** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_656F8176D9E918FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_656F8176D9E918FF_TypeDefinitionIndex)->GetStaticField(0x10C30);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF__CCTOR_OFFSET))();
	}

	static ::Class_1_656F8176D9E918FF* get_Instance()
	{
		return ((::Class_1_656F8176D9E918FF*(*)())((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF_GET_INSTANCE_OFFSET))();
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF_ISVALID_OFFSET))(this);
	}

	::RPG::Client::Billboard::IBillboardTypeData* Clone()
	{
		return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF_CLONE_OFFSET))(this);
	}
};
