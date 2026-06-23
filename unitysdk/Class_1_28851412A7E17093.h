#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_28851412A7E17093_METHOD_1_AFAA17909F55D116_OFFSET UNITYSDK_OFFSET(0x13AA1540)
#define CLASS_1_28851412A7E17093_METHOD_1_E77B24F9A93470BE_OFFSET UNITYSDK_OFFSET(0x13AA1340)
#define CLASS_1_28851412A7E17093_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x13AA1250)

inline static constexpr unsigned int Class_1_28851412A7E17093_TypeDefinitionIndex = 68321;

class Class_1_28851412A7E17093 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28851412A7E17093_TypeDefinitionIndex)->GetStaticField(0x2FAA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28851412A7E17093_TypeDefinitionIndex)->GetStaticField(0x2FAA8);
	}
	static ::MoleMole::Config::ItemDropEffectSetting** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ItemDropEffectSetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28851412A7E17093_TypeDefinitionIndex)->GetStaticField(0x2FAB0);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ItemDropEffectSetting* Method_1_AFAA17909F55D116(::System::String* a1)
	{
		return ((::MoleMole::Config::ItemDropEffectSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_METHOD_1_AFAA17909F55D116_OFFSET))(a1);
	}

	static ::System::Void Method_1_E77B24F9A93470BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_METHOD_1_E77B24F9A93470BE_OFFSET))(a1, a2);
	}
};
