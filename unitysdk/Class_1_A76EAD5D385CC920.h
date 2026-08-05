#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeWidgetController_DifficultyType.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;
class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_569;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A76EAD5D385CC920_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A8928E0)
#define CLASS_1_A76EAD5D385CC920__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8928D0)

inline static constexpr unsigned int Class_1_A76EAD5D385CC920_TypeDefinitionIndex = 88150;

class Class_1_A76EAD5D385CC920 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_569*>* Field_1_9; // 0x10
	::Class_2_14E7CE92E8A3183F* Field_1_4; // 0x18
	::Class_2_0A55B5A82A61DAFA_2* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Boolean Field_1_7; // 0x30
	::MoleMole::UIAbyssS2RoleChallengeWidgetController_DifficultyType Field_1_11; // 0x34
	::System::Int32 Field_1_8; // 0x38
	::MoleMole::UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType Field_1_10; // 0x3C
	::MoleMole::Level::RatingType Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A76EAD5D385CC920__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A76EAD5D385CC920_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
