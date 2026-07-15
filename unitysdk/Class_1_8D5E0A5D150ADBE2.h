#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_8D5E0A5D150ADBE2_METHOD_1_5D745982D0068057_OFFSET UNITYSDK_OFFSET(0x14B146B0)
#define CLASS_1_8D5E0A5D150ADBE2_METHOD_1_BF9149AA06C98941_OFFSET UNITYSDK_OFFSET(0x14B14560)
#define CLASS_1_8D5E0A5D150ADBE2__CTOR_OFFSET UNITYSDK_OFFSET(0x14B14770)

inline static constexpr unsigned int Class_1_8D5E0A5D150ADBE2_TypeDefinitionIndex = 66377;

class Class_1_8D5E0A5D150ADBE2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D5E0A5D150ADBE2__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::StageConfig* Method_1_BF9149AA06C98941(::System::String* a1)
	{
		return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D5E0A5D150ADBE2_METHOD_1_BF9149AA06C98941_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_5D745982D0068057(::System::String* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D5E0A5D150ADBE2_METHOD_1_5D745982D0068057_OFFSET))(a1);
	}
};
