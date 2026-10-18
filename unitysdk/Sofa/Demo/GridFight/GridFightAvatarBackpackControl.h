#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"
#include "unitysdk/Struct_2_F434485B736353C4.h"

class Class_0_16E4307DCC419505_486;
class Class_0_16E4307DCC419505_487;
class Class_1_410757201D519965;
namespace Sofa::Demo::GridFight { class GridFightAvatarBackpackSlotControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__APPLYCOMPOSEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE977120)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE975DD0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE977CA0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xE977BE0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE977B20)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__MOVECOMPOSEMATERIAL_OFFSET UNITYSDK_OFFSET(0xE977760)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE976390)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarBackpackControl_TypeDefinitionIndex = 49700;

	class GridFightAvatarBackpackControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_486*>
	{
	public:
		::UnityEngine::RectTransform* _SlotListRoot; // 0x70
		::UnityEngine::RectTransform* _OverridePanelRoot; // 0x78
		::System::Collections::Generic::List_1<::Sofa::Demo::GridFight::GridFightAvatarBackpackSlotControl*>* _SlotList; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_486*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_486*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_486*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_486*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__POPULATING_OFFSET))(this, a1);
		}

		static ::System::Void _ApplyComposeViewModels(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_487*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_487*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__APPLYCOMPOSEVIEWMODELS_OFFSET))(a1);
		}

		static ::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_486*, ::System::Object*> _MoveComposeMaterial(::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_486*, ::System::Object*> a1, ::System::Int32 a2)
		{
			return ((::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_486*, ::System::Object*>(*)(::Struct_2_F434485B736353C4<::Class_0_16E4307DCC419505_486*, ::System::Object*>, ::System::Int32))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__MOVECOMPOSEMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_487*>* _GetComposeViewModels(::Class_1_410757201D519965* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_487*>*(*)(::Class_1_410757201D519965*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSEVIEWMODELS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _GetComposeTransforms(::Class_1_410757201D519965* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::Class_1_410757201D519965*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSETRANSFORMS_OFFSET))(a1);
		}
	};
}
