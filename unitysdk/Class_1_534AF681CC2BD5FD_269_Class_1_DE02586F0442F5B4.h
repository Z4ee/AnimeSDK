#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_269_Enum_3_8A55E0BCBFEC0E78.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x156D4A00)
#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4_METHOD_1_6E21175A57A8DF1F_OFFSET UNITYSDK_OFFSET(0x156D4A10)
#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x156D4A60)
#define CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4__CTOR_OFFSET UNITYSDK_OFFSET(0x156D4A50)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_269_Class_1_DE02586F0442F5B4_TypeDefinitionIndex = 66819;

class Class_1_534AF681CC2BD5FD_269_Class_1_DE02586F0442F5B4 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_3; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Nullable_1<::MoleMole::Vector2Int> Field_1_5; // 0x24
	::System::Single Field_1_0; // 0x30
	::System::Single Field_1_1; // 0x34
	::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType Field_1_6; // 0x38
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_534AF681CC2BD5FD_269_Enum_3_8A55E0BCBFEC0E78 Method_1_6E21175A57A8DF1F()
	{
		return ((::Class_1_534AF681CC2BD5FD_269_Enum_3_8A55E0BCBFEC0E78(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4_METHOD_1_6E21175A57A8DF1F_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_269_CLASS_1_DE02586F0442F5B4_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
