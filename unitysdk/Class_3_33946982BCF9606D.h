#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_33946982BCF9606D_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1830B8B0)
#define CLASS_3_33946982BCF9606D_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1830B980)
#define CLASS_3_33946982BCF9606D__CTOR_OFFSET UNITYSDK_OFFSET(0x1830B930)

inline static constexpr unsigned int Class_3_33946982BCF9606D_TypeDefinitionIndex = 23156;

class Class_3_33946982BCF9606D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33946982BCF9606D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_33946982BCF9606D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_33946982BCF9606D*&))((::PBYTE)hIl2Cpp + CLASS_3_33946982BCF9606D_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_33946982BCF9606D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_33946982BCF9606D*))((::PBYTE)hIl2Cpp + CLASS_3_33946982BCF9606D_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
