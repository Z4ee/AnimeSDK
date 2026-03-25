#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4DBF4263913B7C67.h"

namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2069B360584EE0FD_METHOD_2_0A1003A1CD2118F0_OFFSET UNITYSDK_OFFSET(0x115CBD30)
#define CLASS_2_2069B360584EE0FD_METHOD_2_5032D345693BCF5C_OFFSET UNITYSDK_OFFSET(0x115CC000)
#define CLASS_2_2069B360584EE0FD_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x115CBF30)
#define CLASS_2_2069B360584EE0FD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x115CBED0)
#define CLASS_2_2069B360584EE0FD_METHOD_2_8542E37E74FDE1B5_1_OFFSET UNITYSDK_OFFSET(0x115CBC60)
#define CLASS_2_2069B360584EE0FD_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x115CBBE0)
#define CLASS_2_2069B360584EE0FD_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x115CBCE0)
#define CLASS_2_2069B360584EE0FD_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x115CBF90)
#define CLASS_2_2069B360584EE0FD_METHOD_2_F21134421FE54DC7_OFFSET UNITYSDK_OFFSET(0x115CBE30)
#define CLASS_2_2069B360584EE0FD__CTOR_OFFSET UNITYSDK_OFFSET(0x115CBEC0)

inline static constexpr unsigned int Class_2_2069B360584EE0FD_TypeDefinitionIndex = 61719;

class Class_2_2069B360584EE0FD : public ::Class_1_4DBF4263913B7C67
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

	::System::Void Method_2_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_0A1003A1CD2118F0(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_0A1003A1CD2118F0_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivityHipplenInteractInfoRow* Method_2_F21134421FE54DC7()
	{
		return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_F21134421FE54DC7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::UnityEngine::GameObject* Method_2_5032D345693BCF5C(::System::String* P0)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2069B360584EE0FD_METHOD_2_5032D345693BCF5C_OFFSET))(this, P0);
	}
};
