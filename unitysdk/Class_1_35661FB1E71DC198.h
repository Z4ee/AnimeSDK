#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_35661FB1E71DC198_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1068A090)
#define CLASS_1_35661FB1E71DC198_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1068A050)
#define CLASS_1_35661FB1E71DC198_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1068A070)
#define CLASS_1_35661FB1E71DC198_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1068A030)
#define CLASS_1_35661FB1E71DC198_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1068A0A0)
#define CLASS_1_35661FB1E71DC198_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1068A060)
#define CLASS_1_35661FB1E71DC198_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1068A080)
#define CLASS_1_35661FB1E71DC198_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1068A040)
#define CLASS_1_35661FB1E71DC198__CTOR_OFFSET UNITYSDK_OFFSET(0x1068A0B0)

inline static constexpr unsigned int Class_1_35661FB1E71DC198_TypeDefinitionIndex = 51067;

class Class_1_35661FB1E71DC198 : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14
	::System::Boolean _IsSelf_k__BackingField; // 0x18
	::System::UInt32 _EntityID_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsSelf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_GET_ISSELF_OFFSET))(this);
	}

	::System::Void set_IsSelf(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_SET_ISSELF_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_SET_INSTANCEID_OFFSET))(this, value);
	}

	::System::UInt32 get_EntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_GET_ENTITYID_OFFSET))(this);
	}

	::System::Void set_EntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35661FB1E71DC198_SET_ENTITYID_OFFSET))(this, value);
	}
};
