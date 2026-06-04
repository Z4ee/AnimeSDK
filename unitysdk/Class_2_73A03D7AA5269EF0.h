#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class GraphicSpineMultiTrackController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_73A03D7AA5269EF0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C51940)
#define CLASS_2_73A03D7AA5269EF0_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x13C51AF0)
#define CLASS_2_73A03D7AA5269EF0_METHOD_2_1ABF8BC0823E4C67_OFFSET UNITYSDK_OFFSET(0x13C51990)
#define CLASS_2_73A03D7AA5269EF0_METHOD_2_7E1D120AF1C796F4_OFFSET UNITYSDK_OFFSET(0x13C518E0)
#define CLASS_2_73A03D7AA5269EF0_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x13C51AA0)
#define CLASS_2_73A03D7AA5269EF0_METHOD_2_E1AA72CD77EB42E0_OFFSET UNITYSDK_OFFSET(0x13C51A40)
#define CLASS_2_73A03D7AA5269EF0_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x13C51B00)
#define CLASS_2_73A03D7AA5269EF0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C51B10)

inline static constexpr unsigned int Class_2_73A03D7AA5269EF0_TypeDefinitionIndex = 62347;

class Class_2_73A03D7AA5269EF0 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::GraphicSpineMultiTrackController* _Controller_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7E1D120AF1C796F4(::RPG::Client::GraphicSpineMultiTrackController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GraphicSpineMultiTrackController*))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_METHOD_2_7E1D120AF1C796F4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1ABF8BC0823E4C67(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_METHOD_2_1ABF8BC0823E4C67_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Boolean Method_2_E1AA72CD77EB42E0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_METHOD_2_E1AA72CD77EB42E0_OFFSET))(this, a1);
	}

	::RPG::Client::GraphicSpineMultiTrackController* get_Controller()
	{
		return ((::RPG::Client::GraphicSpineMultiTrackController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_GET_CONTROLLER_OFFSET))(this);
	}

	::System::Void set_Controller(::RPG::Client::GraphicSpineMultiTrackController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GraphicSpineMultiTrackController*))((::PBYTE)hIl2Cpp + CLASS_2_73A03D7AA5269EF0_SET_CONTROLLER_OFFSET))(this, a1);
	}
};
