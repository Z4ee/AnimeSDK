#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace MoleMole { class ActivityRhythmClickBeatmapConfig_BeatMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D12F60BF5D6DA45F_METHOD_1_11ADF62AA096DE37_OFFSET UNITYSDK_OFFSET(0xE905880)
#define CLASS_1_D12F60BF5D6DA45F_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0xE9052B0)
#define CLASS_1_D12F60BF5D6DA45F_METHOD_1_4009E1B29ADD0D9B_OFFSET UNITYSDK_OFFSET(0xE9053A0)
#define CLASS_1_D12F60BF5D6DA45F_METHOD_1_C31A7006A0AF02F8_OFFSET UNITYSDK_OFFSET(0xE9059A0)
#define CLASS_1_D12F60BF5D6DA45F__CTOR_OFFSET UNITYSDK_OFFSET(0xE9052A0)

inline static constexpr unsigned int Class_1_D12F60BF5D6DA45F_TypeDefinitionIndex = 51451;

class Class_1_D12F60BF5D6DA45F : public ::System::Object
{
public:
	static ::MoleMole::ActivityRhythmClickBeatmapConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::ActivityRhythmClickBeatmapConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D12F60BF5D6DA45F_TypeDefinitionIndex)->GetStaticField(0x36880);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4009E1B29ADD0D9B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_METHOD_1_4009E1B29ADD0D9B_OFFSET))(a1, a2);
	}

	static ::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap* Method_1_11ADF62AA096DE37(::System::String* a1)
	{
		return ((::MoleMole::ActivityRhythmClickBeatmapConfig_BeatMap*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_METHOD_1_11ADF62AA096DE37_OFFSET))(a1);
	}

	static ::System::Single Method_1_C31A7006A0AF02F8(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D12F60BF5D6DA45F_METHOD_1_C31A7006A0AF02F8_OFFSET))(a1);
	}
};
