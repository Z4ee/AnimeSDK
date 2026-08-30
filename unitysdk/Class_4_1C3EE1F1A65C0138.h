#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1D630550)
#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x1D630380)
#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_CB465EAED8BA1FD8_OFFSET UNITYSDK_OFFSET(0x1D6302E0)
#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1D626350)
#define CLASS_4_1C3EE1F1A65C0138__CTOR_OFFSET UNITYSDK_OFFSET(0x1D630340)

inline static constexpr unsigned int Class_4_1C3EE1F1A65C0138_TypeDefinitionIndex = 23831;

class Class_4_1C3EE1F1A65C0138 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::Il2CppArray<::RPG::GameCore::ILBattleCharacterLocation>* LDAOPBMBACB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_CB465EAED8BA1FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1C3EE1F1A65C0138*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1C3EE1F1A65C0138*&))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_CB465EAED8BA1FD8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1C3EE1F1A65C0138* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1C3EE1F1A65C0138*))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_1C3EE1F1A65C0138*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1C3EE1F1A65C0138*&))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_1C3EE1F1A65C0138* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1C3EE1F1A65C0138*))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
