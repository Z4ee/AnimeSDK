#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_4_847526B96EF09786_METHOD_4_01AD6E2CA9B55A57_OFFSET UNITYSDK_OFFSET(0x1B3F7860)
#define CLASS_4_847526B96EF09786_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B3F7AA0)
#define CLASS_4_847526B96EF09786_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B3F7A50)
#define CLASS_4_847526B96EF09786_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1B3F78C0)
#define CLASS_4_847526B96EF09786__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F78B0)

inline static constexpr unsigned int Class_4_847526B96EF09786_TypeDefinitionIndex = 22269;

class Class_4_847526B96EF09786 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::System::String*>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_847526B96EF09786__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_01AD6E2CA9B55A57(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_847526B96EF09786*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_847526B96EF09786*&))((::PBYTE)hIl2Cpp + CLASS_4_847526B96EF09786_METHOD_4_01AD6E2CA9B55A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_847526B96EF09786* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_847526B96EF09786*))((::PBYTE)hIl2Cpp + CLASS_4_847526B96EF09786_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_847526B96EF09786*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_847526B96EF09786*&))((::PBYTE)hIl2Cpp + CLASS_4_847526B96EF09786_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_847526B96EF09786* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_847526B96EF09786*))((::PBYTE)hIl2Cpp + CLASS_4_847526B96EF09786_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
