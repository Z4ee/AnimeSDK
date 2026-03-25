#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_6;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROUNDSETTLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3F9780)
#define RPG_CLIENT_ROUNDSETTLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F97C0)
#define RPG_CLIENT_ROUNDSETTLEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xA3F97D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoundSettleInfo___c_TypeDefinitionIndex = 49843;

	class RoundSettleInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_6*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_6*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RoundSettleInfo___c_TypeDefinitionIndex)->GetStaticField(0x21450);
		}
		static ::RPG::Client::RoundSettleInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RoundSettleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RoundSettleInfo___c_TypeDefinitionIndex)->GetStaticField(0x21458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_0(::Class_1_6EBEA8069CDA622C_6* d)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO___C___CTOR_B__0_0_OFFSET))(this, d);
		}
	};
}
