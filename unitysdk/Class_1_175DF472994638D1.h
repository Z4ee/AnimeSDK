#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"
#include "unitysdk/Struct_2_85C948A9FFE82053.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace RPG::Client { class LongPressEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define CLASS_1_175DF472994638D1_METHOD_1_1C9F1355039F33BF_OFFSET UNITYSDK_OFFSET(0x1629F0E0)

inline static constexpr unsigned int Class_1_175DF472994638D1_TypeDefinitionIndex = 50209;

class Class_1_175DF472994638D1 : public ::System::Object
{
public:
	static ::RPG::Client::LongPressEvent* Method_1_1C9F1355039F33BF(::RPG::Client::AnimatorButton* a1, ::System::Nullable_1<::System::Single> a2, ::System::Nullable_1<::System::Single> a3, ::System::Nullable_1<::System::Single> a4)
	{
		return ((::RPG::Client::LongPressEvent*(*)(::RPG::Client::AnimatorButton*, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_175DF472994638D1_METHOD_1_1C9F1355039F33BF_OFFSET))(a1, a2, a3, a4);
	}
};
