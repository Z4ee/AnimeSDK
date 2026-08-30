#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BD270527DDA5F245_1_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1D272530)
#define CLASS_3_BD270527DDA5F245_1_METHOD_3_F2F19A0D61B85A09_OFFSET UNITYSDK_OFFSET(0x1D2724B0)
#define CLASS_3_BD270527DDA5F245_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D272500)

inline static constexpr unsigned int Class_3_BD270527DDA5F245_1_TypeDefinitionIndex = 20750;

class Class_3_BD270527DDA5F245_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* JPEOGNFHEGO; // 0x18
	::RPG::GameCore::TargetEvaluator* NNGEIAMONGD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD270527DDA5F245_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F2F19A0D61B85A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BD270527DDA5F245_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BD270527DDA5F245_1*&))((::PBYTE)hIl2Cpp + CLASS_3_BD270527DDA5F245_1_METHOD_3_F2F19A0D61B85A09_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BD270527DDA5F245_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BD270527DDA5F245_1*))((::PBYTE)hIl2Cpp + CLASS_3_BD270527DDA5F245_1_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
