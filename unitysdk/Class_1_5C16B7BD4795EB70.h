#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDataKey; }

#define CLASS_1_5C16B7BD4795EB70_METHOD_1_56B8570C84158D2F_OFFSET UNITYSDK_OFFSET(0x12A7D660)
#define CLASS_1_5C16B7BD4795EB70_METHOD_1_DDF4604862C93538_OFFSET UNITYSDK_OFFSET(0x12A7D1B0)
#define CLASS_1_5C16B7BD4795EB70_METHOD_1_FA29E9501E0A8E55_OFFSET UNITYSDK_OFFSET(0x12A7D140)

inline static constexpr unsigned int Class_1_5C16B7BD4795EB70_TypeDefinitionIndex = 57971;

class Class_1_5C16B7BD4795EB70 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_FA29E9501E0A8E55(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5C16B7BD4795EB70_METHOD_1_FA29E9501E0A8E55_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_56B8570C84158D2F(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5C16B7BD4795EB70_METHOD_1_56B8570C84158D2F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DDF4604862C93538(::RPG::Client::MapDataKey* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + CLASS_1_5C16B7BD4795EB70_METHOD_1_DDF4604862C93538_OFFSET))(a1);
	}
};
