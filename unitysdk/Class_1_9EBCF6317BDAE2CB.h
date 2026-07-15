#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EBCF6317BDAE2CB_METHOD_1_18E03BDC524B0DBE_OFFSET UNITYSDK_OFFSET(0x193CA860)
#define CLASS_1_9EBCF6317BDAE2CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x193CABD0)

inline static constexpr unsigned int Class_1_9EBCF6317BDAE2CB_TypeDefinitionIndex = 23006;

class Class_1_9EBCF6317BDAE2CB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EBCF6317BDAE2CB_TypeDefinitionIndex)->GetStaticField(0x67F00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_18E03BDC524B0DBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB_METHOD_1_18E03BDC524B0DBE_OFFSET))(a1, a2);
	}
};
