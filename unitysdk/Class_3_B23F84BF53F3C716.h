#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PhotoGraphShowIdentifyResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B23F84BF53F3C716_METHOD_3_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x1559F5C0)
#define CLASS_3_B23F84BF53F3C716_METHOD_3_6F03F79E54DE121E_OFFSET UNITYSDK_OFFSET(0x1559F2E0)
#define CLASS_3_B23F84BF53F3C716_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1559F260)
#define CLASS_3_B23F84BF53F3C716__CTOR_OFFSET UNITYSDK_OFFSET(0x1559F230)

inline static constexpr unsigned int Class_3_B23F84BF53F3C716_TypeDefinitionIndex = 53352;

class Class_3_B23F84BF53F3C716 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PhotoGraphShowIdentifyResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_6F03F79E54DE121E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716_METHOD_3_6F03F79E54DE121E_OFFSET))(this);
	}

	::System::Void Method_3_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716_METHOD_3_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
