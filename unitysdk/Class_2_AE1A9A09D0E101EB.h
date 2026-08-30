#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

class DamageTextStyle;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_AE1A9A09D0E101EB_METHOD_2_6BDCAA8E7D2EE569_OFFSET UNITYSDK_OFFSET(0x1855D040)
#define CLASS_2_AE1A9A09D0E101EB_METHOD_2_AC2321C014607113_OFFSET UNITYSDK_OFFSET(0x1855CF90)
#define CLASS_2_AE1A9A09D0E101EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1855D0B0)
#define CLASS_2_AE1A9A09D0E101EB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1855CEC0)

inline static constexpr unsigned int Class_2_AE1A9A09D0E101EB_TypeDefinitionIndex = 71352;

class Class_2_AE1A9A09D0E101EB : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::SimpleTextStyleController* AJAKCFLMCFO; // 0x60
	::UnityEngine::Transform* DCEBIFLMAAF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE1A9A09D0E101EB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE1A9A09D0E101EB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_AC2321C014607113(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_AE1A9A09D0E101EB_METHOD_2_AC2321C014607113_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6BDCAA8E7D2EE569(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_AE1A9A09D0E101EB_METHOD_2_6BDCAA8E7D2EE569_OFFSET))(this, a1, a2, a3);
	}
};
