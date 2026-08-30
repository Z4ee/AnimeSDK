#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }
namespace RPG::GameCore { class StageLightData; }

#define RPG_GAMECORE_STAGEPVSDATA_METHOD_2_2608809C218F6233_OFFSET UNITYSDK_OFFSET(0x1D55A550)
#define RPG_GAMECORE_STAGEPVSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55A9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSData_TypeDefinitionIndex = 18947;

	class StagePVSData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsUseBinaryData; // 0x10
		::System::Int64 CodeVersion; // 0x18
		::System::Boolean IsUseVFS; // 0x20
		::System::Int32 VFSClusterSize; // 0x24
		::System::Int64 SceneHashVersion; // 0x28
		::System::Int64 PatchVersion; // 0x30
		::System::Int64 LightDataVersion; // 0x38
		::Il2CppArray<::RPG::GameCore::StageLightData*>* LightDatas; // 0x40
		::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* CullingIndexList; // 0x48
		::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>* PreloadLodList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2608809C218F6233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSDATA_METHOD_2_2608809C218F6233_OFFSET))(a1, a2);
		}
	};
}
