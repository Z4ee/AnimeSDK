#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigListType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E272722571A79B56__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4638D0)
#define CLASS_1_E272722571A79B56__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A463920)
#define CLASS_1_E272722571A79B56__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4638C0)

inline static constexpr unsigned int Class_1_E272722571A79B56_TypeDefinitionIndex = 56694;

class Class_1_E272722571A79B56 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* EMOEJADDBNE; // 0x10
	::Il2CppArray<::System::String*>* GGDJEJOPDKB; // 0x18
	::RPG::GameCore::JsonConfigListType OENAMINOLLF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E272722571A79B56__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::GameCore::JsonConfigListType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfigListType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E272722571A79B56__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::RPG::GameCore::JsonConfigListType a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfigListType, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E272722571A79B56__CTOR_2_OFFSET))(this, a1, a2);
	}
};
