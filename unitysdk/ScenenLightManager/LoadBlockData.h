#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENENLIGHTMANAGER_LOADBLOCKDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xD07D070)
#define SCENENLIGHTMANAGER_LOADBLOCKDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD07D110)
#define SCENENLIGHTMANAGER_LOADBLOCKDATA_METHOD_1_277FDD755CB452A1_OFFSET UNITYSDK_OFFSET(0xD07D020)
#define SCENENLIGHTMANAGER_LOADBLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD07D010)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LoadBlockData_TypeDefinitionIndex = 46337;

	class LoadBlockData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOADBLOCKDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_277FDD755CB452A1(::ScenenLightManager::LoadBlockData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LoadBlockData*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOADBLOCKDATA_METHOD_1_277FDD755CB452A1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOADBLOCKDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOADBLOCKDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
