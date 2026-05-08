#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }

#define STRUCT_2_E81C588ED0B50078_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x6ED7B0)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_69ED65BC9974970A_OFFSET UNITYSDK_OFFSET(0x6ED7C0)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x5783A0)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3AB220)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x6ED7F0)
#define STRUCT_2_E81C588ED0B50078__CTOR_OFFSET UNITYSDK_OFFSET(0x3493D0)

inline static constexpr unsigned int Struct_2_E81C588ED0B50078_TypeDefinitionIndex = 51523;

struct alignas(8) Struct_2_E81C588ED0B50078
{
	::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_68805403250CC013_OFFSET))(this);
	}

	/*
	::MoleMole::EntityHandle Method_2_69ED65BC9974970A()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_69ED65BC9974970A_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
