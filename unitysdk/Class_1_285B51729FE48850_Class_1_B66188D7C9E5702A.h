#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_C5768D3594FF9207;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_285B51729FE48850_CLASS_1_B66188D7C9E5702A__CTOR_OFFSET UNITYSDK_OFFSET(0x1774EB50)

inline static constexpr unsigned int Class_1_285B51729FE48850_Class_1_B66188D7C9E5702A_TypeDefinitionIndex = 76122;

class Class_1_285B51729FE48850_Class_1_B66188D7C9E5702A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* Field_1_5; // 0x10
	::Class_1_C5768D3594FF9207* Field_1_0; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Nullable_1<::System::Boolean> Field_1_11; // 0x28
	::System::Boolean Field_1_7; // 0x2A
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_285B51729FE48850_CLASS_1_B66188D7C9E5702A__CTOR_OFFSET))(this);
	}
};
