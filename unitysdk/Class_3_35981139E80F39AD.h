#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_35981139E80F39AD_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x17984E70)
#define CLASS_3_35981139E80F39AD_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x17984EF0)
#define CLASS_3_35981139E80F39AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17984EC0)

inline static constexpr unsigned int Class_3_35981139E80F39AD_TypeDefinitionIndex = 19674;

class Class_3_35981139E80F39AD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_1; // 0x18
	::RPG::GameCore::DynamicString* Field_3_2; // 0x20
	::RPG::GameCore::DynamicString* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35981139E80F39AD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_35981139E80F39AD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_35981139E80F39AD*&))((::PBYTE)hIl2Cpp + CLASS_3_35981139E80F39AD_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_35981139E80F39AD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_35981139E80F39AD*))((::PBYTE)hIl2Cpp + CLASS_3_35981139E80F39AD_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
