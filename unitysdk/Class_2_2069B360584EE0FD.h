#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47939AE85467CAEB.h"

namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2069B360584EE0FD_METHOD_2_0A1003A1CD2118F0_OFFSET UNITYSDK_OFFSET(0x17204E60)
#define CLASS_2_2069B360584EE0FD_METHOD_2_6EAD389C97F97CBE_OFFSET UNITYSDK_OFFSET(0x17204F60)
#define CLASS_2_2069B360584EE0FD_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x17204E10)
#define CLASS_2_2069B360584EE0FD_METHOD_2_8542E37E74FDE1B5_1_OFFSET UNITYSDK_OFFSET(0x17204D90)
#define CLASS_2_2069B360584EE0FD_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x17204D10)
#define CLASS_2_2069B360584EE0FD__CTOR_OFFSET UNITYSDK_OFFSET(0x17204FF0)

inline static constexpr unsigned int Class_2_2069B360584EE0FD_TypeDefinitionIndex = 71964;

class Class_2_2069B360584EE0FD : public ::Class_1_47939AE85467CAEB
{
public:
	::RPG::Client::GameObjectAudio* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_8542E37E74FDE1B5_1_OFFSET))(this);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_0A1003A1CD2118F0(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_0A1003A1CD2118F0_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityHipplenInteractInfoRow* Method_2_6EAD389C97F97CBE()
	{
		return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_6EAD389C97F97CBE_OFFSET))(this);
	}
};
