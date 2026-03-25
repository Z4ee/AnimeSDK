#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeTemplateApplyRuleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C98868AE07DCB55D__CTOR_OFFSET UNITYSDK_OFFSET(0x16876AD0)

inline static constexpr unsigned int Class_1_C98868AE07DCB55D_TypeDefinitionIndex = 32704;

class Class_1_C98868AE07DCB55D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>*>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C98868AE07DCB55D__CTOR_OFFSET))(this);
	}
};
