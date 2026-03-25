#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define CLASS_1_98E85266F8DC9000_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x10383FE0)
#define CLASS_1_98E85266F8DC9000_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10383FD0)
#define CLASS_1_98E85266F8DC9000_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x10383FC0)
#define CLASS_1_98E85266F8DC9000_METHOD_1_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x10383CD0)
#define CLASS_1_98E85266F8DC9000_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x10383FF0)
#define CLASS_1_98E85266F8DC9000__CTOR_OFFSET UNITYSDK_OFFSET(0x10383C90)

inline static constexpr unsigned int Class_1_98E85266F8DC9000_TypeDefinitionIndex = 53166;

class Class_1_98E85266F8DC9000 : public ::System::Object
{
public:
	::RPG::Client::GridFightTrait* Field_1_0; // 0x10
	::System::UInt32 _EquipID_k__BackingField; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_METHOD_1_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_GET_ISSHOW_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_GET_ISACTIVE_OFFSET))(this);
	}

	::System::UInt32 get_EquipID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_GET_EQUIPID_OFFSET))(this);
	}

	::System::Void set_EquipID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_SET_EQUIPID_OFFSET))(this, value);
	}
};
