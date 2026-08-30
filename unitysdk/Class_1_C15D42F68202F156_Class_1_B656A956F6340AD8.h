#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_C15D42F68202F156_Class_1_C1D26EA5BEAA582B;
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C15D42F68202F156_CLASS_1_B656A956F6340AD8__CTOR_OFFSET UNITYSDK_OFFSET(0x156A2530)

inline static constexpr unsigned int Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8_TypeDefinitionIndex = 60347;

class Class_1_C15D42F68202F156_Class_1_B656A956F6340AD8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildItemSlot*>* JJJNPLOLJGE; // 0x10
	::Class_1_C15D42F68202F156_Class_1_C1D26EA5BEAA582B* POOGHHFHIAN; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildStaticItem*>* JDPIEDNMGBP; // 0x20
	::Class_1_303D5A33D1401D59* OKPMJOCEKBC; // 0x28
	::UnityEngine::Transform* NOAKFGCHOOA; // 0x30
	::System::String* EALNBEBALJM; // 0x38
	::Il2CppArray<::System::Boolean>* BPODOHJJOLA; // 0x40
	::System::String* DAHENCMPLOD; // 0x48
	::System::Boolean HOEKDHBPGAI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_1_B656A956F6340AD8__CTOR_OFFSET))(this);
	}
};
