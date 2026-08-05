#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B08A65FEB7150D0E;
class Class_2_208CC9941471731A_1150;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1930D980)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1930D9C0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REBUILDROLEDATALIST_B__25_0_OFFSET UNITYSDK_OFFSET(0x1930D9D0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__41_0_OFFSET UNITYSDK_OFFSET(0x1930DA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex = 46696;

	class UIBangbooMicroWebRoleCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooMicroWebRoleCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooMicroWebRoleCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x48FE0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1150*>** StaticGet___9__41_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1150*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x48FE8);
		}
		static ::System::Comparison_1<::Class_1_B08A65FEB7150D0E*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::Class_1_B08A65FEB7150D0E*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x48FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RebuildRoleDataList_b__25_0(::Class_1_B08A65FEB7150D0E* a, ::Class_1_B08A65FEB7150D0E* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_B08A65FEB7150D0E*, ::Class_1_B08A65FEB7150D0E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REBUILDROLEDATALIST_B__25_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardPoints_b__41_0(::Class_2_208CC9941471731A_1150* a, ::Class_2_208CC9941471731A_1150* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1150*, ::Class_2_208CC9941471731A_1150*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__41_0_OFFSET))(this, a, b);
		}
	};
}
