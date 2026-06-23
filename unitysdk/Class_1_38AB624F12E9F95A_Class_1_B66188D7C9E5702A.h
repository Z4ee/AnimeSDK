#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_C5768D3594FF9207;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_38AB624F12E9F95A_CLASS_1_B66188D7C9E5702A__CTOR_OFFSET UNITYSDK_OFFSET(0x17955210)

inline static constexpr unsigned int Class_1_38AB624F12E9F95A_Class_1_B66188D7C9E5702A_TypeDefinitionIndex = 56351;

class Class_1_38AB624F12E9F95A_Class_1_B66188D7C9E5702A : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* Field_1_3; // 0x18
	::Class_1_C5768D3594FF9207* Field_1_0; // 0x20
	::System::Nullable_1<::System::Boolean> Field_1_5; // 0x28
	::System::Boolean Field_1_1; // 0x2A
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38AB624F12E9F95A_CLASS_1_B66188D7C9E5702A__CTOR_OFFSET))(this);
	}
};
