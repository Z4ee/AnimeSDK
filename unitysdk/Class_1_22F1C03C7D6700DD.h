#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
class Class_1_832D46E76C8F7302;
namespace MoleMole::Config { class IScenePerformConfig; }

#define CLASS_1_22F1C03C7D6700DD_METHOD_1_82373233ED2DF7E1_OFFSET UNITYSDK_OFFSET(0x15B30410)

inline static constexpr unsigned int Class_1_22F1C03C7D6700DD_TypeDefinitionIndex = 74438;

class Class_1_22F1C03C7D6700DD : public ::System::Object
{
public:
	static ::System::Void Method_1_82373233ED2DF7E1(::MoleMole::Config::IScenePerformConfig* a1, ::Class_1_832D46E76C8F7302* a2, ::Class_0_16E4307DCC419505_416* a3, ::MoleMole::Config::CutSceneEndMode a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::IScenePerformConfig*, ::Class_1_832D46E76C8F7302*, ::Class_0_16E4307DCC419505_416*, ::MoleMole::Config::CutSceneEndMode))((::PBYTE)hIl2Cpp + CLASS_1_22F1C03C7D6700DD_METHOD_1_82373233ED2DF7E1_OFFSET))(a1, a2, a3, a4);
	}
};
