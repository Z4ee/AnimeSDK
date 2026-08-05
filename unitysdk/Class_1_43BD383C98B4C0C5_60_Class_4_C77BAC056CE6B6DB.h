#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_60_Class_3_CC37A3D6A489B272.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C77BAC056CE6B6DB_METHOD_4_5884C376DC4576C6_OFFSET UNITYSDK_OFFSET(0x17F07C70)
#define CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C77BAC056CE6B6DB__CTOR_OFFSET UNITYSDK_OFFSET(0x17F07C60)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_60_Class_4_C77BAC056CE6B6DB_TypeDefinitionIndex = 44775;

class Class_1_43BD383C98B4C0C5_60_Class_4_C77BAC056CE6B6DB : public ::Class_1_43BD383C98B4C0C5_60_Class_3_CC37A3D6A489B272
{
public:
	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C77BAC056CE6B6DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5884C376DC4576C6(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_60_CLASS_4_C77BAC056CE6B6DB_METHOD_4_5884C376DC4576C6_OFFSET))(this, a1);
	}
};
