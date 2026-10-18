#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Object.h"

class Class_1_C3A033C60E10FDC7;
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_029AD5385E36F1C7_CLEAR_OFFSET UNITYSDK_OFFSET(0xD74AC10)
#define CLASS_1_029AD5385E36F1C7__CTOR_OFFSET UNITYSDK_OFFSET(0xD74ACB0)

inline static constexpr unsigned int Class_1_029AD5385E36F1C7_TypeDefinitionIndex = 69533;

class Class_1_029AD5385E36F1C7 : public ::System::Object
{
public:
	::Cinemachine::CinemachineBlendDefinition MCOFPKAILOE; // 0x10
	::RPG::GameCore::VCameraNoiseChange* FNPOMHPFKAO; // 0x20
	::Class_1_C3A033C60E10FDC7* GKFANPLKAJP; // 0x28
	::RPG::Client::CameraResultData LNGJLADJKKD; // 0x30
	::System::Single IEHPFADHJFD; // 0xC8
	::System::Single MHGCHGAMNJK; // 0xCC
	::Cinemachine::CinemachineVirtualCameraBase_BlendHint DBEIPBLOIPC; // 0xD0
	::System::Boolean FKIFAEOAGLL; // 0xD4
	::System::Single IFEPJHGNCOI; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029AD5385E36F1C7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029AD5385E36F1C7_CLEAR_OFFSET))(this);
	}
};
