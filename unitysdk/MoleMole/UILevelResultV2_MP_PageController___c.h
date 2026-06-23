#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A8A051C530035301_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1783B0B0)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1783B0F0)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__EXTRACTPLAYERINFO_B__38_1_OFFSET UNITYSDK_OFFSET(0x1783B1F0)
#define MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C___REFRESHAVATARINFO_B__26_0_OFFSET UNITYSDK_OFFSET(0x1783B100)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_MP_PageController___c_TypeDefinitionIndex = 78336;

	class UILevelResultV2_MP_PageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_A8A051C530035301_1*, ::System::UInt32>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::Class_3_A8A051C530035301_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x48900);
		}
		static ::MoleMole::UILevelResultV2_MP_PageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultV2_MP_PageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x48908);
		}
		static ::System::Func_2<::Class_3_A8A051C530035301_1*, ::System::UInt32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::Class_3_A8A051C530035301_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_MP_PageController___c_TypeDefinitionIndex)->GetStaticField(0x48910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __RefreshAvatarInfo_b__26_0(::Class_3_A8A051C530035301_1* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_A8A051C530035301_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C___REFRESHAVATARINFO_B__26_0_OFFSET))(this, p);
		}

		::System::UInt32 _ExtractPlayerInfo_b__38_1(::Class_3_A8A051C530035301_1* p)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_A8A051C530035301_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_MP_PAGECONTROLLER___C__EXTRACTPLAYERINFO_B__38_1_OFFSET))(this, p);
		}
	};
}
