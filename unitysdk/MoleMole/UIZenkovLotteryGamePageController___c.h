#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD.h"
#include "unitysdk/System/Object.h"

class Class_2_2AB46C9F111C45AE;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E48DC0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E48E00)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_0_OFFSET UNITYSDK_OFFSET(0x11E48E10)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_1_OFFSET UNITYSDK_OFFSET(0x11E48E40)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__ISLASTAVATARMAYDIEANDGAMEEND_B__34_0_OFFSET UNITYSDK_OFFSET(0x11E48E60)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__SENDREQUEST_B__67_1_OFFSET UNITYSDK_OFFSET(0x11E48E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c_TypeDefinitionIndex = 66018;

	class UIZenkovLotteryGamePageController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::Class_2_2AB46C9F111C45AE*, ::System::Int32>** StaticGet___9__23_1()
		{
			return (::System::Converter_2<::Class_2_2AB46C9F111C45AE*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x334A0);
		}
		static ::System::Predicate_1<::Class_2_2AB46C9F111C45AE*>** StaticGet___9__23_0()
		{
			return (::System::Predicate_1<::Class_2_2AB46C9F111C45AE*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x334A8);
		}
		static ::System::Action** StaticGet___9__67_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x334B0);
		}
		static ::MoleMole::UIZenkovLotteryGamePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovLotteryGamePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x334B8);
		}
		static ::System::Func_2<::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x334C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitRewardPreview_b__23_0(::Class_2_2AB46C9F111C45AE* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_2AB46C9F111C45AE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_0_OFFSET))(this, x);
		}

		::System::Int32 _InitRewardPreview_b__23_1(::Class_2_2AB46C9F111C45AE* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_2AB46C9F111C45AE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_1_OFFSET))(this, x);
		}

		::System::Boolean _IsLastAvatarMayDieAndGameEnd_b__34_0(::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__ISLASTAVATARMAYDIEANDGAMEEND_B__34_0_OFFSET))(this, x);
		}

		::System::Void _SendRequest_b__67_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__SENDREQUEST_B__67_1_OFFSET))(this);
		}
	};
}
