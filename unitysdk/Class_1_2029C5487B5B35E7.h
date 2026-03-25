#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_2029C5487B5B35E7_METHOD_1_30A0E6125D7F2BE0_OFFSET UNITYSDK_OFFSET(0x1194E6A0)
#define CLASS_1_2029C5487B5B35E7_METHOD_1_3F1E500F1FDCC2B3_OFFSET UNITYSDK_OFFSET(0x1194E760)
#define CLASS_1_2029C5487B5B35E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1194E7B0)

inline static constexpr unsigned int Class_1_2029C5487B5B35E7_TypeDefinitionIndex = 56805;

class Class_1_2029C5487B5B35E7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2029C5487B5B35E7__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::StageConfig* Method_1_30A0E6125D7F2BE0(::System::String* a1)
	{
		return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2029C5487B5B35E7_METHOD_1_30A0E6125D7F2BE0_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_3F1E500F1FDCC2B3(::System::String* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2029C5487B5B35E7_METHOD_1_3F1E500F1FDCC2B3_OFFSET))(a1);
	}
};
