#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ADE34076259CCCF7_1;
namespace RPG::Client { class ArchiveData; }

#define CLASS_1_89120A467F7A010D_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x164BD300)
#define CLASS_1_89120A467F7A010D_METHOD_1_CB3646FA399CB619_OFFSET UNITYSDK_OFFSET(0x164BD1D0)
#define CLASS_1_89120A467F7A010D_SET_ISDONE_OFFSET UNITYSDK_OFFSET(0x164BD310)
#define CLASS_1_89120A467F7A010D__CTOR_OFFSET UNITYSDK_OFFSET(0x164BD1C0)

inline static constexpr unsigned int Class_1_89120A467F7A010D_TypeDefinitionIndex = 62505;

class Class_1_89120A467F7A010D : public ::System::Object
{
public:
	::Class_1_ADE34076259CCCF7_1* OHNLDHKAMEE; // 0x10
	::System::Boolean _IsDone_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_ADE34076259CCCF7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADE34076259CCCF7_1*))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB3646FA399CB619(::RPG::Client::ArchiveData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ArchiveData*))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_METHOD_1_CB3646FA399CB619_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_GET_ISDONE_OFFSET))(this);
	}

	::System::Void set_IsDone(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_SET_ISDONE_OFFSET))(this, a1);
	}
};
