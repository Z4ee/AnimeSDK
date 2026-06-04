#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtDefenceGlobalPropertyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_601484553AD71CED_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x19B7B850)
#define CLASS_3_601484553AD71CED_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x19B7B8D0)
#define CLASS_3_601484553AD71CED__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7B8A0)

inline static constexpr unsigned int Class_3_601484553AD71CED_TypeDefinitionIndex = 22861;

class Class_3_601484553AD71CED : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::PropertyModifyFunction Field_3_1; // 0x20
	::RPG::GameCore::RtDefenceGlobalPropertyType Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_601484553AD71CED__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_601484553AD71CED*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_601484553AD71CED*&))((::PBYTE)hIl2Cpp + CLASS_3_601484553AD71CED_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_601484553AD71CED* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_601484553AD71CED*))((::PBYTE)hIl2Cpp + CLASS_3_601484553AD71CED_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
