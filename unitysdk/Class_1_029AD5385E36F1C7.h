#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Object.h"

class Class_1_C3A033C60E10FDC7;
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_029AD5385E36F1C7_CLEAR_OFFSET UNITYSDK_OFFSET(0xD7E34F0)
#define CLASS_1_029AD5385E36F1C7__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E3580)

inline static constexpr unsigned int Class_1_029AD5385E36F1C7_TypeDefinitionIndex = 69497;

class Class_1_029AD5385E36F1C7 : public ::System::Object
{
public:
	::RPG::Client::CameraResultData LNGJLADJKKD; // 0x10
	::Cinemachine::CinemachineBlendDefinition MCOFPKAILOE; // 0xA8
	::RPG::GameCore::VCameraNoiseChange* FNPOMHPFKAO; // 0xB8
	::Class_1_C3A033C60E10FDC7* GKFANPLKAJP; // 0xC0
	::System::Boolean FKIFAEOAGLL; // 0xC8
	::System::Single IEHPFADHJFD; // 0xCC
	::System::Single MHGCHGAMNJK; // 0xD0
	::Cinemachine::CinemachineVirtualCameraBase_BlendHint DBEIPBLOIPC; // 0xD4
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
