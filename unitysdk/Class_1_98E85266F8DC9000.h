#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define CLASS_1_98E85266F8DC9000_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xBC73FB0)
#define CLASS_1_98E85266F8DC9000_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBC73F60)
#define CLASS_1_98E85266F8DC9000_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xBC73F20)
#define CLASS_1_98E85266F8DC9000_METHOD_1_90B5F9E517BF203E_OFFSET UNITYSDK_OFFSET(0xBC73B40)
#define CLASS_1_98E85266F8DC9000_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xBC73FC0)
#define CLASS_1_98E85266F8DC9000__CTOR_OFFSET UNITYSDK_OFFSET(0xBC73B10)

inline static constexpr unsigned int Class_1_98E85266F8DC9000_TypeDefinitionIndex = 65551;

class Class_1_98E85266F8DC9000 : public ::System::Object
{
public:
	::RPG::Client::GridFightTrait* PEEDCBADBHJ; // 0x10
	::System::UInt32 _EquipID_k__BackingField; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_90B5F9E517BF203E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_METHOD_1_90B5F9E517BF203E_OFFSET))(this);
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

	::System::Void set_EquipID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000_SET_EQUIPID_OFFSET))(this, a1);
	}
};
