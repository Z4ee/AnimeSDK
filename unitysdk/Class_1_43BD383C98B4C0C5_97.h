#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_229;
class Class_1_0EA099C7D681B6D6;
class Class_1_43BD383C98B4C0C5_98;
class Class_2_037EA204E69EBC75;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_97__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E6D20)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_97_TypeDefinitionIndex = 40291;

class Class_1_43BD383C98B4C0C5_97 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_229* Field_1_0; // 0x10
	::Class_1_43BD383C98B4C0C5_98* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_037EA204E69EBC75*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>* Field_1_6; // 0x40
	::UnityEngine::Vector2 Field_1_7; // 0x48
	::UnityEngine::Vector3 Field_1_8; // 0x50
	::System::UInt32 Field_1_9; // 0x5C
	::UnityEngine::Vector3 Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x6C
	::System::Boolean Field_1_12; // 0x6D
	::System::Boolean Field_1_13; // 0x6E
	::System::Boolean Field_1_14; // 0x6F
	::UnityEngine::Vector2 Field_1_15; // 0x70
	::RPG::Client::LittleGame::TRFPhase Field_1_16; // 0x78
	::System::Single Field_1_17; // 0x7C
	::System::Single Field_1_18; // 0x80
	::System::Boolean Field_1_19; // 0x84
	::System::Boolean Field_1_20; // 0x85
	::UnityEngine::Vector3 Field_1_21; // 0x88
	::System::UInt32 Field_1_22; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_97__CTOR_OFFSET))(this);
	}
};
