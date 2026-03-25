#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByTriggerFeature; }

#define CLASS_3_2B1DF233B35D7D46_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1691E470)
#define CLASS_3_2B1DF233B35D7D46__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E450)

inline static constexpr unsigned int Class_3_2B1DF233B35D7D46_TypeDefinitionIndex = 33202;

class Class_3_2B1DF233B35D7D46 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByTriggerFeature* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByTriggerFeature* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTriggerFeature*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_2B1DF233B35D7D46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B1DF233B35D7D46_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
