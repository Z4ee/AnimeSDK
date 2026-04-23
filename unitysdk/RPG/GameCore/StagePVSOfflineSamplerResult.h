#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StagePVSOfflineSamplerInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePVSOfflineVisiblityInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_METHOD_3_71C1C57FEE39926D_OFFSET UNITYSDK_OFFSET(0x18E8FF60)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_METHOD_3_CEDE3ACC4E089DF5_OFFSET UNITYSDK_OFFSET(0x18E8FD80)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8FD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineSamplerResult_TypeDefinitionIndex = 18206;

	class StagePVSOfflineSamplerResult : public ::RPG::GameCore::StagePVSOfflineSamplerInfo
	{
	public:
		::RPG::GameCore::StagePVSOfflineVisiblityInfo* SceneItemVisInfo; // 0x28
		::RPG::GameCore::StagePVSOfflineVisiblityInfo* LightVisInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71C1C57FEE39926D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineSamplerResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineSamplerResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_METHOD_3_71C1C57FEE39926D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEDE3ACC4E089DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineSamplerResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineSamplerResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERRESULT_METHOD_3_CEDE3ACC4E089DF5_OFFSET))(a1, a2);
		}
	};
}
