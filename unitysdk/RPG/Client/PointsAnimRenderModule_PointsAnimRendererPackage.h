#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x19395010)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_METHOD_1_C46588A6E2C180DB_OFFSET UNITYSDK_OFFSET(0x193952D0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19395200)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimRenderModule_PointsAnimRendererPackage_TypeDefinitionIndex = 67470;

	class PointsAnimRenderModule_PointsAnimRendererPackage : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* Materials; // 0x18
		::System::UInt32 RenderingLayerMask; // 0x20
		::RPG::Client::TAUtils::SimpleTransform LocalTransform; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_C46588A6E2C180DB(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_METHOD_1_C46588A6E2C180DB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
