#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CEBAC46919FDDBDD.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }

#define STRUCT_2_E81C588ED0B50078_METHOD_2_572A79685E39E7B2_OFFSET UNITYSDK_OFFSET(0x826FC0)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_69ED65BC9974970A_OFFSET UNITYSDK_OFFSET(0x826FD0)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x622AD0)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x41FD70)
#define STRUCT_2_E81C588ED0B50078_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x826FA0)
#define STRUCT_2_E81C588ED0B50078__CTOR_OFFSET UNITYSDK_OFFSET(0x33DF30)

inline static constexpr unsigned int Struct_2_E81C588ED0B50078_TypeDefinitionIndex = 68936;

struct alignas(8) Struct_2_E81C588ED0B50078
{
	::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_572A79685E39E7B2(::Enum_3_CEBAC46919FDDBDD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CEBAC46919FDDBDD))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_572A79685E39E7B2_OFFSET))(this, a1);
	}

	/*
	::MoleMole::EntityHandle Method_2_69ED65BC9974970A()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_69ED65BC9974970A_OFFSET))(this);
	}
	*/

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E81C588ED0B50078_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
