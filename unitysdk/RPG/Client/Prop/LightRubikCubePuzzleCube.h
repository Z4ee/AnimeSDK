#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleCube.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleBlock; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleConditionGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATEANYANGLE_OFFSET UNITYSDK_OFFSET(0xC593340)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATE_OFFSET UNITYSDK_OFFSET(0xC58E0A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5906B0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCENTEROID_OFFSET UNITYSDK_OFFSET(0xC593C80)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCOLORMATERIALS_OFFSET UNITYSDK_OFFSET(0xC58F960)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETGROUP_OFFSET UNITYSDK_OFFSET(0xC592D40)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC58DBF0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITCUBE_OFFSET UNITYSDK_OFFSET(0xC58D190)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITSECONDORDER_OFFSET UNITYSDK_OFFSET(0xC58FB30)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC594420)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC590670)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xC5940F0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATESTART_OFFSET UNITYSDK_OFFSET(0xC594070)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERFRAME_OFFSET UNITYSDK_OFFSET(0xC58EF60)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC58E8B0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEX_OFFSET UNITYSDK_OFFSET(0xC5906F0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEY_OFFSET UNITYSDK_OFFSET(0xC591430)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEZ_OFFSET UNITYSDK_OFFSET(0xC592080)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUPTEST_OFFSET UNITYSDK_OFFSET(0xC593290)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUP_OFFSET UNITYSDK_OFFSET(0xC58E500)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SETBLOCKMATERIAL_OFFSET UNITYSDK_OFFSET(0xC5932F0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC58EB40)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE__CTOR_OFFSET UNITYSDK_OFFSET(0xC594480)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ANIMROTATEANYANGLE_OFFSET UNITYSDK_OFFSET(0xC5945D0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ANIMROTATE_OFFSET UNITYSDK_OFFSET(0xC594650)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC594500)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_GETCENTEROID_OFFSET UNITYSDK_OFFSET(0xC594620)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC594680)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_INITSECONDORDER_OFFSET UNITYSDK_OFFSET(0xC5944F0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xC594670)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ONROTATESTART_OFFSET UNITYSDK_OFFSET(0xC594660)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ROTATEX_OFFSET UNITYSDK_OFFSET(0xC594510)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ROTATEY_OFFSET UNITYSDK_OFFSET(0xC594520)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ROTATEZ_OFFSET UNITYSDK_OFFSET(0xC594530)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_SELECTGROUPTEST_OFFSET UNITYSDK_OFFSET(0xC594550)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_SELECTGROUP_OFFSET UNITYSDK_OFFSET(0xC594540)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleCube_TypeDefinitionIndex = 73203;

	class LightRubikCubePuzzleCube : public ::RPG::Client::Prop::RubikCubePuzzleCube
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::LightRubikCubePuzzleBlock*>* CubeStatus; // 0x120
		::System::String* SelectRotateCustomString; // 0x128
		::RPG::GameCore::GameEntity* Field_6_2; // 0x130
		::System::Collections::IEnumerator* Field_6_3; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleConditionGroup*>* Field_6_4; // 0x140
		::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* Field_6_5; // 0x148
		::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* Field_6_6; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetColorMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCOLORMATERIALS_OFFSET))(this);
		}

		::System::Void InitSecondOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITSECONDORDER_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_DISPOSE_OFFSET))(this);
		}

		::System::Void InitCube(::RPG::GameCore::GameEntity* a1, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITCUBE_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterFrame(::RPG::Client::Prop::LightRubikCubePuzzleConditionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::LightRubikCubePuzzleConditionGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERFRAME_OFFSET))(this, a1);
		}

		::System::Void RotateX(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEX_OFFSET))(this, a1, a2);
		}

		::System::Void RotateY(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEY_OFFSET))(this, a1, a2);
		}

		::System::Void RotateZ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEZ_OFFSET))(this, a1, a2);
		}

		::System::Void SelectGroup(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void SelectGroupTest(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUPTEST_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterRotateFinishCallback(::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Prop::LightRubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleBlock*>* GetGroup(::RPG::Client::Prop::RubikCubeGroup a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleBlock*>*(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETGROUP_OFFSET))(this, a1);
		}

		::System::Void SetBlockMaterial(::RPG::Client::Prop::LightRubikCubePuzzleBlock* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::LightRubikCubePuzzleBlock*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SETBLOCKMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void AnimRotateAnyAngle(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATEANYANGLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 GetCenteroid(::System::Int32 a1, ::RPG::Client::Prop::RubikCubePuzzleAxis a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCENTEROID_OFFSET))(this, a1, a2);
		}

		::System::Void AnimRotate(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRotateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATESTART_OFFSET))(this);
		}

		::System::Void OnRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATEFINISH_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitSecondOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_INITSECONDORDER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RotateX(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ROTATEX_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_RotateY(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ROTATEY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_RotateZ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ROTATEZ_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SelectGroup(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_SELECTGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SelectGroupTest(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_SELECTGROUPTEST_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_AnimRotateAnyAngle(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ANIMROTATEANYANGLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenteroid(::System::Int32 a1, ::RPG::Client::Prop::RubikCubePuzzleAxis a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_GETCENTEROID_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_AnimRotate(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ANIMROTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnRotateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ONROTATESTART_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_ONROTATEFINISH_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE___IFIXBASEPROXY_GET_ISCOMPLETE_OFFSET))(this);
		}
	};
}
