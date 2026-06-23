#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_82D825AD3611631A_Class_1_9FE62D04427454D0;
namespace MoleMole::Config { class ConfigHitDatas; }

#define CLASS_1_82D825AD3611631A_CLASS_1_EB9D8CE3B73AAEB9_METHOD_1_703348A3200ADAB8_OFFSET UNITYSDK_OFFSET(0x13480F10)
#define CLASS_1_82D825AD3611631A_CLASS_1_EB9D8CE3B73AAEB9__CTOR_OFFSET UNITYSDK_OFFSET(0x13480F00)

inline static constexpr unsigned int Class_1_82D825AD3611631A_Class_1_EB9D8CE3B73AAEB9_TypeDefinitionIndex = 52843;

class Class_1_82D825AD3611631A_Class_1_EB9D8CE3B73AAEB9 : public ::System::Object
{
public:
	::Class_1_82D825AD3611631A_Class_1_9FE62D04427454D0* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_CLASS_1_EB9D8CE3B73AAEB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_703348A3200ADAB8(::MoleMole::Config::ConfigHitDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitDatas*))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_CLASS_1_EB9D8CE3B73AAEB9_METHOD_1_703348A3200ADAB8_OFFSET))(this, a1);
	}
};
