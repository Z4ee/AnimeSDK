#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

class Class_1_9C1673530BBC4E15;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_34506B4F1B63D04D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155B3AA0)
#define CLASS_1_34506B4F1B63D04D_METHOD_1_281E7F5619431D70_OFFSET UNITYSDK_OFFSET(0x155B3760)
#define CLASS_1_34506B4F1B63D04D_METHOD_1_4005AF9643B4E10A_OFFSET UNITYSDK_OFFSET(0x155B37B0)
#define CLASS_1_34506B4F1B63D04D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x155B39C0)
#define CLASS_1_34506B4F1B63D04D_METHOD_1_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x155B3570)
#define CLASS_1_34506B4F1B63D04D__CTOR_OFFSET UNITYSDK_OFFSET(0x155B32F0)

inline static constexpr unsigned int Class_1_34506B4F1B63D04D_TypeDefinitionIndex = 74523;

class Class_1_34506B4F1B63D04D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* Field_1_0; // 0x10
	::Class_1_9C1673530BBC4E15* Field_1_1; // 0x18
	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D_METHOD_1_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_1_281E7F5619431D70(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D_METHOD_1_281E7F5619431D70_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4005AF9643B4E10A(::RPG::Client::Prop::ChimeraPreparationState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D_METHOD_1_4005AF9643B4E10A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D_DISPOSE_OFFSET))(this);
	}
};
