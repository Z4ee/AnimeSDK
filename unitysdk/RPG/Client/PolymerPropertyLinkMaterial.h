#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerPropertyLinkBase.h"

namespace RPG::Client { class PolymerPropertyLinkMaterial_MaterialPropertyElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xDBBAE00)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_2F29DB032BE8A9AF_OFFSET UNITYSDK_OFFSET(0xDBB7F10)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xDBB80B0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xDBB8310)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_E153E10891089910_OFFSET UNITYSDK_OFFSET(0xDBB7BD0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xDBBADA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkMaterial_TypeDefinitionIndex = 70267;

	class PolymerPropertyLinkMaterial : public ::RPG::Client::PolymerPropertyLinkBase
	{
	public:
		::System::Int32 targetMatID; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::PolymerPropertyLinkMaterial_MaterialPropertyElement*>* ElementList; // 0x60
		::UnityEngine::Object* targetComponent; // 0x68
		::System::Boolean kAllTarget; // 0x70
		::System::Boolean kAllTarget2; // 0x71

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
		}

		::System::Void Method_2_809094DEBF13B21A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_809094DEBF13B21A_OFFSET))(this);
		}

		::System::Void Method_2_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_2_E153E10891089910(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_E153E10891089910_OFFSET))(this, a1);
		}

		::System::Void Method_2_2F29DB032BE8A9AF(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_2F29DB032BE8A9AF_OFFSET))(this, a1, a2);
		}
	};
}
