#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A4376D2CF7ABE708;
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleBrickData; }
namespace RPG::Client::Prop { class RubikCubePuzzleConditionGroup; }
namespace RPG::Client::Prop { class RubikCubePuzzleCubeData; }
namespace RPG::Client::Prop { class RubikCubePuzzleFrame; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitch; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ANIMROTATEANYANGLE_OFFSET UNITYSDK_OFFSET(0x16668380)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ANIMROTATE_OFFSET UNITYSDK_OFFSET(0x16669150)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_CANCELALLSELECT_OFFSET UNITYSDK_OFFSET(0x16667EA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_CONDITIONGROUPSETANIMATIONFINISH_OFFSET UNITYSDK_OFFSET(0x16659DD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16664850)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GETCENTEROID_OFFSET UNITYSDK_OFFSET(0x16668D90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GETGROUP_OFFSET UNITYSDK_OFFSET(0x16667970)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1666A7C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GET_ISDRAG_OFFSET UNITYSDK_OFFSET(0x1666A7A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GET_ISROTATE_OFFSET UNITYSDK_OFFSET(0x1666A780)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_INITCUBE_OFFSET UNITYSDK_OFFSET(0x16654150)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_INITSECONDORDER_OFFSET UNITYSDK_OFFSET(0x166636F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_2CB2A75807271EAA_OFFSET UNITYSDK_OFFSET(0x166692F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1666A720)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x16669990)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x16664C30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x16669B30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ONROTATESTART_OFFSET UNITYSDK_OFFSET(0x166697A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ONSTOPDRAG_OFFSET UNITYSDK_OFFSET(0x16668240)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_PLAYROTATESOUND_OFFSET UNITYSDK_OFFSET(0x16662C90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REFRESHALLFRAMESTATUS_OFFSET UNITYSDK_OFFSET(0x16654AA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERFRAME_1_OFFSET UNITYSDK_OFFSET(0x16659F30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERFRAME_OFFSET UNITYSDK_OFFSET(0x16664E40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x166573F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERSWITCH_OFFSET UNITYSDK_OFFSET(0x16664D60)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_RESETCUBE_OFFSET UNITYSDK_OFFSET(0x16662EA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ROTATEX_OFFSET UNITYSDK_OFFSET(0x16664F20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ROTATEY_OFFSET UNITYSDK_OFFSET(0x16665D20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ROTATEZ_OFFSET UNITYSDK_OFFSET(0x16666A50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SDKREPORTPLAYERACION_OFFSET UNITYSDK_OFFSET(0x16669390)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SELECTBRICK_OFFSET UNITYSDK_OFFSET(0x16661C70)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SELECTGROUPTEST_OFFSET UNITYSDK_OFFSET(0x16668170)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SELECTGROUP_OFFSET UNITYSDK_OFFSET(0x166677E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SETBLOCKSELECT_OFFSET UNITYSDK_OFFSET(0x166635F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SET_ISDRAG_OFFSET UNITYSDK_OFFSET(0x1666A7B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SET_ISROTATE_OFFSET UNITYSDK_OFFSET(0x1666A790)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x16657680)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666A910)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleCube_TypeDefinitionIndex = 78361;

	class RubikCubePuzzleCube : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* RotateYSound; // 0x0
		// static const ::System::String* RotateXZSound; // 0x0
		// static const ::System::String* DragSound; // 0x0
		// static const ::System::String* DragStopSound; // 0x0
		::System::Boolean _IsRotate_k__BackingField; // 0x18
		::System::Boolean _IsDrag_k__BackingField; // 0x19
		::System::String* UniqueName; // 0x20
		::System::Int32 Order; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Blocks; // 0x30
		::System::Single RotateSpeed; // 0x38
		::Il2CppArray<::Class_1_A4376D2CF7ABE708*>* CubeStatus; // 0x40
		::System::String* StartRotateCustomString; // 0x48
		::System::String* StopRotateCustomString; // 0x50
		::UnityEngine::Material* SolidNormalMaterial; // 0x58
		::UnityEngine::Material* SolidSelectMaterial; // 0x60
		::UnityEngine::Material* ThirdStatusNormalMaterial; // 0x68
		::UnityEngine::Material* ThirdStatusSelectMaterial; // 0x70
		::UnityEngine::Material* EmptyNormalMaterial; // 0x78
		::UnityEngine::Material* EmptySelectMaterial; // 0x80
		::UnityEngine::Material* CompleteMaterial; // 0x88
		::UnityEngine::AnimationCurve* RotateCurve; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* FOMMNNFHKNC; // 0x98
		::Il2CppArray<::UnityEngine::Quaternion>* KKMPKBAHADF; // 0xA0
		::Il2CppArray<::RPG::Client::Prop::RubikCubePuzzleBrickData*>* ICCOPPLDDKJ; // 0xA8
		::Il2CppArray<::System::Int32>* HDOOOBONAPM; // 0xB0
		::RPG::Client::Prop::RubikCubeGroup LGHKHDAOHLM; // 0xB8
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0xC0
		::RPG::Client::Prop::RubikCubePuzzleBoard* AGAHPOHHGMP; // 0xC8
		::System::Collections::IEnumerator* BJOEOGDJKFF; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleSwitch*>* EDHKLKKFAOM; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleFrame*>* AEJHPPJIHEB; // 0xE0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleConditionGroup*>* NJFNAAKDOPO; // 0xE8
		::RPG::Client::Prop::RubikCubePuzzleCubeData* APHGPNEIDKI; // 0xF0
		::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* CIFOILLJFNF; // 0xF8
		::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* JCGFOCCPHEH; // 0x100
		::System::Int32 MIBBMAGFDPG; // 0x108
		::System::UInt32 MFMEMHINIPK; // 0x10C
		::System::Int32 GDEPAEEGPCA; // 0x110
		::System::Int32 EFLOALLFICK; // 0x114
		::System::Int32 CNCGANOKJPO; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE__CTOR_OFFSET))(this);
		}

		::System::Void ResetCube()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_RESETCUBE_OFFSET))(this);
		}

		::System::Void InitSecondOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_INITSECONDORDER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_DISPOSE_OFFSET))(this);
		}

		::System::Void InitCube(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleCubeData* a2, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a3, ::RPG::Client::Prop::RubikCubePuzzleBoard* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleCubeData*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*, ::RPG::Client::Prop::RubikCubePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_INITCUBE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RegisterSwitch(::RPG::Client::Prop::RubikCubePuzzleSwitch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleSwitch*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERSWITCH_OFFSET))(this, a1);
		}

		::System::Void RegisterFrame(::RPG::Client::Prop::RubikCubePuzzleFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleFrame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERFRAME_OFFSET))(this, a1);
		}

		::System::Void RegisterFrame_1(::RPG::Client::Prop::RubikCubePuzzleConditionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleConditionGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERFRAME_1_OFFSET))(this, a1);
		}

		::System::Void ConditionGroupSetAnimationFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_CONDITIONGROUPSETANIMATIONFINISH_OFFSET))(this, a1);
		}

		::System::Void RefreshAllFrameStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REFRESHALLFRAMESTATUS_OFFSET))(this);
		}

		::System::Void RotateX(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ROTATEX_OFFSET))(this, a1, a2);
		}

		::System::Void RotateY(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ROTATEY_OFFSET))(this, a1, a2);
		}

		::System::Void RotateZ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ROTATEZ_OFFSET))(this, a1, a2);
		}

		::System::Void SelectGroup(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SELECTGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAllSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_CANCELALLSELECT_OFFSET))(this);
		}

		::System::Void SelectBrick(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SELECTBRICK_OFFSET))(this, a1, a2);
		}

		::System::Void SelectGroupTest(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SELECTGROUPTEST_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterRotateFinishCallback(::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_A4376D2CF7ABE708*>* GetGroup(::RPG::Client::Prop::RubikCubeGroup a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A4376D2CF7ABE708*>*(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GETGROUP_OFFSET))(this, a1);
		}

		::System::Void SetBlockSelect(::Class_1_A4376D2CF7ABE708* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A4376D2CF7ABE708*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SETBLOCKSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void OnStopDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ONSTOPDRAG_OFFSET))(this);
		}

		::System::Void AnimRotateAnyAngle(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ANIMROTATEANYANGLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 GetCenteroid(::System::Int32 a1, ::RPG::Client::Prop::RubikCubePuzzleAxis a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GETCENTEROID_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRotateSound(::RPG::Client::Prop::RubikCubePuzzleAxis a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_PLAYROTATESOUND_OFFSET))(this, a1);
		}

		::System::Void AnimRotate(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ANIMROTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* Method_5_2CB2A75807271EAA(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_2CB2A75807271EAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRotateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ONROTATESTART_OFFSET))(this);
		}

		::System::Void OnRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_ONROTATEFINISH_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Boolean get_IsRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GET_ISROTATE_OFFSET))(this);
		}

		::System::Void set_IsRotate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SET_ISROTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GET_ISDRAG_OFFSET))(this);
		}

		::System::Void set_IsDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SET_ISDRAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void SDKReportPlayerAcion(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBE_SDKREPORTPLAYERACION_OFFSET))(this, a1, a2, a3);
		}
	};
}
