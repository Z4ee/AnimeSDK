#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x933CB60)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x933CBA0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__REQUESTUNLOCKGRID_B__3_0_OFFSET UNITYSDK_OFFSET(0x933CBB0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareUnlockGridPhase___c_TypeDefinitionIndex = 62072;

	class PrepareUnlockGridPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareUnlockGridPhase___c_TypeDefinitionIndex)->GetStaticField(0x46120);
		}
		static ::RPG::Client::ChenLingBattle::PrepareUnlockGridPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::PrepareUnlockGridPhase___c**)Il2CppClass::FromTypeDefinitionIndex(PrepareUnlockGridPhase___c_TypeDefinitionIndex)->GetStaticField(0x46128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestUnlockGrid_b__3_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREUNLOCKGRIDPHASE___C__REQUESTUNLOCKGRID_B__3_0_OFFSET))(this, e);
		}
	};
}
