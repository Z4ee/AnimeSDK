#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Object; }

#define RPGTOOLS_TIMELINE_ARCHIVEASSET_GET_BASETARGET_OFFSET UNITYSDK_OFFSET(0xE813100)
#define RPGTOOLS_TIMELINE_ARCHIVEASSET_METHOD_3_EE73EC1D0D6BA806_OFFSET UNITYSDK_OFFSET(0xE813120)
#define RPGTOOLS_TIMELINE_ARCHIVEASSET_SET_BASETARGET_OFFSET UNITYSDK_OFFSET(0xE813110)
#define RPGTOOLS_TIMELINE_ARCHIVEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xE8131A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ArchiveAsset_TypeDefinitionIndex = 48960;

	class ArchiveAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Object* _BaseTarget_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_BaseTarget()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_GET_BASETARGET_OFFSET))(this);
		}

		::System::Void set_BaseTarget(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_SET_BASETARGET_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_EE73EC1D0D6BA806(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_METHOD_3_EE73EC1D0D6BA806_OFFSET))(this, a1);
		}
	};
}
