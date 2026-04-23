#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ADE34076259CCCF7_1;
namespace RPG::Client { class ArchiveData; }

#define CLASS_1_5D5D871C878FD105_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x12401DA0)
#define CLASS_1_5D5D871C878FD105_METHOD_1_CB3646FA399CB619_OFFSET UNITYSDK_OFFSET(0x12401CC0)
#define CLASS_1_5D5D871C878FD105_SET_ISDONE_OFFSET UNITYSDK_OFFSET(0x12401DB0)
#define CLASS_1_5D5D871C878FD105__CTOR_OFFSET UNITYSDK_OFFSET(0x12401CB0)

inline static constexpr unsigned int Class_1_5D5D871C878FD105_TypeDefinitionIndex = 57592;

class Class_1_5D5D871C878FD105 : public ::System::Object
{
public:
	::Class_1_ADE34076259CCCF7_1* Field_1_1; // 0x10
	::System::Boolean _IsDone_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_ADE34076259CCCF7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADE34076259CCCF7_1*))((::PBYTE)hIl2Cpp + CLASS_1_5D5D871C878FD105__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB3646FA399CB619(::RPG::Client::ArchiveData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ArchiveData*))((::PBYTE)hIl2Cpp + CLASS_1_5D5D871C878FD105_METHOD_1_CB3646FA399CB619_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D5D871C878FD105_GET_ISDONE_OFFSET))(this);
	}

	::System::Void set_IsDone(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5D5D871C878FD105_SET_ISDONE_OFFSET))(this, value);
	}
};
