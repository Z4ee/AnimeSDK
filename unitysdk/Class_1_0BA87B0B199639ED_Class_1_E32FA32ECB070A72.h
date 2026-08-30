#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0BA87B0B199639ED_CLASS_1_E32FA32ECB070A72_METHOD_1_236C63F593349253_OFFSET UNITYSDK_OFFSET(0x163C6620)
#define CLASS_1_0BA87B0B199639ED_CLASS_1_E32FA32ECB070A72__CTOR_OFFSET UNITYSDK_OFFSET(0x163C66F0)

inline static constexpr unsigned int Class_1_0BA87B0B199639ED_Class_1_E32FA32ECB070A72_TypeDefinitionIndex = 57774;

class Class_1_0BA87B0B199639ED_Class_1_E32FA32ECB070A72 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* NKFDJFFLDEA; // 0x10
	::RPG::GameCore::GameEntity* LBGJHODBAEA; // 0x18
	::System::UInt32 AIKAABAKHLG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_CLASS_1_E32FA32ECB070A72__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_236C63F593349253(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0BA87B0B199639ED_CLASS_1_E32FA32ECB070A72_METHOD_1_236C63F593349253_OFFSET))(this, a1);
	}
};
