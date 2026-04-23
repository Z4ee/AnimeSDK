#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_08645361E812A3C8;
class Class_1_8B83CE81FFD7409A;
class Class_1_AE0A31FF4C4A751B;
namespace RPG::Client { class BattleAlertParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E12E73A35C16604A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA044AF0)
#define CLASS_1_E12E73A35C16604A_METHOD_1_11F7F4A336F1B8E3_OFFSET UNITYSDK_OFFSET(0xA045130)
#define CLASS_1_E12E73A35C16604A_METHOD_1_19F8E63EC04D3B5F_OFFSET UNITYSDK_OFFSET(0xA044F40)
#define CLASS_1_E12E73A35C16604A_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0xA044D30)
#define CLASS_1_E12E73A35C16604A_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0xA044DD0)
#define CLASS_1_E12E73A35C16604A_METHOD_1_64EB37ED69DA3A5C_OFFSET UNITYSDK_OFFSET(0xA0454C0)
#define CLASS_1_E12E73A35C16604A_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xA045410)
#define CLASS_1_E12E73A35C16604A_METHOD_1_99CA44D3B5E2A74E_OFFSET UNITYSDK_OFFSET(0xA045190)
#define CLASS_1_E12E73A35C16604A_METHOD_1_B4EA5393BA544425_OFFSET UNITYSDK_OFFSET(0xA044E70)
#define CLASS_1_E12E73A35C16604A_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xA045060)
#define CLASS_1_E12E73A35C16604A__CTOR_OFFSET UNITYSDK_OFFSET(0xA045600)

inline static constexpr unsigned int Class_1_E12E73A35C16604A_TypeDefinitionIndex = 65827;

class Class_1_E12E73A35C16604A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_08645361E812A3C8*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AE0A31FF4C4A751B*>* Field_1_1; // 0x18
	::Class_1_AE0A31FF4C4A751B* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::Class_1_08645361E812A3C8* Method_1_B4EA5393BA544425(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_08645361E812A3C8*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_B4EA5393BA544425_OFFSET))(this, a1);
	}

	::Class_1_8B83CE81FFD7409A* Method_1_19F8E63EC04D3B5F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2)
	{
		return ((::Class_1_8B83CE81FFD7409A*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_19F8E63EC04D3B5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_11F7F4A336F1B8E3(::RPG::Client::BattleAlertParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_11F7F4A336F1B8E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_64EB37ED69DA3A5C(::RPG::GameCore::GameEntity* a1, ::Class_1_08645361E812A3C8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_08645361E812A3C8*))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_64EB37ED69DA3A5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99CA44D3B5E2A74E(::RPG::GameCore::GameEntity* a1, ::RPG::Client::BattleAlertParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_1_E12E73A35C16604A_METHOD_1_99CA44D3B5E2A74E_OFFSET))(this, a1, a2);
	}
};
