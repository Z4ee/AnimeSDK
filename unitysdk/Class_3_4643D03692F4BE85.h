#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class ActiveTrackCamera; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_4643D03692F4BE85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10669910)
#define CLASS_3_4643D03692F4BE85_METHOD_3_7BE218703FD6B6D6_OFFSET UNITYSDK_OFFSET(0x1066A460)
#define CLASS_3_4643D03692F4BE85_METHOD_3_8F855BB4E892FC03_OFFSET UNITYSDK_OFFSET(0x10669E20)
#define CLASS_3_4643D03692F4BE85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10669AB0)
#define CLASS_3_4643D03692F4BE85__CTOR_OFFSET UNITYSDK_OFFSET(0x106698E0)
#define CLASS_3_4643D03692F4BE85___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1066A5C0)

inline static constexpr unsigned int Class_3_4643D03692F4BE85_TypeDefinitionIndex = 46637;

class Class_3_4643D03692F4BE85 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveTrackCamera*>
{
public:
	::System::String* Field_3_0; // 0x28
	::System::String* Field_3_1; // 0x30

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

	::System::Void Method_3_7BE218703FD6B6D6(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_METHOD_3_7BE218703FD6B6D6_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F855BB4E892FC03(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_METHOD_3_8F855BB4E892FC03_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
