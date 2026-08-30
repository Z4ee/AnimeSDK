#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7CF36DB1DCE43BAF.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"

class Class_1_414BCDCDAD47B487;
class Class_1_4D552DECB7AE0271;
class Class_1_B5A9DA083406A268;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define CLASS_3_160506C0106F1C16_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xC105750)
#define CLASS_3_160506C0106F1C16_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0xC1055F0)
#define CLASS_3_160506C0106F1C16__CTOR_OFFSET UNITYSDK_OFFSET(0xC1055B0)

inline static constexpr unsigned int Class_3_160506C0106F1C16_TypeDefinitionIndex = 73695;

class Class_3_160506C0106F1C16 : public ::Class_2_7CF36DB1DCE43BAF
{
public:
	::Class_1_4D552DECB7AE0271* PBLAJAEOCCM; // 0xD8
	::Class_1_4D552DECB7AE0271* PNMDLMPDMCL; // 0xE0

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2, ::Class_1_414BCDCDAD47B487* a3, ::Class_1_B5A9DA083406A268* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55, ::Class_1_414BCDCDAD47B487*, ::Class_1_B5A9DA083406A268*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_160506C0106F1C16__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* GetAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_160506C0106F1C16_GETASSETPATH_OFFSET))(this, a1);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_160506C0106F1C16_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}
};
