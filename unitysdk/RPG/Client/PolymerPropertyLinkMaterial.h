#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerPropertyLinkBase.h"

namespace RPG::Client { class PolymerPropertyLinkMaterial_MaterialPropertyElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xC4B1940)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_2F29DB032BE8A9AF_OFFSET UNITYSDK_OFFSET(0xC4AEAF0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xC4AEC90)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xC4AEEF0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_B2B0013DC08E6659_OFFSET UNITYSDK_OFFSET(0xC4B1CB0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_BE242969061B97B9_OFFSET UNITYSDK_OFFSET(0xC4B1CA0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC4B1C20)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xC4B1C60)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC4B1BE0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_E153E10891089910_OFFSET UNITYSDK_OFFSET(0xC4AE7B0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B18E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkMaterial_TypeDefinitionIndex = 65733;

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

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_2_BE242969061B97B9(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_BE242969061B97B9_OFFSET))(this, a1);
		}

		::System::Void Method_2_B2B0013DC08E6659(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_B2B0013DC08E6659_OFFSET))(this, a1, a2);
		}
	};
}
