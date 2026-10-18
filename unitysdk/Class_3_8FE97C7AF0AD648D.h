#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_8FE97C7AF0AD648D_METHOD_3_10C35B0F951EB816_OFFSET UNITYSDK_OFFSET(0x1D1D8380)
#define CLASS_3_8FE97C7AF0AD648D_METHOD_3_4160F02640B2F8A6_OFFSET UNITYSDK_OFFSET(0x1D1D8300)
#define CLASS_3_8FE97C7AF0AD648D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D8350)

inline static constexpr unsigned int Class_3_8FE97C7AF0AD648D_TypeDefinitionIndex = 22328;

class Class_3_8FE97C7AF0AD648D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* EJHODPJIFIN; // 0x20
	::System::UInt32 NFECLMGILCH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FE97C7AF0AD648D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4160F02640B2F8A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FE97C7AF0AD648D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FE97C7AF0AD648D*&))((::PBYTE)hIl2Cpp + CLASS_3_8FE97C7AF0AD648D_METHOD_3_4160F02640B2F8A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_10C35B0F951EB816(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FE97C7AF0AD648D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FE97C7AF0AD648D*))((::PBYTE)hIl2Cpp + CLASS_3_8FE97C7AF0AD648D_METHOD_3_10C35B0F951EB816_OFFSET))(a1, a2);
	}
};
