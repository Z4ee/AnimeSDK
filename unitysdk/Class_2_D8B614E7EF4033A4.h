#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_816D4E2238E8C24A.h"

namespace MoleMole { class UIInLevelCardOptionsDialogPopWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigInteractEntry_SelectCard; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D8B614E7EF4033A4_METHOD_2_84671FCE9274DA62_OFFSET UNITYSDK_OFFSET(0x165D9D30)
#define CLASS_2_D8B614E7EF4033A4_METHOD_2_B00B669953BF94F4_OFFSET UNITYSDK_OFFSET(0x165DA020)
#define CLASS_2_D8B614E7EF4033A4_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x165DA630)
#define CLASS_2_D8B614E7EF4033A4__CTOR_OFFSET UNITYSDK_OFFSET(0x165DA680)

inline static constexpr unsigned int Class_2_D8B614E7EF4033A4_TypeDefinitionIndex = 59121;

class Class_2_D8B614E7EF4033A4 : public ::Class_1_816D4E2238E8C24A
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_7 = 0xFFFFFFFF; // 0x0
	// static const ::System::Int32 Field_2_6 = 0xFFFFFFFE; // 0x0
	::MoleMole::Config::ConfigInteractEntry_SelectCard* Field_2_5; // 0x50
	::MoleMole::UIInLevelCardOptionsDialogPopWindowController* Field_2_4; // 0x58
	::System::Boolean Field_2_11; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8B614E7EF4033A4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_84671FCE9274DA62(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_D8B614E7EF4033A4_METHOD_2_84671FCE9274DA62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_D8B614E7EF4033A4_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B00B669953BF94F4(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_D8B614E7EF4033A4_METHOD_2_B00B669953BF94F4_OFFSET))(this, a1, a2);
	}
};
