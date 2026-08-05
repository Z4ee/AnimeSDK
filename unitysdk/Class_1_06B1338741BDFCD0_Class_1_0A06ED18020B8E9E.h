#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_590214B1C850A70F.h"
#include "unitysdk/MoleMole/InteractantTagListEntry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InteractTraitDataGlobal; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_0D1D6832E0428A1D_1_OFFSET UNITYSDK_OFFSET(0x18DCE8C0)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_0D1D6832E0428A1D_OFFSET UNITYSDK_OFFSET(0x18DCE7F0)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_197E717455443858_OFFSET UNITYSDK_OFFSET(0x18DCE490)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_2E39915E5DF8C108_OFFSET UNITYSDK_OFFSET(0x18DCE690)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_3265AEC5435DDEBE_1_OFFSET UNITYSDK_OFFSET(0x18DCE910)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_3265AEC5435DDEBE_OFFSET UNITYSDK_OFFSET(0x18DCE8D0)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_4F91163D76607A40_1_OFFSET UNITYSDK_OFFSET(0x18DCE800)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_4F91163D76607A40_OFFSET UNITYSDK_OFFSET(0x18DCE730)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_C8BA04CF72E4997A_1_OFFSET UNITYSDK_OFFSET(0x18DCE680)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_C8BA04CF72E4997A_OFFSET UNITYSDK_OFFSET(0x18DCE670)
#define CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE270)

inline static constexpr unsigned int Class_1_06B1338741BDFCD0_Class_1_0A06ED18020B8E9E_TypeDefinitionIndex = 41445;

class Class_1_06B1338741BDFCD0_Class_1_0A06ED18020B8E9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* Field_1_1; // 0x28

	::System::Void _ctor(::MoleMole::InteractTraitDataGlobal* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InteractTraitDataGlobal*))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_C8BA04CF72E4997A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_C8BA04CF72E4997A_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_C8BA04CF72E4997A_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_C8BA04CF72E4997A_1_OFFSET))(this);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_2E39915E5DF8C108(::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>*& a1, ::Enum_3_590214B1C850A70F a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>*&, ::Enum_3_590214B1C850A70F))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_2E39915E5DF8C108_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_4F91163D76607A40(::Enum_3_590214B1C850A70F a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID, ::Enum_3_590214B1C850A70F))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_4F91163D76607A40_OFFSET))(this, a1);
	}

	::System::Void Method_1_197E717455443858(::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>*& a1, ::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>*&, ::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>*&))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_197E717455443858_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>* Method_1_0D1D6832E0428A1D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_0D1D6832E0428A1D_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_4F91163D76607A40_1(::Enum_3_590214B1C850A70F a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID, ::Enum_3_590214B1C850A70F))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_4F91163D76607A40_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>* Method_1_0D1D6832E0428A1D_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_0D1D6832E0428A1D_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_3265AEC5435DDEBE()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_3265AEC5435DDEBE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_1_3265AEC5435DDEBE_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06B1338741BDFCD0_CLASS_1_0A06ED18020B8E9E_METHOD_1_3265AEC5435DDEBE_1_OFFSET))(this);
	}
};
