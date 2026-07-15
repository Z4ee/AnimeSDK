#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CE1CD0)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE1D10)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C___ENTERERAREGION_B__29_2_OFFSET UNITYSDK_OFFSET(0x17CE1D20)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c_TypeDefinitionIndex = 57787;

	class EraFlipperManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EraFlipperManager___c** StaticGet___9()
		{
			return (::RPG::Client::EraFlipperManager___c**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperManager___c_TypeDefinitionIndex)->GetStaticField(0x6BE80);
		}
		static ::System::Func_2<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*, ::System::UInt32>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperManager___c_TypeDefinitionIndex)->GetStaticField(0x6BE88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __EnterEraRegion_b__29_2(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C___ENTERERAREGION_B__29_2_OFFSET))(this, a1);
		}
	};
}
