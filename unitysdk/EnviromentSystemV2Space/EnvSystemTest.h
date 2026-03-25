#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1035C2B0)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_GETDATA_OFFSET UNITYSDK_OFFSET(0x1035C260)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1035C3E0)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1035C480)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_RENDER_OFFSET UNITYSDK_OFFSET(0x1035C200)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_SET_OFFSET UNITYSDK_OFFSET(0x1035C1B0)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_TESTUPDATESIMPLEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1035C4E0)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1035C370)
#define ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1035C520)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvSystemTest_TypeDefinitionIndex = 40244;

	class EnvSystemTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::CommandBuffer* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST__CTOR_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_SET_OFFSET))(this, a1);
		}

		::System::Void Render(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_GETDATA_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_ONDESTROY_OFFSET))(this);
		}

		::System::Void TestUpdateSimpleProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVSYSTEMTEST_TESTUPDATESIMPLEPROPERTY_OFFSET))(this);
		}
	};
}
