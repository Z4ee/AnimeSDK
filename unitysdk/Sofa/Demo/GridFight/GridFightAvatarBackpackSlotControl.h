#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"
#include "unitysdk/Struct_2_BA826F78A2D862D7.h"
#include "unitysdk/Struct_2_F434485B736353C4.h"

class Class_0_16E4307DCC419505_487;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE96E510)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE970020)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE96F0D0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_12_OFFSET UNITYSDK_OFFSET(0xE970070)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_13_OFFSET UNITYSDK_OFFSET(0xE970240)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_14_OFFSET UNITYSDK_OFFSET(0xE970120)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_15_OFFSET UNITYSDK_OFFSET(0xE9702F0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_5_OFFSET UNITYSDK_OFFSET(0xE970060)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarBackpackSlotControl_TypeDefinitionIndex = 49704;

	class GridFightAvatarBackpackSlotControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_487*>
	{
	public:
		::RPG::Client::AnimatorButton* _RootButton; // 0x70
		::UnityEngine::RectTransform* _LockedRoot; // 0x78
		::RPG::Client::PrefabLoadMeta* _AvatarLoadMeta; // 0x80
		::RPG::Client::PrefabLoadMeta* _NotReleasedAvatarLoadMeta; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_487*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_487*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_487*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_487*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL__POPULATING_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* __Populating_b__1_5(::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_487*, ::System::Object*> a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_487*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_5_OFFSET))(this, a1);
		}

		::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*> __Populating_b__1_12(::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*> a1)
		{
			return ((::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*>(*)(::PVOID, ::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_12_OFFSET))(this, a1);
		}

		::System::Void __Populating_b__1_14(::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_487*, ::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_487*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_14_OFFSET))(this, a1);
		}

		::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*> __Populating_b__1_13(::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*> a1)
		{
			return ((::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*>(*)(::PVOID, ::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_487*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_13_OFFSET))(this, a1);
		}

		::System::Void __Populating_b__1_15(::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_487*, ::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BA826F78A2D862D7<::Class_0_16E4307DCC419505_487*, ::System::Object*>))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKSLOTCONTROL___POPULATING_B__1_15_OFFSET))(this, a1);
		}
	};
}
