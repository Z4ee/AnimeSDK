#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_AE85D05D86CD33B9_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xAB7ECF0)
#define CLASS_2_AE85D05D86CD33B9_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xAB7EB40)
#define CLASS_2_AE85D05D86CD33B9_METHOD_2_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0xAB7EAF0)
#define CLASS_2_AE85D05D86CD33B9_METHOD_2_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0xAB7ECA0)
#define CLASS_2_AE85D05D86CD33B9_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAB7EC50)
#define CLASS_2_AE85D05D86CD33B9_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xAB7ED00)
#define CLASS_2_AE85D05D86CD33B9__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7ED10)
#define CLASS_2_AE85D05D86CD33B9__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB7EA90)
#define CLASS_2_AE85D05D86CD33B9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB7ED40)

inline static constexpr unsigned int Class_2_AE85D05D86CD33B9_TypeDefinitionIndex = 66743;

class Class_2_AE85D05D86CD33B9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::RPG::GameCore::AetherSpiritTypeRow* Field_2_2; // 0x70
	::System::Boolean _IsUltraMode_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9_METHOD_2_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9_METHOD_2_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsUltraMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9_GET_ISULTRAMODE_OFFSET))(this);
	}

	::System::Void set_IsUltraMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9_SET_ISULTRAMODE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE85D05D86CD33B9___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
