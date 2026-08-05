#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FDFE69FE7B72463B;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_1D199A94CC6F8475_OFFSET UNITYSDK_OFFSET(0x87CF50)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x87CE70)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_36D0A72CA6457C76_OFFSET UNITYSDK_OFFSET(0x87CEF0)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_FDD74C4056250941_OFFSET UNITYSDK_OFFSET(0x87CE50)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x351680)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_TypeDefinitionIndex = 50134;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE
{
	::System::Threading::CancellationToken Field_2_1; // 0x10
	::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B Field_2_0; // 0x18

	::System::Void _ctor(::System::Threading::CancellationToken a1, ::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Method_2_FDD74C4056250941(::Class_2_FDFE69FE7B72463B* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Threading::CancellationTokenRegistration>(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_FDD74C4056250941_OFFSET))(this, a1, a2);
	}
	*/

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_36D0A72CA6457C76(::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE_Enum_3_8C6C5D327121609B))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_36D0A72CA6457C76_OFFSET))(this, a1);
	}

	/*
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Method_2_1D199A94CC6F8475(::UnityEngine::Animation* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Threading::CancellationTokenRegistration>(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_864D927135D66FAE_METHOD_2_1D199A94CC6F8475_OFFSET))(this, a1, a2);
	}
	*/
};
