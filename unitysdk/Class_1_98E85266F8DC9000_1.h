#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define CLASS_1_98E85266F8DC9000_1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x152C78F0)
#define CLASS_1_98E85266F8DC9000_1_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x152C78B0)
#define CLASS_1_98E85266F8DC9000_1_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x152C7940)
#define CLASS_1_98E85266F8DC9000_1_METHOD_1_90B5F9E517BF203E_OFFSET UNITYSDK_OFFSET(0x152C74D0)
#define CLASS_1_98E85266F8DC9000_1_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x152C7950)
#define CLASS_1_98E85266F8DC9000_1__CTOR_OFFSET UNITYSDK_OFFSET(0x152C74A0)

inline static constexpr unsigned int Class_1_98E85266F8DC9000_1_TypeDefinitionIndex = 65553;

class Class_1_98E85266F8DC9000_1 : public ::System::Object
{
public:
	::RPG::Client::GridFightTrait* PEEDCBADBHJ; // 0x10
	::System::UInt32 _RoleID_k__BackingField; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_90B5F9E517BF203E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_METHOD_1_90B5F9E517BF203E_OFFSET))(this);
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

	::System::Void set_RoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_1_SET_ROLEID_OFFSET))(this, a1);
	}
};
