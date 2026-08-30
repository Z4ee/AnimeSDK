#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class ActiveTrackCamera; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_4643D03692F4BE85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F5A470)
#define CLASS_3_4643D03692F4BE85_METHOD_3_28A507BDCECE9FBF_OFFSET UNITYSDK_OFFSET(0x17F5B2A0)
#define CLASS_3_4643D03692F4BE85_METHOD_3_B3B73841DED54628_OFFSET UNITYSDK_OFFSET(0x17F5A9A0)
#define CLASS_3_4643D03692F4BE85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F5A630)
#define CLASS_3_4643D03692F4BE85__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5A440)

inline static constexpr unsigned int Class_3_4643D03692F4BE85_TypeDefinitionIndex = 58005;

class Class_3_4643D03692F4BE85 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveTrackCamera*>
{
public:
	::System::String* CENMHIGCEDG; // 0x28
	::System::String* MLHHKCCAOJK; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveTrackCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveTrackCamera*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_28A507BDCECE9FBF(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_METHOD_3_28A507BDCECE9FBF_OFFSET))(this, a1);
	}

	::System::Void Method_3_B3B73841DED54628(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_METHOD_3_B3B73841DED54628_OFFSET))(this, a1);
	}
};
