#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_820267F94C5D0AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x794C10)

inline static constexpr unsigned int Struct_2_820267F94C5D0AA4_TypeDefinitionIndex = 83972;

struct alignas(8) Struct_2_820267F94C5D0AA4
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::String* Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Field_2_4; // 0x30
	::MoleMole::Config::CampType Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x3C
	::System::Int32 Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x44
	::System::Int32 Field_2_9; // 0x48

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* a4, ::MoleMole::Config::CampType a5, ::System::Boolean a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*, ::MoleMole::Config::CampType, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_820267F94C5D0AA4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
};
