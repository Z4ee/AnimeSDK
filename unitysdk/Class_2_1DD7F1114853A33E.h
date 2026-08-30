#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_9CAA42EF32347EE5_2;
class Class_2_9C2CC447D2CA6459;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_1DD7F1114853A33E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB9530)
#define CLASS_2_1DD7F1114853A33E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEB9850)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_04D8BFEA68823B33_OFFSET UNITYSDK_OFFSET(0xBEB8D20)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_192FD0E0087FC305_OFFSET UNITYSDK_OFFSET(0xBEB88C0)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_3BD976ABAED398BB_OFFSET UNITYSDK_OFFSET(0xBEB8B00)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_4825513ECD77A790_OFFSET UNITYSDK_OFFSET(0xBEB8860)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_83E681D36752DE7B_OFFSET UNITYSDK_OFFSET(0xBEB8F50)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_8440B09B759EB9AE_OFFSET UNITYSDK_OFFSET(0xBEB8930)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_ABC6B8234127ADFB_OFFSET UNITYSDK_OFFSET(0xBEB89A0)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_AC2C3032DC945A9B_OFFSET UNITYSDK_OFFSET(0xBEB8780)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_D9FE414AB54F0116_OFFSET UNITYSDK_OFFSET(0xBEB8BB0)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0xBEB8EE0)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_E8F7064E037D9D1C_OFFSET UNITYSDK_OFFSET(0xBEB87D0)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xBEB9190)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xBEB9270)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0xBEB9370)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0xBEB9470)
#define CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBEB9080)
#define CLASS_2_1DD7F1114853A33E__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB9B30)

inline static constexpr unsigned int Class_2_1DD7F1114853A33E_TypeDefinitionIndex = 71521;

class Class_2_1DD7F1114853A33E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 JDGCGKDLKEE = 0xA; // 0x0
	::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_9C2CC447D2CA6459*>* HIIMAAOGHPE; // 0x68
	::System::Collections::Generic::Stack_1<::Class_2_9C2CC447D2CA6459*>* CFBNIPBJEFF; // 0x70
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AC2C3032DC945A9B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_AC2C3032DC945A9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4825513ECD77A790(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_4825513ECD77A790_OFFSET))(this, a1);
	}

	::System::Void Method_2_192FD0E0087FC305(::Class_1_9CAA42EF32347EE5_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_2*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_192FD0E0087FC305_OFFSET))(this, a1);
	}

	::System::Void Method_2_8440B09B759EB9AE(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_8440B09B759EB9AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BD976ABAED398BB(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_3BD976ABAED398BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8F7064E037D9D1C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_E8F7064E037D9D1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_04D8BFEA68823B33(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_04D8BFEA68823B33_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABC6B8234127ADFB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_ABC6B8234127ADFB_OFFSET))(this, a1);
	}

	::Class_2_9C2CC447D2CA6459* Method_2_DCEC38F05597CB7D()
	{
		return ((::Class_2_9C2CC447D2CA6459*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_DCEC38F05597CB7D_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_2_83E681D36752DE7B()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_83E681D36752DE7B_OFFSET))(this);
	}

	::RPG::GameCore::LevelUIComponent* Method_2_D9FE414AB54F0116()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_D9FE414AB54F0116_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD7F1114853A33E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
