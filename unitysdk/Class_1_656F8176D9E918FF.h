#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define CLASS_1_656F8176D9E918FF_CLONE_OFFSET UNITYSDK_OFFSET(0x152EC190)
#define CLASS_1_656F8176D9E918FF_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x152EC110)
#define CLASS_1_656F8176D9E918FF_ISVALID_OFFSET UNITYSDK_OFFSET(0x152EC150)
#define CLASS_1_656F8176D9E918FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x152EC1D0)
#define CLASS_1_656F8176D9E918FF__CTOR_OFFSET UNITYSDK_OFFSET(0x152EC140)

inline static constexpr unsigned int Class_1_656F8176D9E918FF_TypeDefinitionIndex = 71389;

class Class_1_656F8176D9E918FF : public ::System::Object
{
public:
	static ::Class_1_656F8176D9E918FF** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_656F8176D9E918FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_656F8176D9E918FF_TypeDefinitionIndex)->GetStaticField(0x56B90);
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
