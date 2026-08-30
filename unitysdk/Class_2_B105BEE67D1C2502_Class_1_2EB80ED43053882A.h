#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B105BEE67D1C2502_CLASS_1_2EB80ED43053882A_METHOD_1_963929CBFCB03E97_OFFSET UNITYSDK_OFFSET(0xC176A70)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_2EB80ED43053882A__CTOR_OFFSET UNITYSDK_OFFSET(0xC1767B0)

inline static constexpr unsigned int Class_2_B105BEE67D1C2502_Class_1_2EB80ED43053882A_TypeDefinitionIndex = 60702;

class Class_2_B105BEE67D1C2502_Class_1_2EB80ED43053882A : public ::System::Object
{
public:
	::System::String* JLCLCMGLKKG; // 0x10
	::System::String* POECNOICAHL; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MapRotation::EffectType, ::System::Collections::Generic::List_1<::Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F>*>* OFCKNBEAIDL; // 0x20
	::System::UInt32 FCFGHOHHJLE; // 0x28
	::System::Boolean OCEMLKIOEEH; // 0x2C
	::System::UInt32 GJPPHJMHBPF; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_2EB80ED43053882A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_963929CBFCB03E97(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::MapRotationEntityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_2EB80ED43053882A_METHOD_1_963929CBFCB03E97_OFFSET))(this, a1, a2, a3);
	}
};
