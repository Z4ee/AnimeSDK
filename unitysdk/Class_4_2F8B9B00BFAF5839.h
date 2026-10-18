#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_2F8B9B00BFAF5839_METHOD_4_01AD6E2CA9B55A57_OFFSET UNITYSDK_OFFSET(0x1CD90FE0)
#define CLASS_4_2F8B9B00BFAF5839_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1CD91210)
#define CLASS_4_2F8B9B00BFAF5839_METHOD_4_73F0031E4983E886_OFFSET UNITYSDK_OFFSET(0x1CD91020)
#define CLASS_4_2F8B9B00BFAF5839_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1CD911E0)
#define CLASS_4_2F8B9B00BFAF5839__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD91010)

inline static constexpr unsigned int Class_4_2F8B9B00BFAF5839_TypeDefinitionIndex = 23096;

class Class_4_2F8B9B00BFAF5839 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::AbilityPropertyChangeReason>* LJKFAPCKIHF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2F8B9B00BFAF5839__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_01AD6E2CA9B55A57(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2F8B9B00BFAF5839*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2F8B9B00BFAF5839*&))((::PBYTE)hIl2Cpp + CLASS_4_2F8B9B00BFAF5839_METHOD_4_01AD6E2CA9B55A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73F0031E4983E886(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2F8B9B00BFAF5839* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2F8B9B00BFAF5839*))((::PBYTE)hIl2Cpp + CLASS_4_2F8B9B00BFAF5839_METHOD_4_73F0031E4983E886_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_2F8B9B00BFAF5839*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2F8B9B00BFAF5839*&))((::PBYTE)hIl2Cpp + CLASS_4_2F8B9B00BFAF5839_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_2F8B9B00BFAF5839* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_2F8B9B00BFAF5839*))((::PBYTE)hIl2Cpp + CLASS_4_2F8B9B00BFAF5839_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
