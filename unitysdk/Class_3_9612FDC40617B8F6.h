#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_9612FDC40617B8F6_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D033DA0)
#define CLASS_3_9612FDC40617B8F6_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D033DE0)
#define CLASS_3_9612FDC40617B8F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1D033DD0)

inline static constexpr unsigned int Class_3_9612FDC40617B8F6_TypeDefinitionIndex = 23753;

class Class_3_9612FDC40617B8F6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x18
	::RPG::GameCore::TargetEvaluator* JACJMOPEPDA; // 0x20
	::System::UInt32 PJJDMBCIBDM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9612FDC40617B8F6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9612FDC40617B8F6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9612FDC40617B8F6*&))((::PBYTE)hIl2Cpp + CLASS_3_9612FDC40617B8F6_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9612FDC40617B8F6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9612FDC40617B8F6*))((::PBYTE)hIl2Cpp + CLASS_3_9612FDC40617B8F6_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
