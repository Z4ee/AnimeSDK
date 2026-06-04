#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PolymerAnimationPropertyDatabase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_43DF5DDA7D099E0C_OFFSET UNITYSDK_OFFSET(0xC4B13B0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_5E06F59A975FD52C_OFFSET UNITYSDK_OFFSET(0xC4B1630)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_90C00AEA2B6E5363_OFFSET UNITYSDK_OFFSET(0xC4B1540)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_C9665CE87E0304EF_OFFSET UNITYSDK_OFFSET(0xC4B1820)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC4B1370)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xC4B17E0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC4B1330)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B1260)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkBase_TypeDefinitionIndex = 65732;

	class PolymerPropertyLinkBase : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::UnityEngine::Transform* target2; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* prefabPath; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* hierachyPath; // 0x28
		::System::Boolean targetNotInArtPreb; // 0x30
		::UnityEngine::Transform* root; // 0x38
		::UnityEngine::Transform* polymerRoot; // 0x40
		::RPG::Client::PolymerAnimationPropertyDatabase* database; // 0x48
		::System::Boolean EditorFolder; // 0x50

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_43DF5DDA7D099E0C(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_43DF5DDA7D099E0C_OFFSET))(this, a1);
		}

		::System::Void Method_1_5E06F59A975FD52C(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_5E06F59A975FD52C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Int32 Method_1_C9665CE87E0304EF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_C9665CE87E0304EF_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_1_90C00AEA2B6E5363(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_90C00AEA2B6E5363_OFFSET))(this, a1);
		}
	};
}
