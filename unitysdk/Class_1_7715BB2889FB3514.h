#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7715BB2889FB3514_METHOD_1_F1B5ACE527ED55C3_OFFSET UNITYSDK_OFFSET(0x1DAE5690)
#define CLASS_1_7715BB2889FB3514__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAE5A00)

inline static constexpr unsigned int Class_1_7715BB2889FB3514_TypeDefinitionIndex = 23582;

class Class_1_7715BB2889FB3514 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>** StaticGet_MGJGAOOJLCJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7715BB2889FB3514_TypeDefinitionIndex)->GetStaticField(0x50E40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7715BB2889FB3514__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F1B5ACE527ED55C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_7715BB2889FB3514_METHOD_1_F1B5ACE527ED55C3_OFFSET))(a1, a2);
	}
};
