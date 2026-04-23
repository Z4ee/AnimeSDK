#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Guid.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_2_6626A1BAF6E6C42E_GET_ADDINGCONCRETE_OFFSET UNITYSDK_OFFSET(0x19DB6C90)
#define CLASS_2_6626A1BAF6E6C42E_GET_CONFLICTGUID_OFFSET UNITYSDK_OFFSET(0x19DB6C80)
#define CLASS_2_6626A1BAF6E6C42E_GET_EXISTINGCONCRETE_OFFSET UNITYSDK_OFFSET(0x19DB6CA0)
#define CLASS_2_6626A1BAF6E6C42E__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB6B80)

inline static constexpr unsigned int Class_2_6626A1BAF6E6C42E_TypeDefinitionIndex = 39857;

class Class_2_6626A1BAF6E6C42E : public ::System::Exception
{
public:
	::Class_1_60B5E5A0CB5606E4* _AddingConcrete_k__BackingField; // 0x88
	::Class_1_60B5E5A0CB5606E4* _ExistingConcrete_k__BackingField; // 0x90
	::System::Guid _ConflictGuid_k__BackingField; // 0x98

	::System::Void _ctor(::System::Guid a1, ::Class_1_60B5E5A0CB5606E4* a2, ::Class_1_60B5E5A0CB5606E4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Guid, ::Class_1_60B5E5A0CB5606E4*, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Guid get_ConflictGuid()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E_GET_CONFLICTGUID_OFFSET))(this);
	}

	::Class_1_60B5E5A0CB5606E4* get_AddingConcrete()
	{
		return ((::Class_1_60B5E5A0CB5606E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E_GET_ADDINGCONCRETE_OFFSET))(this);
	}

	::Class_1_60B5E5A0CB5606E4* get_ExistingConcrete()
	{
		return ((::Class_1_60B5E5A0CB5606E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E_GET_EXISTINGCONCRETE_OFFSET))(this);
	}
};
