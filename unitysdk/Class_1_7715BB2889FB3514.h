#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7715BB2889FB3514_METHOD_1_F1B5ACE527ED55C3_OFFSET UNITYSDK_OFFSET(0x1C0D2830)
#define CLASS_1_7715BB2889FB3514__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0D2BA0)

inline static constexpr unsigned int Class_1_7715BB2889FB3514_TypeDefinitionIndex = 23002;

class Class_1_7715BB2889FB3514 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7715BB2889FB3514_TypeDefinitionIndex)->GetStaticField(0x46B80);
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
