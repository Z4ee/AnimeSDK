#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_247;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B03C0CCB751F18C4_CLASS_1_2BE547830081A142_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x130F2C80)
#define CLASS_2_B03C0CCB751F18C4_CLASS_1_2BE547830081A142__CTOR_OFFSET UNITYSDK_OFFSET(0x130F2C10)

inline static constexpr unsigned int Class_2_B03C0CCB751F18C4_Class_1_2BE547830081A142_TypeDefinitionIndex = 81125;

class Class_2_B03C0CCB751F18C4_Class_1_2BE547830081A142 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_247*>* Field_1_9; // 0x10
	::System::Single Field_1_6; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Boolean Field_1_7; // 0x20
	::Enum_3_337A0D7142819EB2 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::System::Int32 Field_1_8; // 0x38
	::UnityEngine::Vector3 Field_1_3; // 0x3C
	::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> Field_1_2; // 0x48

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_247*>* a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_247*>*))((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4_CLASS_1_2BE547830081A142__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4_CLASS_1_2BE547830081A142_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}
};
