#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC549D50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC549D90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER___C__GETINTERACTPROPS_B__9_0_OFFSET UNITYSDK_OFFSET(0xC549DA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractController___c_TypeDefinitionIndex = 75275;

	class ActivityHipplenInteractController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenInteractController___c_TypeDefinitionIndex)->GetStaticField(0x63810);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenInteractController___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenInteractController___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenInteractController___c_TypeDefinitionIndex)->GetStaticField(0x63818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetInteractProps_b__9_0(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTCONTROLLER___C__GETINTERACTPROPS_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
