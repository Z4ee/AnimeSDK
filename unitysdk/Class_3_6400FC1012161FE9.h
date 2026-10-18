#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6400FC1012161FE9_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x1CE0FCE0)
#define CLASS_3_6400FC1012161FE9_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1CE0FCA0)
#define CLASS_3_6400FC1012161FE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0FCD0)

inline static constexpr unsigned int Class_3_6400FC1012161FE9_TypeDefinitionIndex = 23125;

class Class_3_6400FC1012161FE9 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* JGNLDDCGADA; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicFloat* ADGJCGAHHJG; // 0x28
	::RPG::GameCore::DynamicFloat* HHBJNOFIPBF; // 0x30
	::RPG::GameCore::DynamicFloat* KKHMOJLEPFP; // 0x38
	::System::String* ECNKCCNJNPJ; // 0x40
	::RPG::GameCore::DynamicFloat* JNBLBDLALGE; // 0x48
	::RPG::MVector3 OMDDHOJDHKH; // 0x50
	::System::Boolean BIADECNNCJA; // 0x5C
	::System::Boolean FPIJPODLMJH; // 0x5D
	::System::Boolean ENNJNFLANBI; // 0x5E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6400FC1012161FE9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6400FC1012161FE9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6400FC1012161FE9*&))((::PBYTE)hIl2Cpp + CLASS_3_6400FC1012161FE9_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6400FC1012161FE9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6400FC1012161FE9*))((::PBYTE)hIl2Cpp + CLASS_3_6400FC1012161FE9_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
