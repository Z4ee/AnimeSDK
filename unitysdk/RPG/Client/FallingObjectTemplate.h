#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D00784C64067A6A7;
namespace RPG::Client { class FallingObjectTemplate_Class_1_BB32A9E6F97FB4FE; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_59597AEB8CE7B3F8_OFFSET UNITYSDK_OFFSET(0xB96A380)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0xB96A4F0)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xB96A5F0)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0xB96A050)
#define RPG_CLIENT_FALLINGOBJECTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB96A6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FallingObjectTemplate_TypeDefinitionIndex = 66314;

	class FallingObjectTemplate : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* FallingObject; // 0x10
		::System::Single Resistance; // 0x18
		::UnityEngine::Vector3 Gravity; // 0x1C
		::System::Single Mass; // 0x28
		::System::Single EmissionWeight; // 0x2C
		::System::Single RotateSpeed; // 0x30
		::System::Single MaxStartSpeed; // 0x34
		::System::Single MaxStartAcceleration; // 0x38
		::System::Boolean EnableSplash; // 0x3C
		::System::Single SplashScale; // 0x40
		::UnityEngine::Vector2 MinmaxRandomScale; // 0x44
		::System::Boolean _InitIRIDatas; // 0x4C
		::System::Collections::Generic::List_1<::RPG::Client::FallingObjectTemplate_Class_1_BB32A9E6F97FB4FE*>* InstanceObjectIRIDatas; // 0x50
		::System::Collections::Generic::List_1<::Class_1_D00784C64067A6A7*>* _ObjectPool; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EA0BA3E4AF50C583()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
		}

		::Class_1_D00784C64067A6A7* Method_1_59597AEB8CE7B3F8(::UnityEngine::Transform* a1)
		{
			return ((::Class_1_D00784C64067A6A7*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_59597AEB8CE7B3F8_OFFSET))(this, a1);
		}

		::System::Void Method_1_70437D85C11C5222(::Class_1_D00784C64067A6A7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D00784C64067A6A7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
		}

		::System::Void Method_1_78C62398E94F0FB1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FALLINGOBJECTTEMPLATE_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
		}
	};
}
