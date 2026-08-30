#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_4AD406E369F985FF_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CA9D8D0)
#define CLASS_3_4AD406E369F985FF_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CA9D920)
#define CLASS_3_4AD406E369F985FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9D910)

inline static constexpr unsigned int Class_3_4AD406E369F985FF_TypeDefinitionIndex = 23852;

class Class_3_4AD406E369F985FF : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* KDIOGNHBJNP; // 0x18
	::RPG::GameCore::TargetEvaluator* EKNOCCGMJOF; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::System::Boolean MPHPLIJADOF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AD406E369F985FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4AD406E369F985FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4AD406E369F985FF*&))((::PBYTE)hIl2Cpp + CLASS_3_4AD406E369F985FF_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4AD406E369F985FF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4AD406E369F985FF*))((::PBYTE)hIl2Cpp + CLASS_3_4AD406E369F985FF_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
