#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B08A65FEB7150D0E;
class Class_2_208CC9941471731A_502;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B48AA0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48AE0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REBUILDROLEDATALIST_B__21_0_OFFSET UNITYSDK_OFFSET(0x15B48AF0)
#define MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__23_0_OFFSET UNITYSDK_OFFSET(0x15B48B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex = 72648;

	class UIBangbooMicroWebRoleCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooMicroWebRoleCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooMicroWebRoleCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x45080);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_502*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_502*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x45088);
		}
		static ::System::Comparison_1<::Class_1_B08A65FEB7150D0E*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::Class_1_B08A65FEB7150D0E*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRoleCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x45090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RebuildRoleDataList_b__21_0(::Class_1_B08A65FEB7150D0E* a, ::Class_1_B08A65FEB7150D0E* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_B08A65FEB7150D0E*, ::Class_1_B08A65FEB7150D0E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REBUILDROLEDATALIST_B__21_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardPoints_b__23_0(::Class_2_208CC9941471731A_502* a, ::Class_2_208CC9941471731A_502* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_502*, ::Class_2_208CC9941471731A_502*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLECOLLECTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__23_0_OFFSET))(this, a, b);
		}
	};
}
