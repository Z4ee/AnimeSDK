#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_93896D58DE250EBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x16E95570)
#define CLASS_1_93896D58DE250EBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E955C0)

inline static constexpr unsigned int Class_1_93896D58DE250EBE_TypeDefinitionIndex = 57124;

class Class_1_93896D58DE250EBE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
	::RPG::GameCore::FloatCurve* NPMMJCIGLJP; // 0x18
	::System::Single IEHPFADHJFD; // 0x20
	::System::Single BJOCBPFKJDP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93896D58DE250EBE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93896D58DE250EBE_CLEAR_OFFSET))(this);
	}
};
