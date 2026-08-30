#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_298A90B03D7BB92F_METHOD_4_02FDD26BEE186CA3_OFFSET UNITYSDK_OFFSET(0x1CA76CA0)
#define CLASS_4_298A90B03D7BB92F_METHOD_4_6739D2F380E7A5A2_OFFSET UNITYSDK_OFFSET(0x1CA76C50)
#define CLASS_4_298A90B03D7BB92F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA76C90)

inline static constexpr unsigned int Class_4_298A90B03D7BB92F_TypeDefinitionIndex = 10176;

class Class_4_298A90B03D7BB92F : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEAHACBFJBP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_298A90B03D7BB92F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6739D2F380E7A5A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_298A90B03D7BB92F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_298A90B03D7BB92F*&))((::PBYTE)hIl2Cpp + CLASS_4_298A90B03D7BB92F_METHOD_4_6739D2F380E7A5A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_02FDD26BEE186CA3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_298A90B03D7BB92F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_298A90B03D7BB92F*))((::PBYTE)hIl2Cpp + CLASS_4_298A90B03D7BB92F_METHOD_4_02FDD26BEE186CA3_OFFSET))(a1, a2);
	}
};
