#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_139;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E042BB52EEF7C7A4_METHOD_1_48D4A09DD92EEC58_OFFSET UNITYSDK_OFFSET(0x1C546720)
#define CLASS_1_E042BB52EEF7C7A4_METHOD_1_CBA3713D57EDCC8A_OFFSET UNITYSDK_OFFSET(0x1C5467A0)
#define CLASS_1_E042BB52EEF7C7A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C546820)

inline static constexpr unsigned int Class_1_E042BB52EEF7C7A4_TypeDefinitionIndex = 41901;

class Class_1_E042BB52EEF7C7A4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E042BB52EEF7C7A4__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_48D4A09DD92EEC58(::Class_0_16E4307DCC419505_139* a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_139*, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_E042BB52EEF7C7A4_METHOD_1_48D4A09DD92EEC58_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_CBA3713D57EDCC8A(::Class_0_16E4307DCC419505_139* a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2, ::System::UInt32 a3, ::RPG::Client::MechCraft::MechCraftPartType a4)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_139*, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_E042BB52EEF7C7A4_METHOD_1_CBA3713D57EDCC8A_OFFSET))(a1, a2, a3, a4);
	}
};
