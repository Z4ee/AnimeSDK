#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MiniMapZone; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MINIMAPLAYER_ADDZONE_OFFSET UNITYSDK_OFFSET(0xD6ABCE0)
#define RPG_CLIENT_MINIMAPLAYER_CONTAINS_OFFSET UNITYSDK_OFFSET(0xD6AC080)
#define RPG_CLIENT_MINIMAPLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6ABDF0)
#define RPG_CLIENT_MINIMAPLAYER_GETZONEBYID_OFFSET UNITYSDK_OFFSET(0xD6AC180)
#define RPG_CLIENT_MINIMAPLAYER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD6AC230)
#define RPG_CLIENT_MINIMAPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6ABC10)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapLayer_TypeDefinitionIndex = 60653;

	class MiniMapLayer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapZone*>* Zones; // 0x10
		::System::Single HeightMin; // 0x18
		::System::Single HeightMax; // 0x1C

		::System::Void _ctor(::RPG::Client::MiniMapZone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLAYER__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddZone(::RPG::Client::MiniMapZone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLAYER_ADDZONE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLAYER_CONTAINS_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapZone* GetZoneByID(::System::Int32 a1)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLAYER_GETZONEBYID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLAYER_GET_ISVALID_OFFSET))(this);
		}
	};
}
