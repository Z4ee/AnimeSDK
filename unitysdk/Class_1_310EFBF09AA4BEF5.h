#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneStoreLight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_310EFBF09AA4BEF5_METHOD_1_2CD60EFA33DDD824_OFFSET UNITYSDK_OFFSET(0x16137A70)
#define CLASS_1_310EFBF09AA4BEF5_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x16137BB0)
#define CLASS_1_310EFBF09AA4BEF5_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x16137AC0)

inline static constexpr unsigned int Class_1_310EFBF09AA4BEF5_TypeDefinitionIndex = 84200;

class Class_1_310EFBF09AA4BEF5 : public ::System::Object
{
public:
	static ::MoleMole::ConfigBigSceneStoreLight** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigBigSceneStoreLight**)Il2CppClass::FromTypeDefinitionIndex(Class_1_310EFBF09AA4BEF5_TypeDefinitionIndex)->GetStaticField(0x34750);
	}

	static ::MoleMole::ConfigBigSceneStoreLight* Method_1_2CD60EFA33DDD824()
	{
		return ((::MoleMole::ConfigBigSceneStoreLight*(*)())((::PBYTE)hIl2Cpp + CLASS_1_310EFBF09AA4BEF5_METHOD_1_2CD60EFA33DDD824_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_310EFBF09AA4BEF5_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_310EFBF09AA4BEF5_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};
