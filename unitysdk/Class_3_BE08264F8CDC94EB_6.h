#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_BE08264F8CDC94EB_6_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x18463CB0)
#define CLASS_3_BE08264F8CDC94EB_6_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x18463B90)
#define CLASS_3_BE08264F8CDC94EB_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18463C30)

inline static constexpr unsigned int Class_3_BE08264F8CDC94EB_6_TypeDefinitionIndex = 23171;

class Class_3_BE08264F8CDC94EB_6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE08264F8CDC94EB_6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE08264F8CDC94EB_6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE08264F8CDC94EB_6*&))((::PBYTE)hIl2Cpp + CLASS_3_BE08264F8CDC94EB_6_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE08264F8CDC94EB_6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE08264F8CDC94EB_6*))((::PBYTE)hIl2Cpp + CLASS_3_BE08264F8CDC94EB_6_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
