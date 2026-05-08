#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_219B2CD5FA4A8100.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFont; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define CLASS_1_9C7F17E75E5F0540_METHOD_1_15C9989DE18E26D8_OFFSET UNITYSDK_OFFSET(0x100FCC30)
#define CLASS_1_9C7F17E75E5F0540_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x100FC180)
#define CLASS_1_9C7F17E75E5F0540_METHOD_1_BB751227C5BF2F17_OFFSET UNITYSDK_OFFSET(0x100FC4B0)
#define CLASS_1_9C7F17E75E5F0540_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x100FC100)
#define CLASS_1_9C7F17E75E5F0540_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x100FC3A0)
#define CLASS_1_9C7F17E75E5F0540__CCTOR_OFFSET UNITYSDK_OFFSET(0x100FC060)

inline static constexpr unsigned int Class_1_9C7F17E75E5F0540_TypeDefinitionIndex = 56868;

class Class_1_9C7F17E75E5F0540 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C7F17E75E5F0540_TypeDefinitionIndex)->GetStaticField(0x3DAF0);
	}
	static ::MoleMole::Config::ConfigUIFont** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigUIFont**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C7F17E75E5F0540_TypeDefinitionIndex)->GetStaticField(0x3DAF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_BB751227C5BF2F17(::System::String* a1, ::MoleMole::LanguageType a2, ::Enum_3_219B2CD5FA4A8100 a3, ::UnityEngine::Font*& a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::LanguageType, ::Enum_3_219B2CD5FA4A8100, ::UnityEngine::Font*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_METHOD_1_BB751227C5BF2F17_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Config::ConfigUIFont* Method_1_15C9989DE18E26D8()
	{
		return ((::MoleMole::Config::ConfigUIFont*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C7F17E75E5F0540_METHOD_1_15C9989DE18E26D8_OFFSET))();
	}
};
