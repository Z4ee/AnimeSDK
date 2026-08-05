#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig_Item.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E23749057242FAD1_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x1194F6A0)
#define CLASS_1_E23749057242FAD1_METHOD_1_72112191763F9A6A_1_OFFSET UNITYSDK_OFFSET(0x1194F7A0)
#define CLASS_1_E23749057242FAD1_METHOD_1_72112191763F9A6A_2_OFFSET UNITYSDK_OFFSET(0x1194F7F0)
#define CLASS_1_E23749057242FAD1_METHOD_1_72112191763F9A6A_OFFSET UNITYSDK_OFFSET(0x1194F650)
#define CLASS_1_E23749057242FAD1_METHOD_1_CC20D04BEE066205_OFFSET UNITYSDK_OFFSET(0x1194F360)
#define CLASS_1_E23749057242FAD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1194F350)

inline static constexpr unsigned int Class_1_E23749057242FAD1_TypeDefinitionIndex = 48312;

class Class_1_E23749057242FAD1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* Field_1_11; // 0x18
	::System::Single Field_1_10; // 0x20
	::System::Single Field_1_8; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::Boolean Field_1_0; // 0x2C
	::MoleMole::Config::CutSceneEndMode Field_1_4; // 0x2D
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_9; // 0x34
	::System::Single Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23749057242FAD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC20D04BEE066205(::MoleMole::Config::SceneChessboardCutSceneConfig* a1, ::MoleMole::Config::ScenePerformConfig* a2, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*, ::MoleMole::Config::ScenePerformConfig*, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E23749057242FAD1_METHOD_1_CC20D04BEE066205_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23749057242FAD1_METHOD_1_72112191763F9A6A_OFFSET))(this);
	}

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_416* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + CLASS_1_E23749057242FAD1_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A_1()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23749057242FAD1_METHOD_1_72112191763F9A6A_1_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A_2()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23749057242FAD1_METHOD_1_72112191763F9A6A_2_OFFSET))(this);
	}
};
