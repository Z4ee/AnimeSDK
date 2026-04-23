#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_970012D1F194FB21_OFFSET UNITYSDK_OFFSET(0x18EA8560)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_E721789180083112_OFFSET UNITYSDK_OFFSET(0x18EA8520)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA8550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingSceneObjLodScaleVolumeComponentData_TypeDefinitionIndex = 18148;

	class StreamingSceneObjLodScaleVolumeComponentData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Single>* SceneObjLodScale; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* FullSceneObjLodScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E721789180083112(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_E721789180083112_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_970012D1F194FB21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_970012D1F194FB21_OFFSET))(a1, a2);
		}
	};
}
