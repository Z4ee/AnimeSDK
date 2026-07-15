#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A5B3DD4CC7411BFC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18591F50)
#define CLASS_2_A5B3DD4CC7411BFC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18592040)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x185916D0)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_7A2DB6C2ED8E8BBA_OFFSET UNITYSDK_OFFSET(0x18591880)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x18591660)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18591840)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x185918D0)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_E179EB11A88B91C9_OFFSET UNITYSDK_OFFSET(0x18591E20)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_E2959E26CE30F85A_OFFSET UNITYSDK_OFFSET(0x18591940)
#define CLASS_2_A5B3DD4CC7411BFC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18591E70)
#define CLASS_2_A5B3DD4CC7411BFC__CTOR_OFFSET UNITYSDK_OFFSET(0x18592110)
#define CLASS_2_A5B3DD4CC7411BFC__ONBIND_OFFSET UNITYSDK_OFFSET(0x18591540)

inline static constexpr unsigned int Class_2_A5B3DD4CC7411BFC_TypeDefinitionIndex = 68179;

class Class_2_A5B3DD4CC7411BFC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_4; // 0x78
	::RPG::Client::UISkillIndex Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7A2DB6C2ED8E8BBA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_7A2DB6C2ED8E8BBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Boolean Method_2_E2959E26CE30F85A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_E2959E26CE30F85A_OFFSET))(this);
	}

	::System::Boolean Method_2_E179EB11A88B91C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_E179EB11A88B91C9_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5B3DD4CC7411BFC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
