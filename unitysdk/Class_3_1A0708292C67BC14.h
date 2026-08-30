#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7CF36DB1DCE43BAF.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"

class Class_1_414BCDCDAD47B487;
class Class_1_B5A9DA083406A268;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define CLASS_3_1A0708292C67BC14_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x160D1410)
#define CLASS_3_1A0708292C67BC14__CTOR_OFFSET UNITYSDK_OFFSET(0x160D13D0)

inline static constexpr unsigned int Class_3_1A0708292C67BC14_TypeDefinitionIndex = 73789;

class Class_3_1A0708292C67BC14 : public ::Class_2_7CF36DB1DCE43BAF
{
public:
	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2, ::Class_1_414BCDCDAD47B487* a3, ::Class_1_B5A9DA083406A268* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55, ::Class_1_414BCDCDAD47B487*, ::Class_1_B5A9DA083406A268*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_1A0708292C67BC14__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A0708292C67BC14_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}
};
