#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_97_Class_3_CC37A3D6A489B272.h"
#include "unitysdk/MoleMole/AvatarDynamicCheckType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_97_CLASS_4_B57BA2D984873448_METHOD_4_BE4409905C97487F_OFFSET UNITYSDK_OFFSET(0x12D77700)
#define CLASS_1_43BD383C98B4C0C5_97_CLASS_4_B57BA2D984873448__CTOR_OFFSET UNITYSDK_OFFSET(0x12D776F0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_97_Class_4_B57BA2D984873448_TypeDefinitionIndex = 57798;

class Class_1_43BD383C98B4C0C5_97_Class_4_B57BA2D984873448 : public ::Class_1_43BD383C98B4C0C5_97_Class_3_CC37A3D6A489B272
{
public:
	::MoleMole::AvatarDynamicCheckType Field_4_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2, ::MoleMole::AvatarDynamicCheckType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::MoleMole::AvatarDynamicCheckType))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_97_CLASS_4_B57BA2D984873448__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_BE4409905C97487F(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_97_CLASS_4_B57BA2D984873448_METHOD_4_BE4409905C97487F_OFFSET))(this, a1);
	}
};
