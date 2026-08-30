#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_849EE5CF9026AE9F;
namespace RPG::Client { class MonoDanmuItem; }

#define CLASS_1_6C2A1F68766EC597_METHOD_1_85742B04A1A51EF1_OFFSET UNITYSDK_OFFSET(0x180D5F80)
#define CLASS_1_6C2A1F68766EC597__CTOR_OFFSET UNITYSDK_OFFSET(0x180D60D0)

inline static constexpr unsigned int Class_1_6C2A1F68766EC597_TypeDefinitionIndex = 68908;

class Class_1_6C2A1F68766EC597 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2A1F68766EC597__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85742B04A1A51EF1(::RPG::Client::MonoDanmuItem* a1, ::Class_1_849EE5CF9026AE9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::Class_1_849EE5CF9026AE9F*))((::PBYTE)hIl2Cpp + CLASS_1_6C2A1F68766EC597_METHOD_1_85742B04A1A51EF1_OFFSET))(this, a1, a2);
	}
};
