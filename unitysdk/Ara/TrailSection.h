#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ARA_TRAILSECTION_CIRCLEPRESET_OFFSET UNITYSDK_OFFSET(0x1F6435F0)
#define ARA_TRAILSECTION_GET_SEGMENTS_OFFSET UNITYSDK_OFFSET(0x1F641EB0)
#define ARA_TRAILSECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F643580)
#define ARA_TRAILSECTION_SNAPTO_OFFSET UNITYSDK_OFFSET(0x1F643710)
#define ARA_TRAILSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643760)

namespace Ara
{
	inline static constexpr unsigned int TrailSection_TypeDefinitionIndex = 33569;

	class TrailSection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* vertices; // 0x18
		::System::Int32 snapX; // 0x20
		::System::Int32 snapY; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TRAILSECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Segments()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TRAILSECTION_GET_SEGMENTS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TRAILSECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void CirclePreset(::System::Int32 segments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ARA_TRAILSECTION_CIRCLEPRESET_OFFSET))(this, segments);
		}

		static ::System::Int32 SnapTo(::System::Single val, ::System::Int32 snapInterval, ::System::Int32 threshold)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ARA_TRAILSECTION_SNAPTO_OFFSET))(val, snapInterval, threshold);
		}
	};
}
