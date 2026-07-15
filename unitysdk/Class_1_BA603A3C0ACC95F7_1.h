#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define CLASS_1_BA603A3C0ACC95F7_1_METHOD_1_20267412BF6FE233_OFFSET UNITYSDK_OFFSET(0x15063370)
#define CLASS_1_BA603A3C0ACC95F7_1_METHOD_1_6C5C211CFB2C7B8C_OFFSET UNITYSDK_OFFSET(0x15063450)
#define CLASS_1_BA603A3C0ACC95F7_1_METHOD_1_84D3B7EDB860FB25_OFFSET UNITYSDK_OFFSET(0x15063290)
#define CLASS_1_BA603A3C0ACC95F7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x150635F0)

inline static constexpr unsigned int Class_1_BA603A3C0ACC95F7_1_TypeDefinitionIndex = 76652;

class Class_1_BA603A3C0ACC95F7_1 : public ::System::Object
{
public:
	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_1__CTOR_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_1_84D3B7EDB860FB25()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_1_METHOD_1_84D3B7EDB860FB25_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> Method_1_20267412BF6FE233()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_1_METHOD_1_20267412BF6FE233_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_6C5C211CFB2C7B8C()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA603A3C0ACC95F7_1_METHOD_1_6C5C211CFB2C7B8C_OFFSET))(this);
	}
};
