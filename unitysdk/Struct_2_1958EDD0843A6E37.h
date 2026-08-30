#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37_ChunkAccessor_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_1958EDD0843A6E37_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1CF02A80)

inline static constexpr unsigned int Struct_2_1958EDD0843A6E37_TypeDefinitionIndex = 10349;

struct alignas(8) Struct_2_1958EDD0843A6E37
{
	::Struct_2_1958EDD0843A6E37_ChunkAccessor_1<::System::Byte> NLJFNCBAGJB; // 0x10
	::Struct_2_1958EDD0843A6E37_ChunkAccessor_1<::RPG::GameCore::FixPoint> GKGAKIADDCD; // 0x18
	::Struct_2_1958EDD0843A6E37_ChunkAccessor_1<::System::Int32> NMBCAEAPIPN; // 0x20

	static ::Struct_2_1958EDD0843A6E37 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_1958EDD0843A6E37(*)())((::PBYTE)hIl2Cpp + STRUCT_2_1958EDD0843A6E37_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}
};
