#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_0EFFD3AD387F6419_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x169AFD80)
#define CLASS_1_0EFFD3AD387F6419_METHOD_1_67BE74AF111386EC_OFFSET UNITYSDK_OFFSET(0x169AFCB0)
#define CLASS_1_0EFFD3AD387F6419_METHOD_1_DCAFE5C3C1A6FDA4_OFFSET UNITYSDK_OFFSET(0x169AFC60)
#define CLASS_1_0EFFD3AD387F6419__CTOR_OFFSET UNITYSDK_OFFSET(0x169AFD70)

inline static constexpr unsigned int Class_1_0EFFD3AD387F6419_TypeDefinitionIndex = 60149;

class Class_1_0EFFD3AD387F6419 : public ::System::Object
{
public:
	::RPG::Client::MapMappingInfoData* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EFFD3AD387F6419__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCAFE5C3C1A6FDA4(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_0EFFD3AD387F6419_METHOD_1_DCAFE5C3C1A6FDA4_OFFSET))(this, a1);
	}

	static ::Class_1_0EFFD3AD387F6419* Method_1_67BE74AF111386EC(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_0EFFD3AD387F6419*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_0EFFD3AD387F6419_METHOD_1_67BE74AF111386EC_OFFSET))(a1);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EFFD3AD387F6419_GET_ICONTYPE_OFFSET))(this);
	}
};
