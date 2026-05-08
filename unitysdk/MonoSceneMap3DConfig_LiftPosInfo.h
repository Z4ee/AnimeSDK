#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Map3DLiftRenderer_ELiftType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MONOSCENEMAP3DCONFIG_LIFTPOSINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x11342C50)
#define MONOSCENEMAP3DCONFIG_LIFTPOSINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x11329120)
#define MONOSCENEMAP3DCONFIG_LIFTPOSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11342D40)
#define MONOSCENEMAP3DCONFIG_LIFTPOSINFO___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x11342D50)

inline static constexpr unsigned int MonoSceneMap3DConfig_LiftPosInfo_TypeDefinitionIndex = 66979;

class MonoSceneMap3DConfig_LiftPosInfo : public ::System::Object
{
public:
	::System::String* Icon; // 0x10
	::System::Int32 SourceAreaId; // 0x18
	::UnityEngine::Vector3 Pos1; // 0x1C
	::UnityEngine::Vector3 Pos2; // 0x28
	::Map3DLiftRenderer_ELiftType LiftType; // 0x34
	::System::Int32 ForceLayerIndex; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_LIFTPOSINFO__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::MonoSceneMap3DConfig_LiftPosInfo* other)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoSceneMap3DConfig_LiftPosInfo*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_LIFTPOSINFO_EQUALS_OFFSET))(this, other);
	}

	::System::Boolean Equals_1(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_LIFTPOSINFO_EQUALS_1_OFFSET))(this, obj);
	}

	::System::Boolean __base_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_LIFTPOSINFO___BASE_EQUALS_OFFSET))(this, P0);
	}
};
