#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_980FCF6039272C63_METHOD_1_49D4008461A7D804_OFFSET UNITYSDK_OFFSET(0x1D276390)
#define CLASS_1_980FCF6039272C63__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D276700)

inline static constexpr unsigned int Class_1_980FCF6039272C63_TypeDefinitionIndex = 23584;

class Class_1_980FCF6039272C63 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*>*>** StaticGet_MGJGAOOJLCJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980FCF6039272C63_TypeDefinitionIndex)->GetStaticField(0x3B320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_49D4008461A7D804(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63_METHOD_1_49D4008461A7D804_OFFSET))(a1, a2);
	}
};
