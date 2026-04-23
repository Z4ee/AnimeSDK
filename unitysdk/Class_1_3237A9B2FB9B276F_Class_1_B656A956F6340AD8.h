#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_3237A9B2FB9B276F_Class_1_CB72D952834771DF;
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3237A9B2FB9B276F_CLASS_1_B656A956F6340AD8__CTOR_OFFSET UNITYSDK_OFFSET(0x11BB9910)

inline static constexpr unsigned int Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8_TypeDefinitionIndex = 55540;

class Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildItemSlot*>* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::Class_1_303D5A33D1401D59* Field_1_2; // 0x28
	::Class_1_3237A9B2FB9B276F_Class_1_CB72D952834771DF* Field_1_6; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildStaticItem*>* Field_1_4; // 0x38
	::System::String* Field_1_0; // 0x40
	::Il2CppArray<::System::Boolean>* Field_1_8; // 0x48
	::System::Boolean Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_B656A956F6340AD8__CTOR_OFFSET))(this);
	}
};
