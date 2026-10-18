#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_GET_DISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xD64F870)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_METHOD_5_626A509C2776FA3E_OFFSET UNITYSDK_OFFSET(0xD64FE90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_METHOD_5_E7FB294C2BEED55C_OFFSET UNITYSDK_OFFSET(0xD64F910)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_METHOD_5_F6F52A1C08704264_OFFSET UNITYSDK_OFFSET(0xD64F680)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD64FF80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_SET_DISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xD64F8B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xD64FFF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD64FFE0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRadarChartControl_TypeDefinitionIndex = 79823;

	class MechCraftRadarChartControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>** StaticGet_EBLFGPECGIE()
		{
			return (::System::Collections::Generic::IReadOnlyList_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftRadarChartControl_TypeDefinitionIndex)->GetStaticField(0x4C8B0);
		}
		static ::System::Int32* StaticGet_FKILCDOGGAI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MechCraftRadarChartControl_TypeDefinitionIndex)->GetStaticField(0x11800);
		}
		// static const ::System::Int32 MPOBDBMFKBI = 0x8; // 0x0
		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* BDKCBIFDCOM; // 0x18
		::UnityEngine::Material* NAOKMFOCKJM; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_5_F6F52A1C08704264()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_METHOD_5_F6F52A1C08704264_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_Distribution()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_GET_DISTRIBUTION_OFFSET))(this);
		}

		::System::Void set_Distribution(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_SET_DISTRIBUTION_OFFSET))(this, a1);
		}

		::UnityEngine::Material* Method_5_626A509C2776FA3E()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_METHOD_5_626A509C2776FA3E_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_E7FB294C2BEED55C(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARCHARTCONTROL_METHOD_5_E7FB294C2BEED55C_OFFSET))(this, a1);
		}
	};
}
