#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::GameCore { class ChimeraDuelChimeraRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBCE750)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBCE780)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xCBCE790)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C___CTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0xCBCE810)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO___C___CTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0xCBCE820)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraInfo___c_TypeDefinitionIndex = 63404;

	class ChimeraDuelChimeraInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ChimeraDuelChimeraRow*, ::RPG::Client::ChimeraDuelChimeraData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::GameCore::ChimeraDuelChimeraRow*, ::RPG::Client::ChimeraDuelChimeraData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraInfo___c_TypeDefinitionIndex)->GetStaticField(0x43C10);
		}
		static ::RPG::Client::ChimeraDuelChimeraInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelChimeraInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraInfo___c_TypeDefinitionIndex)->GetStaticField(0x43C18);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraInfo___c_TypeDefinitionIndex)->GetStaticField(0x43C20);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraInfo___c_TypeDefinitionIndex)->GetStaticField(0x43C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraData* __ctor_b__2_0(::RPG::GameCore::ChimeraDuelChimeraRow* a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__2_1(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C___CTOR_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__2_2(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO___C___CTOR_B__2_2_OFFSET))(this, a1);
		}
	};
}
