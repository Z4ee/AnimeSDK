#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }

#define CLASS_1_EB4FE4573330E061_METHOD_1_85A1CB8C1C047063_OFFSET UNITYSDK_OFFSET(0x1AFAC640)
#define CLASS_1_EB4FE4573330E061_METHOD_1_D984628C15531E79_OFFSET UNITYSDK_OFFSET(0x1AFAC5E0)

inline static constexpr unsigned int Class_1_EB4FE4573330E061_TypeDefinitionIndex = 10480;

class Class_1_EB4FE4573330E061 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_D984628C15531E79(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_EB4FE4573330E061_METHOD_1_D984628C15531E79_OFFSET))(a1);
	}

	static ::System::Void Method_1_85A1CB8C1C047063(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyAdsorptionConfig* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EB4FE4573330E061_METHOD_1_85A1CB8C1C047063_OFFSET))(a1, a2);
	}
};
