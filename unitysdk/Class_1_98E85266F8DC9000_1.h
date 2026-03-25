#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define CLASS_1_98E85266F8DC9000_1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x87D11D0)
#define CLASS_1_98E85266F8DC9000_1_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x87D11C0)
#define CLASS_1_98E85266F8DC9000_1_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x87D11E0)
#define CLASS_1_98E85266F8DC9000_1_METHOD_1_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x87D0ED0)
#define CLASS_1_98E85266F8DC9000_1_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x87D11F0)
#define CLASS_1_98E85266F8DC9000_1__CTOR_OFFSET UNITYSDK_OFFSET(0x87D0E90)

inline static constexpr unsigned int Class_1_98E85266F8DC9000_1_TypeDefinitionIndex = 53168;

class Class_1_98E85266F8DC9000_1 : public ::System::Object
{
public:
	::RPG::Client::GridFightTrait* Field_1_0; // 0x10
	::System::UInt32 _RoleID_k__BackingField; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_METHOD_1_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_GET_ISSHOW_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_GET_ISACTIVE_OFFSET))(this);
	}

	::System::UInt32 get_RoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_GET_ROLEID_OFFSET))(this);
	}

	::System::Void set_RoleID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_SET_ROLEID_OFFSET))(this, value);
	}
};
