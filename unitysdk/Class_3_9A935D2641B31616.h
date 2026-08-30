#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_9A935D2641B31616_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1CCB51F0)
#define CLASS_3_9A935D2641B31616_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1CCB51B0)
#define CLASS_3_9A935D2641B31616__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB51E0)

inline static constexpr unsigned int Class_3_9A935D2641B31616_TypeDefinitionIndex = 19672;

class Class_3_9A935D2641B31616 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* ACJEBIJEHOK; // 0x20
	::RPG::GameCore::FateRinActionIntentType FMKBONPIOAG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A935D2641B31616__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9A935D2641B31616*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9A935D2641B31616*&))((::PBYTE)hIl2Cpp + CLASS_3_9A935D2641B31616_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9A935D2641B31616* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9A935D2641B31616*))((::PBYTE)hIl2Cpp + CLASS_3_9A935D2641B31616_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
