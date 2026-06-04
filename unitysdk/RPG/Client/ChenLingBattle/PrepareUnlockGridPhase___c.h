#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5C4250)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C4290)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__REQUESTUNLOCKGRID_B__3_0_OFFSET UNITYSDK_OFFSET(0xB5C42A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareUnlockGridPhase___c_TypeDefinitionIndex = 70883;

	class PrepareUnlockGridPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareUnlockGridPhase___c_TypeDefinitionIndex)->GetStaticField(0x60410);
		}
		static ::RPG::Client::ChenLingBattle::PrepareUnlockGridPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::PrepareUnlockGridPhase___c**)Il2CppClass::FromTypeDefinitionIndex(PrepareUnlockGridPhase___c_TypeDefinitionIndex)->GetStaticField(0x60418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestUnlockGrid_b__3_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__REQUESTUNLOCKGRID_B__3_0_OFFSET))(this, a1);
		}
	};
}
