#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B630EA0921A5074;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5CCA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC5CCA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C___CLEARENDEDIMAGEDANMUS_B__13_0_OFFSET UNITYSDK_OFFSET(0xC5CCA70)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveImgDanmuService___c_TypeDefinitionIndex = 75051;

	class IdleLiveImgDanmuService___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_1_7B630EA0921A5074*>** StaticGet___9__13_0()
		{
			return (::System::Predicate_1<::Class_1_7B630EA0921A5074*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveImgDanmuService___c_TypeDefinitionIndex)->GetStaticField(0x5D5B0);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveImgDanmuService___c_TypeDefinitionIndex)->GetStaticField(0x5D5B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ClearEndedImageDanmus_b__13_0(::Class_1_7B630EA0921A5074* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7B630EA0921A5074*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEIMGDANMUSERVICE___C___CLEARENDEDIMAGEDANMUS_B__13_0_OFFSET))(this, a1);
		}
	};
}
