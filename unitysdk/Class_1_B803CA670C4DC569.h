#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
class Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B803CA670C4DC569_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x14D07D10)
#define CLASS_1_B803CA670C4DC569_METHOD_1_0D3EBA864CEE090C_OFFSET UNITYSDK_OFFSET(0x14D08060)
#define CLASS_1_B803CA670C4DC569_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14D08270)
#define CLASS_1_B803CA670C4DC569_METHOD_1_1E385C0D8ECA4821_OFFSET UNITYSDK_OFFSET(0x14D082E0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_2A64A8F72C33A317_OFFSET UNITYSDK_OFFSET(0x14D07DB0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_392C4AE52B9B45E6_OFFSET UNITYSDK_OFFSET(0x14D0A040)
#define CLASS_1_B803CA670C4DC569_METHOD_1_7D385A81A3727868_OFFSET UNITYSDK_OFFSET(0x14D08740)
#define CLASS_1_B803CA670C4DC569_METHOD_1_84D07FE535D6D6F5_OFFSET UNITYSDK_OFFSET(0x14D088B0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_896B55E4EFAB9451_OFFSET UNITYSDK_OFFSET(0x14D08960)
#define CLASS_1_B803CA670C4DC569_METHOD_1_9A6F3FB2727393B9_OFFSET UNITYSDK_OFFSET(0x14D092E0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_A1CA103CC59D6943_OFFSET UNITYSDK_OFFSET(0x14D08C00)
#define CLASS_1_B803CA670C4DC569_METHOD_1_A9AE92A8BD1FF115_OFFSET UNITYSDK_OFFSET(0x14D08FE0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D07CD0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_CAD108B4AFF59F09_OFFSET UNITYSDK_OFFSET(0x14D07ED0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_D22D1A6565DA7485_OFFSET UNITYSDK_OFFSET(0x14D09040)
#define CLASS_1_B803CA670C4DC569_METHOD_1_D407F23544D72DE4_OFFSET UNITYSDK_OFFSET(0x14D094A0)
#define CLASS_1_B803CA670C4DC569_METHOD_1_D7A0C17E90B8611E_OFFSET UNITYSDK_OFFSET(0x14D08660)
#define CLASS_1_B803CA670C4DC569_METHOD_1_DECD8F5296651B19_OFFSET UNITYSDK_OFFSET(0x14D09D70)
#define CLASS_1_B803CA670C4DC569_METHOD_1_EDEA68DD5DD35925_OFFSET UNITYSDK_OFFSET(0x14D09670)
#define CLASS_1_B803CA670C4DC569__CTOR_OFFSET UNITYSDK_OFFSET(0x14D07CC0)

inline static constexpr unsigned int Class_1_B803CA670C4DC569_TypeDefinitionIndex = 53502;

class Class_1_B803CA670C4DC569 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48*>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Boolean Method_1_2A64A8F72C33A317(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_E03B78B927A9E70C_5& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Struct_2_E03B78B927A9E70C_5&))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_2A64A8F72C33A317_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0D3EBA864CEE090C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3, ::RPG::GameCore::FixPoint& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_0D3EBA864CEE090C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_1E385C0D8ECA4821(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_1E385C0D8ECA4821_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7A0C17E90B8611E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_D7A0C17E90B8611E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D385A81A3727868(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_7D385A81A3727868_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_84D07FE535D6D6F5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_84D07FE535D6D6F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A1CA103CC59D6943(::RPG::GameCore::GameEntity* a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3, ::System::Nullable_1<::RPG::GameCore::FixPoint> a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_A1CA103CC59D6943_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D22D1A6565DA7485(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::PropertyModifyFunction a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_D22D1A6565DA7485_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9A6F3FB2727393B9(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_9A6F3FB2727393B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D407F23544D72DE4(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_D407F23544D72DE4_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo Method_1_EDEA68DD5DD35925(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_EDEA68DD5DD35925_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_DECD8F5296651B19(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_DECD8F5296651B19_OFFSET))(this, a1);
	}

	::System::Void Method_1_392C4AE52B9B45E6(::RPG::GameCore::SkillData* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_392C4AE52B9B45E6_OFFSET))(this, a1, a2);
	}

	::Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48* Method_1_CAD108B4AFF59F09(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_CAD108B4AFF59F09_OFFSET))(this, a1);
	}

	::Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48* Method_1_896B55E4EFAB9451(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_896B55E4EFAB9451_OFFSET))(this, a1);
	}

	::System::Void Method_1_A9AE92A8BD1FF115(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_METHOD_1_A9AE92A8BD1FF115_OFFSET))(this, a1);
	}
};
