#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENENLIGHTMANAGER_TUP_EQUALS_OFFSET UNITYSDK_OFFSET(0xABC3770)
#define SCENENLIGHTMANAGER_TUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xABC3810)
#define SCENENLIGHTMANAGER_TUP_METHOD_1_AF094A37CE984E72_OFFSET UNITYSDK_OFFSET(0xABC37F0)
#define SCENENLIGHTMANAGER_TUP__CTOR_OFFSET UNITYSDK_OFFSET(0xABC3760)

namespace ScenenLightManager
{
	inline static constexpr unsigned int Tup_TypeDefinitionIndex = 39853;

	class Tup : public ::System::Object
	{
	public:
		::System::Int64 sid; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_AF094A37CE984E72(::ScenenLightManager::Tup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::Tup*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_METHOD_1_AF094A37CE984E72_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_GETHASHCODE_OFFSET))(this);
		}
	};
}
