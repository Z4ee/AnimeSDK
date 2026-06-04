#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB9F32FCA772D309_6;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7B40D0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CREATE_B__2_0_OFFSET UNITYSDK_OFFSET(0xC7B4120)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B4110)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSettleData___c_TypeDefinitionIndex = 63033;

	class RogueMagicSettleData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueMagicSettleData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueMagicSettleData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicSettleData___c_TypeDefinitionIndex)->GetStaticField(0x33150);
		}
		static ::System::Comparison_1<::Class_1_DB9F32FCA772D309_6*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::Class_1_DB9F32FCA772D309_6*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicSettleData___c_TypeDefinitionIndex)->GetStaticField(0x33158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__2_0(::Class_1_DB9F32FCA772D309_6* a1, ::Class_1_DB9F32FCA772D309_6* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_DB9F32FCA772D309_6*, ::Class_1_DB9F32FCA772D309_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CREATE_B__2_0_OFFSET))(this, a1, a2);
		}
	};
}
