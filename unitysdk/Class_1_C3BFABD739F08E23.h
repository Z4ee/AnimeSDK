#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_16;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace RPG::GameCore { class UIImageNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C3BFABD739F08E23__CTOR_OFFSET UNITYSDK_OFFSET(0x87722E0)

inline static constexpr unsigned int Class_1_C3BFABD739F08E23_TypeDefinitionIndex = 38482;

class Class_1_C3BFABD739F08E23 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::UIImageNode*>* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_16*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3BFABD739F08E23__CTOR_OFFSET))(this);
	}
};
