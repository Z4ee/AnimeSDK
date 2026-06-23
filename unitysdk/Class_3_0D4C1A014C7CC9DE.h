#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_0D4C1A014C7CC9DE_Struct_2_9B4D04E6A7FE929A.h"
#include "unitysdk/Class_3_0D4C1A014C7CC9DE_Struct_2_DB233EDF9CEBD1CB.h"
#include "unitysdk/MoleMole/AttackType.h"

namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0D4C1A014C7CC9DE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E0D800)
#define CLASS_3_0D4C1A014C7CC9DE_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x15E0D940)
#define CLASS_3_0D4C1A014C7CC9DE_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x15E0D950)
#define CLASS_3_0D4C1A014C7CC9DE_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x15E0E040)
#define CLASS_3_0D4C1A014C7CC9DE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15E0E050)
#define CLASS_3_0D4C1A014C7CC9DE_METHOD_3_C1A38EA9414F5778_OFFSET UNITYSDK_OFFSET(0x15E0DA20)
#define CLASS_3_0D4C1A014C7CC9DE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E0D740)
#define CLASS_3_0D4C1A014C7CC9DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E0D850)
#define CLASS_3_0D4C1A014C7CC9DE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0D8D0)

inline static constexpr unsigned int Class_3_0D4C1A014C7CC9DE_TypeDefinitionIndex = 67155;

class Class_3_0D4C1A014C7CC9DE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_16 = 0x40; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_12; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_11; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_3_14; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_0D4C1A014C7CC9DE_Struct_2_DB233EDF9CEBD1CB>*>* Field_3_9; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_4; // 0x68
	::Il2CppArray<::System::Single>* Field_3_13; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_0D4C1A014C7CC9DE_Struct_2_9B4D04E6A7FE929A>* Field_3_6; // 0x78
	::MoleMole::Config::LevelGlobalAIModule* Field_3_1; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_3_7; // 0x88
	::System::String* Field_3_0; // 0x90
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_10; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_5; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_15; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_3_8; // 0xB0
	::System::Single Field_3_3; // 0xB8
	::System::Int32 Field_3_2; // 0xBC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_GETCLASSID_OFFSET))(this);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	static ::Class_3_0D4C1A014C7CC9DE* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_0D4C1A014C7CC9DE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Void Method_3_C1A38EA9414F5778(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_METHOD_3_C1A38EA9414F5778_OFFSET))(this, a1);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
