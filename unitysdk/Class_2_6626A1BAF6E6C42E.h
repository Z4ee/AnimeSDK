#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Guid.h"

class Class_1_F3CAAE7E7C7111CC;

#define CLASS_2_6626A1BAF6E6C42E_GET_ADDINGCONCRETE_OFFSET UNITYSDK_OFFSET(0x1E5C5EF0)
#define CLASS_2_6626A1BAF6E6C42E_GET_CONFLICTGUID_OFFSET UNITYSDK_OFFSET(0x1E5C5EE0)
#define CLASS_2_6626A1BAF6E6C42E_GET_EXISTINGCONCRETE_OFFSET UNITYSDK_OFFSET(0x1E5C5F00)
#define CLASS_2_6626A1BAF6E6C42E__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4FB0)

inline static constexpr unsigned int Class_2_6626A1BAF6E6C42E_TypeDefinitionIndex = 42494;

class Class_2_6626A1BAF6E6C42E : public ::System::Exception
{
public:
	::Class_1_F3CAAE7E7C7111CC* _ExistingConcrete_k__BackingField; // 0x88
	::Class_1_F3CAAE7E7C7111CC* _AddingConcrete_k__BackingField; // 0x90
	::System::Guid _ConflictGuid_k__BackingField; // 0x98

	::System::Void _ctor(::System::Guid a1, ::Class_1_F3CAAE7E7C7111CC* a2, ::Class_1_F3CAAE7E7C7111CC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Guid, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_F3CAAE7E7C7111CC*))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Guid get_ConflictGuid()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E_GET_CONFLICTGUID_OFFSET))(this);
	}

	::Class_1_F3CAAE7E7C7111CC* get_AddingConcrete()
	{
		return ((::Class_1_F3CAAE7E7C7111CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E_GET_ADDINGCONCRETE_OFFSET))(this);
	}

	::Class_1_F3CAAE7E7C7111CC* get_ExistingConcrete()
	{
		return ((::Class_1_F3CAAE7E7C7111CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6626A1BAF6E6C42E_GET_EXISTINGCONCRETE_OFFSET))(this);
	}
};
