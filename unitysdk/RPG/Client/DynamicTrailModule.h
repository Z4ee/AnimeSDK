#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DynamicTrailModule_Struct_2_0F5C332695BEA153.h"
#include "unitysdk/RPG/Client/DynamicTrailModule_Struct_2_6175284CFEF73564.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class DynamicTrailModule_Class_1_7EE1B066A3FF5E80; }
namespace RPG::Client { class DynamicTrailModule_Class_1_ECAFF6179F9E136E; }
namespace RPG::Client::TAUtils { template <typename T> class CircularBuffer_1; }
namespace RPG::Client::TAUtils { template <typename T> class ReusableList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x9523870)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_18E27E0AADCE7FDC_OFFSET UNITYSDK_OFFSET(0x9527490)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_2B0FDB087B81F04A_OFFSET UNITYSDK_OFFSET(0x9526DC0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_2E70293D08C556A8_OFFSET UNITYSDK_OFFSET(0x95272B0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x9525C50)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x9525A70)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x9525700)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9523450)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x9523BF0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9525BB0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_C2A4063B80814910_OFFSET UNITYSDK_OFFSET(0x9526B20)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x9523280)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x95235D0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x9523930)
#define RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x9523CF0)
#define RPG_CLIENT_DYNAMICTRAILMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9527E70)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicTrailModule_TypeDefinitionIndex = 57676;

	class DynamicTrailModule : public ::System::Object
	{
	public:
		::UnityEngine::Transform* StartPoint; // 0x10
		::UnityEngine::Transform* EndPoint; // 0x18
		::System::Int32 TrailLength; // 0x20
		::System::Single EmitInterval; // 0x24
		::System::Single TrailDuration; // 0x28
		::UnityEngine::Transform* MeshOrigin; // 0x30
		::System::Boolean TrailInterpolation; // 0x38
		::System::Int32 InterpolationSegments; // 0x3C
		::UnityEngine::Material* TrailMaterial; // 0x40
		::UnityEngine::AnimationCurve* WidthCurve; // 0x48
		::UnityEngine::AnimationCurve* AlphaCurve; // 0x50
		::UnityEngine::Gradient* ColorGradient; // 0x58
		::RPG::Client::TAUtils::CircularBuffer_1<::RPG::Client::DynamicTrailModule_Struct_2_6175284CFEF73564>* _TrailPoints; // 0x60
		::RPG::Client::TAUtils::ReusableList_1<::RPG::Client::DynamicTrailModule_Struct_2_6175284CFEF73564>* _InterpolatedPoints; // 0x68
		::UnityEngine::Mesh* _TrailMesh; // 0x70
		::System::Single _LifeTime; // 0x78
		::System::Single _LastEmitTime; // 0x7C
		::Il2CppArray<::UnityEngine::Vector3>* _CachedVertices; // 0x80
		::Il2CppArray<::UnityEngine::Vector2>* _CachedUVs; // 0x88
		::Il2CppArray<::UnityEngine::Color>* _CachedColors; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* _CachedNormals; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* _CachedDirections; // 0xA0
		::Il2CppArray<::UnityEngine::Vector3>* _CachedCenters; // 0xA8
		::Il2CppArray<::System::Int32>* _CachedTriangles; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* _CachedStartPositions; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* _CachedEndPositions; // 0xC0
		::Il2CppArray<::System::Single>* _CachedTimes; // 0xC8
		::RPG::Client::DynamicTrailModule_Class_1_ECAFF6179F9E136E* _CachedStartSpline; // 0xD0
		::RPG::Client::DynamicTrailModule_Class_1_ECAFF6179F9E136E* _CachedEndSpline; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CBDC22058B67F0FE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
		}

		::System::Void Method_1_0A5DD54A2675889F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_0A5DD54A2675889F_OFFSET))(this, a1);
		}

		::System::Void Method_1_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_1_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_1_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Method_1_489E0B827662C211()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_489E0B827662C211_OFFSET))(this);
		}

		::RPG::Client::DynamicTrailModule_Struct_2_0F5C332695BEA153 Method_1_C2A4063B80814910(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::RPG::Client::DynamicTrailModule_Class_1_ECAFF6179F9E136E* a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::DynamicTrailModule_Struct_2_0F5C332695BEA153(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::RPG::Client::DynamicTrailModule_Class_1_ECAFF6179F9E136E*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_C2A4063B80814910_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_18E27E0AADCE7FDC(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2, ::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80* a3, ::System::Int32 a4, ::Il2CppArray<::System::Single>*& a5, ::Il2CppArray<::System::Single>*& a6, ::Il2CppArray<::System::Single>*& a7, ::Il2CppArray<::System::Single>*& a8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::RPG::Client::DynamicTrailModule_Class_1_7EE1B066A3FF5E80*, ::System::Int32, ::Il2CppArray<::System::Single>*&, ::Il2CppArray<::System::Single>*&, ::Il2CppArray<::System::Single>*&, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_18E27E0AADCE7FDC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::UnityEngine::Vector3 Method_1_2B0FDB087B81F04A(::RPG::Client::DynamicTrailModule_Struct_2_0F5C332695BEA153 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::DynamicTrailModule_Struct_2_0F5C332695BEA153, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_2B0FDB087B81F04A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_2E70293D08C556A8(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_2E70293D08C556A8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Void Method_1_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
		}

		::System::Void Method_1_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
		}
	};
}
