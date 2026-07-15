#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_8ADAAB4A2E4AC573_METHOD_1_1BDA52FD596832B4_OFFSET UNITYSDK_OFFSET(0x15E45470)
#define CLASS_1_8ADAAB4A2E4AC573_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x15E45540)
#define CLASS_1_8ADAAB4A2E4AC573_METHOD_1_5B1FE5ED00D5C572_OFFSET UNITYSDK_OFFSET(0x15E45780)
#define CLASS_1_8ADAAB4A2E4AC573_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x15E45770)
#define CLASS_1_8ADAAB4A2E4AC573_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15E456B0)
#define CLASS_1_8ADAAB4A2E4AC573_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E455F0)
#define CLASS_1_8ADAAB4A2E4AC573_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x15E456F0)
#define CLASS_1_8ADAAB4A2E4AC573_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15E45730)
#define CLASS_1_8ADAAB4A2E4AC573_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x15E45670)
#define CLASS_1_8ADAAB4A2E4AC573_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x15E45630)
#define CLASS_1_8ADAAB4A2E4AC573__CTOR_OFFSET UNITYSDK_OFFSET(0x15E45790)

inline static constexpr unsigned int Class_1_8ADAAB4A2E4AC573_TypeDefinitionIndex = 54647;

class Class_1_8ADAAB4A2E4AC573 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1BDA52FD596832B4(::RPG::GameCore::CharacterModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_METHOD_1_1BDA52FD596832B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::CharacterModelComponent* Method_1_5B1FE5ED00D5C572()
	{
		return ((::RPG::GameCore::CharacterModelComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADAAB4A2E4AC573_METHOD_1_5B1FE5ED00D5C572_OFFSET))(this);
	}
};
