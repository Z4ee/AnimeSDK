#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class Mono2dMapData_IconInfoGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONO2DMAPDATA_GETICONSCALE_OFFSET UNITYSDK_OFFSET(0x1418DDA0)
#define MOLEMOLE_MONO2DMAPDATA_GETPOS_OFFSET UNITYSDK_OFFSET(0x1418DAA0)
#define MOLEMOLE_MONO2DMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1418E0B0)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_TypeDefinitionIndex = 67190;

	class Mono2dMapData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Mono2dMapData_IconInfoGroup*>* IconInfoGroups; // 0x18
		::System::Single FirstFloorViewOffsetRate; // 0x20
		::System::Single SecondFloorViewOffsetRate; // 0x24
		::System::Single ThirdFloorViewOffsetRate; // 0x28
		::System::Single FirstFloorViewOffsetMax; // 0x2C
		::System::Single SecondFloorViewOffsetMax; // 0x30
		::System::Single ThirdFloorViewOffsetMax; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPos(::Enum_3_6A96CF8852C977C2 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::Enum_3_6A96CF8852C977C2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_GETPOS_OFFSET))(this, a1, a2);
		}

		::System::Single GetIconScale(::Enum_3_6A96CF8852C977C2 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_6A96CF8852C977C2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_GETICONSCALE_OFFSET))(this, a1, a2);
		}
	};
}
