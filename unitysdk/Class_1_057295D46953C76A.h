#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_E7E667A0866D3C25;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_057295D46953C76A__CTOR_OFFSET UNITYSDK_OFFSET(0x19C80D20)

inline static constexpr unsigned int Class_1_057295D46953C76A_TypeDefinitionIndex = 41157;

class Class_1_057295D46953C76A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E7E667A0866D3C25*>* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_057295D46953C76A__CTOR_OFFSET))(this);
	}
};
