#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_73A10F032383DACF;
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define CLASS_4_B521E067AC131F60_METHOD_4_42EE4F69DC5D7633_OFFSET UNITYSDK_OFFSET(0x1997C8B0)
#define CLASS_4_B521E067AC131F60__CTOR_OFFSET UNITYSDK_OFFSET(0x1997C8A0)

inline static constexpr unsigned int Class_4_B521E067AC131F60_TypeDefinitionIndex = 77167;

class Class_4_B521E067AC131F60 : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_73A10F032383DACF* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_73A10F032383DACF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_73A10F032383DACF*))((::PBYTE)hIl2Cpp + CLASS_4_B521E067AC131F60__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_42EE4F69DC5D7633(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_B521E067AC131F60_METHOD_4_42EE4F69DC5D7633_OFFSET))(this, a1);
	}
};
