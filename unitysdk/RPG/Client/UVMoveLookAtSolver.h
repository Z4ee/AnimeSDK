#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UVMOVELOOKATSOLVER_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1DDBCDD0)
#define RPG_CLIENT_UVMOVELOOKATSOLVER_METHOD_1_E626BE42DAD16303_OFFSET UNITYSDK_OFFSET(0x1DDBCA60)
#define RPG_CLIENT_UVMOVELOOKATSOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCEF0)
#define RPG_CLIENT_UVMOVELOOKATSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UVMoveLookAtSolver_TypeDefinitionIndex = 70239;

	class UVMoveLookAtSolver : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MainTexSTShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UVMoveLookAtSolver_TypeDefinitionIndex)->GetStaticField(0x146F0);
		}
		::UnityEngine::Transform* ProxyNode; // 0x10
		::UnityEngine::Renderer* RendererNode; // 0x18
		::System::Single Radius; // 0x20
		::UnityEngine::Vector2 Range; // 0x24
		::UnityEngine::Vector2 Offset; // 0x2C
		::UnityEngine::Vector4 _UVPos; // 0x34
		::UnityEngine::Vector3 _ObjPos; // 0x44
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER__CCTOR_OFFSET))();
		}

		::System::Void Method_1_E626BE42DAD16303(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER_METHOD_1_E626BE42DAD16303_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
		}
	};
}
