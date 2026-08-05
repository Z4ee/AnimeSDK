#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneGroupEntityPriority; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80B81F3B157CB98D_METHOD_1_3E001678C2E0820F_OFFSET UNITYSDK_OFFSET(0x19505E70)
#define CLASS_1_80B81F3B157CB98D_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x19505A90)
#define CLASS_1_80B81F3B157CB98D_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x19505A40)
#define CLASS_1_80B81F3B157CB98D_METHOD_1_7A16D4EEB3CD7896_OFFSET UNITYSDK_OFFSET(0x19505B80)
#define CLASS_1_80B81F3B157CB98D_METHOD_1_E4DB3A9859FC26CC_OFFSET UNITYSDK_OFFSET(0x195055E0)
#define CLASS_1_80B81F3B157CB98D__CTOR_OFFSET UNITYSDK_OFFSET(0x195055D0)

inline static constexpr unsigned int Class_1_80B81F3B157CB98D_TypeDefinitionIndex = 70048;

class Class_1_80B81F3B157CB98D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80B81F3B157CB98D_TypeDefinitionIndex)->GetStaticField(0x35480);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E4DB3A9859FC26CC(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>*))((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_METHOD_1_E4DB3A9859FC26CC_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* Method_1_3E001678C2E0820F()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_METHOD_1_3E001678C2E0820F_OFFSET))();
	}

	static ::System::Void Method_1_7A16D4EEB3CD7896(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_METHOD_1_7A16D4EEB3CD7896_OFFSET))(a1, a2);
	}
};
