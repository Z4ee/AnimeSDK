#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_73A10F032383DACF;
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define CLASS_4_7F2959351A53A590_METHOD_4_8E9678543C58A677_OFFSET UNITYSDK_OFFSET(0x158FDCA0)
#define CLASS_4_7F2959351A53A590__CTOR_OFFSET UNITYSDK_OFFSET(0x158FDC90)

inline static constexpr unsigned int Class_4_7F2959351A53A590_TypeDefinitionIndex = 77168;

class Class_4_7F2959351A53A590 : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_73A10F032383DACF* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_73A10F032383DACF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_73A10F032383DACF*))((::PBYTE)hIl2Cpp + CLASS_4_7F2959351A53A590__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_8E9678543C58A677(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_7F2959351A53A590_METHOD_4_8E9678543C58A677_OFFSET))(this, a1);
	}
};
