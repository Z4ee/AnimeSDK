#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PUNKLORDINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF27940)
#define RPG_CLIENT_PUNKLORDINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF27980)
#define RPG_CLIENT_PUNKLORDINSTANCE___C__KILLEDBYOTHERS_B__6_0_OFFSET UNITYSDK_OFFSET(0xAF27A00)
#define RPG_CLIENT_PUNKLORDINSTANCE___C__TIMEOUT_B__5_0_OFFSET UNITYSDK_OFFSET(0xAF27990)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordInstance___c_TypeDefinitionIndex = 61470;

	class PunkLordInstance___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PunkLordInstance___c_TypeDefinitionIndex)->GetStaticField(0xDC20);
		}
		static ::RPG::Client::PunkLordInstance___c** StaticGet___9()
		{
			return (::RPG::Client::PunkLordInstance___c**)Il2CppClass::FromTypeDefinitionIndex(PunkLordInstance___c_TypeDefinitionIndex)->GetStaticField(0xDC28);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PunkLordInstance___c_TypeDefinitionIndex)->GetStaticField(0xDC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::Void _TimeOut_b__5_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C__TIMEOUT_B__5_0_OFFSET))(this, isOk);
		}

		::System::Void _KilledByOthers_b__6_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C__KILLEDBYOTHERS_B__6_0_OFFSET))(this, isOk);
		}
	};
}
