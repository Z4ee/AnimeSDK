#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class IScenePerformConfig; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1B8E1817CBAF873_METHOD_1_175D0F138C9146A8_OFFSET UNITYSDK_OFFSET(0x11242A60)
#define CLASS_1_A1B8E1817CBAF873_METHOD_1_1DDF50EB3A3ABFE3_OFFSET UNITYSDK_OFFSET(0x11242620)
#define CLASS_1_A1B8E1817CBAF873_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x11242840)
#define CLASS_1_A1B8E1817CBAF873_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x11242C80)
#define CLASS_1_A1B8E1817CBAF873_METHOD_1_693CB3DB7BF744D5_OFFSET UNITYSDK_OFFSET(0x11242C70)
#define CLASS_1_A1B8E1817CBAF873_METHOD_1_99F6001B7FAA6B08_OFFSET UNITYSDK_OFFSET(0x11242F80)
#define CLASS_1_A1B8E1817CBAF873_METHOD_1_AAB963F79BCFEF86_OFFSET UNITYSDK_OFFSET(0x11242D80)

inline static constexpr unsigned int Class_1_A1B8E1817CBAF873_TypeDefinitionIndex = 79766;

class Class_1_A1B8E1817CBAF873 : public ::System::Object
{
public:
	static ::MoleMole::Config::ScenePerformConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ScenePerformConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1B8E1817CBAF873_TypeDefinitionIndex)->GetStaticField(0x30270);
	}

	static ::MoleMole::Config::CutScenePerformConfig* Method_1_1DDF50EB3A3ABFE3(::System::String* a1)
	{
		return ((::MoleMole::Config::CutScenePerformConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_1DDF50EB3A3ABFE3_OFFSET))(a1);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::SceneAvatarCutSceneConfig* Method_1_175D0F138C9146A8(::System::Int32 a1, ::MoleMole::Level::OverrideScenePerformDelayConfig& a2)
	{
		return ((::MoleMole::Config::SceneAvatarCutSceneConfig*(*)(::System::Int32, ::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_175D0F138C9146A8_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ScenePerformConfig* Method_1_693CB3DB7BF744D5()
	{
		return ((::MoleMole::Config::ScenePerformConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_693CB3DB7BF744D5_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::SceneEntityCutSceneConfig* Method_1_AAB963F79BCFEF86(::System::Int32 a1)
	{
		return ((::MoleMole::Config::SceneEntityCutSceneConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_AAB963F79BCFEF86_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>* Method_1_99F6001B7FAA6B08(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_METHOD_1_99F6001B7FAA6B08_OFFSET))(a1);
	}
};
