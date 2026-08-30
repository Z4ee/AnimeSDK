#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_METHOD_4_B3EF8C2F846C181F_OFFSET UNITYSDK_OFFSET(0x1D4CE840)
#define RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_METHOD_4_EA322619610C8384_OFFSET UNITYSDK_OFFSET(0x1D4CE800)
#define RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CE830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtMain_TransmitToTarget_TypeDefinitionIndex = 23802;

	class ST_RtMain_TransmitToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA322619610C8384(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtMain_TransmitToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtMain_TransmitToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_METHOD_4_EA322619610C8384_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3EF8C2F846C181F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtMain_TransmitToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtMain_TransmitToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_TRANSMITTOTARGET_METHOD_4_B3EF8C2F846C181F_OFFSET))(a1, a2);
		}
	};
}
