#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"

namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D8FA915B7E1BF7BE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1456D3F0)
#define CLASS_2_D8FA915B7E1BF7BE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1456D630)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_165178681EB5F017_OFFSET UNITYSDK_OFFSET(0x1456CA50)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_2A66D148A153D793_OFFSET UNITYSDK_OFFSET(0x1456C8C0)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x1456C7E0)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_395530CA50BA8FE8_OFFSET UNITYSDK_OFFSET(0x1456C6C0)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x1456D1C0)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x1456D100)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_65F4D176AD70D378_1_OFFSET UNITYSDK_OFFSET(0x1456CE40)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x1456CC60)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x1456CB00)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_A3FAE12D7B6ACD62_2_OFFSET UNITYSDK_OFFSET(0x1456D280)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1456CBB0)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x1456D020)
#define CLASS_2_D8FA915B7E1BF7BE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1456D330)
#define CLASS_2_D8FA915B7E1BF7BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1456D830)
#define CLASS_2_D8FA915B7E1BF7BE__ONBIND_OFFSET UNITYSDK_OFFSET(0x1456C430)

inline static constexpr unsigned int Class_2_D8FA915B7E1BF7BE_TypeDefinitionIndex = 68975;

class Class_2_D8FA915B7E1BF7BE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_2; // 0x70
	::Il2CppArray<::RPG::GameCore::GridFightChargeType>* Field_2_3; // 0x78
	::RPG::GameCore::GameEntity* Field_2_4; // 0x80
	::UnityEngine::Transform* Field_2_5; // 0x88
	::UnityEngine::Transform* Field_2_6; // 0x90
	::UnityEngine::Transform* Field_2_7; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_395530CA50BA8FE8(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_395530CA50BA8FE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A66D148A153D793(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_2A66D148A153D793_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_165178681EB5F017()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_165178681EB5F017_OFFSET))(this);
	}

	::System::Void Method_2_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_65F4D176AD70D378_OFFSET))(this);
	}

	::System::Void Method_2_65F4D176AD70D378_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_65F4D176AD70D378_1_OFFSET))(this);
	}

	::System::Void Method_2_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_A3FAE12D7B6ACD62_2_OFFSET))(this);
	}

	::System::Boolean Method_2_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean Method_2_42C5BADE1C9EFC80_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_42C5BADE1C9EFC80_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8FA915B7E1BF7BE_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
