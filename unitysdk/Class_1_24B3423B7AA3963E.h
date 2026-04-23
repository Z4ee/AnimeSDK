#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_24B3423B7AA3963E_METHOD_1_3F1E500F1FDCC2B3_OFFSET UNITYSDK_OFFSET(0x991EDD0)
#define CLASS_1_24B3423B7AA3963E_METHOD_1_FA9D40824DFA0A31_OFFSET UNITYSDK_OFFSET(0x991ECD0)
#define CLASS_1_24B3423B7AA3963E__CTOR_OFFSET UNITYSDK_OFFSET(0x991EE20)

inline static constexpr unsigned int Class_1_24B3423B7AA3963E_TypeDefinitionIndex = 64051;

class Class_1_24B3423B7AA3963E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B3423B7AA3963E__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::StageConfig* Method_1_FA9D40824DFA0A31(::System::String* a1)
	{
		return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24B3423B7AA3963E_METHOD_1_FA9D40824DFA0A31_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_3F1E500F1FDCC2B3(::System::String* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24B3423B7AA3963E_METHOD_1_3F1E500F1FDCC2B3_OFFSET))(a1);
	}
};
