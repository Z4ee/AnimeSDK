#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerPropertyLinkBase.h"

namespace RPG::Client { class PolymerPropertyLinkMaterial_MaterialPropertyElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_06DA6E0DDE64BF55_OFFSET UNITYSDK_OFFSET(0x9FF3EC0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x9FF1510)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x9FF3B50)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_8E12E04EC393F9E8_OFFSET UNITYSDK_OFFSET(0x9FF3EB0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_C4A12E8170668C9E_OFFSET UNITYSDK_OFFSET(0x9FF1390)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9FF3E30)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9FF3E70)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9FF3DF0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x9FF1720)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_F3F81422062393C9_OFFSET UNITYSDK_OFFSET(0x9FF10C0)
#define RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkMaterial_TypeDefinitionIndex = 57544;

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

		::System::Void Method_2_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
		}

		::System::Void Method_2_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_17BD30EFE8176014_OFFSET))(this);
		}

		::System::Void Method_2_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_2_F3F81422062393C9(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_F3F81422062393C9_OFFSET))(this, a1);
		}

		::System::Void Method_2_C4A12E8170668C9E(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_C4A12E8170668C9E_OFFSET))(this, a1, a2);
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

		::System::Void Method_2_8E12E04EC393F9E8(::UnityEngine::Transform* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_8E12E04EC393F9E8_OFFSET))(this, P0);
		}

		::System::Void Method_2_06DA6E0DDE64BF55(::UnityEngine::Transform* P0, ::UnityEngine::Transform* P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKMATERIAL_METHOD_2_06DA6E0DDE64BF55_OFFSET))(this, P0, P1);
		}
	};
}
