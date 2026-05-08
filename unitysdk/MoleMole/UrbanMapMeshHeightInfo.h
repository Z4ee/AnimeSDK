#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_URBANMAPMESHHEIGHTINFO_METHOD_1_A5E72182E846274E_OFFSET UNITYSDK_OFFSET(0xF63DBE0)
#define MOLEMOLE_URBANMAPMESHHEIGHTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF63DB80)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapMeshHeightInfo_TypeDefinitionIndex = 60843;

	class UrbanMapMeshHeightInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 GridSize; // 0x10
		::System::Int32 Width; // 0x18
		::System::Int32 Height; // 0x1C
		::System::Collections::Generic::List_1<::System::Single>* LocalHeightMap; // 0x20
		::UnityEngine::Bounds Bounds; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPMESHHEIGHTINFO__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A5E72182E846274E(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPMESHHEIGHTINFO_METHOD_1_A5E72182E846274E_OFFSET))(this, a1, a2);
		}
	};
}
