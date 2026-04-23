#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTMEMBERTRANSFORMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F42B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberTransformInfo_TypeDefinitionIndex = 59706;

	class GridFightMemberTransformInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Transform; // 0x10
		::System::Boolean IsPerspective; // 0x18
		::System::UInt32 UID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERTRANSFORMINFO__CTOR_OFFSET))(this);
		}
	};
}
