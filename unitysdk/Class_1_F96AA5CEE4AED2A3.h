#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_2FF4295849ECC7AF;
class Class_1_B044F82CBFAD3D4B;
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_F96AA5CEE4AED2A3_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x8D521D0)
#define CLASS_1_F96AA5CEE4AED2A3__CTOR_OFFSET UNITYSDK_OFFSET(0x8D51F10)

inline static constexpr unsigned int Class_1_F96AA5CEE4AED2A3_TypeDefinitionIndex = 57470;

class Class_1_F96AA5CEE4AED2A3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*>* Field_1_3; // 0x30
	::Class_1_B044F82CBFAD3D4B* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96AA5CEE4AED2A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F96AA5CEE4AED2A3_METHOD_1_82E992240300FB30_OFFSET))(this);
	}
};
