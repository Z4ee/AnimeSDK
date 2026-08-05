#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_E21DA91F1EC19317;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_20E58F76D44AFEF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1199D6A0)

inline static constexpr unsigned int Class_1_20E58F76D44AFEF6_TypeDefinitionIndex = 61862;

class Class_1_20E58F76D44AFEF6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FightModeType, ::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*>* Field_1_11; // 0x10
	::System::String* Field_1_8; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Field_1_10; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_E21DA91F1EC19317*>* Field_1_1; // 0x30
	::System::Single Field_1_7; // 0x38
	::System::Nullable_1<::System::Single> Field_1_3; // 0x3C
	::System::Single Field_1_14; // 0x44
	::System::Boolean Field_1_6; // 0x48
	::System::Single Field_1_5; // 0x4C
	::System::Single Field_1_9; // 0x50
	::System::Single Field_1_0; // 0x54
	::System::Single Field_1_4; // 0x58
	::System::Single Field_1_15; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20E58F76D44AFEF6__CTOR_OFFSET))(this);
	}
};
