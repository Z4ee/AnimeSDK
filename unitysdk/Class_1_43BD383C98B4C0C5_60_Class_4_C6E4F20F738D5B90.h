#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_60_Class_3_CC37A3D6A489B272.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C6E4F20F738D5B90_METHOD_4_AD76505A8645F54B_OFFSET UNITYSDK_OFFSET(0x1555AB80)
#define CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C6E4F20F738D5B90__CTOR_OFFSET UNITYSDK_OFFSET(0x1555AB70)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_60_Class_4_C6E4F20F738D5B90_TypeDefinitionIndex = 44765;

class Class_1_43BD383C98B4C0C5_60_Class_4_C6E4F20F738D5B90 : public ::Class_1_43BD383C98B4C0C5_60_Class_3_CC37A3D6A489B272
{
public:
	::MoleMole::Config::MonsterFunctionType Field_4_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2, ::MoleMole::Config::MonsterFunctionType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::MoleMole::Config::MonsterFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C6E4F20F738D5B90__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_AD76505A8645F54B(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C6E4F20F738D5B90_METHOD_4_AD76505A8645F54B_OFFSET))(this, a1);
	}
};
