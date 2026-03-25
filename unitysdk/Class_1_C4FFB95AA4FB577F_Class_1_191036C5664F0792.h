#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_C4FFB95AA4FB577F_Class_1_F5310B30E0C539AB;
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_191036C5664F0792__CTOR_OFFSET UNITYSDK_OFFSET(0x8C5FD10)

inline static constexpr unsigned int Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792_TypeDefinitionIndex = 48776;

class Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildItemSlot*>* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_5; // 0x18
	::Class_1_303D5A33D1401D59* Field_1_2; // 0x20
	::Class_1_C4FFB95AA4FB577F_Class_1_F5310B30E0C539AB* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildStaticItem*>* Field_1_4; // 0x30
	::System::String* Field_1_0; // 0x38
	::Il2CppArray<::System::Boolean>* Field_1_8; // 0x40
	::System::String* Field_1_1; // 0x48
	::System::Boolean Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_191036C5664F0792__CTOR_OFFSET))(this);
	}
};
