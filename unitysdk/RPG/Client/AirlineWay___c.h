#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AirlineVariableScalePoint; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AIRLINEWAY___C__AWAKE_B__16_0_OFFSET UNITYSDK_OFFSET(0x908DDA0)
#define RPG_CLIENT_AIRLINEWAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x908DD60)
#define RPG_CLIENT_AIRLINEWAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x908DD90)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineWay___c_TypeDefinitionIndex = 48397;

	class AirlineWay___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AirlineWay___c** StaticGet___9()
		{
			return (::RPG::Client::AirlineWay___c**)Il2CppClass::FromTypeDefinitionIndex(AirlineWay___c_TypeDefinitionIndex)->GetStaticField(0x32100);
		}
		static ::System::Comparison_1<::RPG::Client::AirlineVariableScalePoint*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::AirlineVariableScalePoint*>**)Il2CppClass::FromTypeDefinitionIndex(AirlineWay___c_TypeDefinitionIndex)->GetStaticField(0x32108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Awake_b__16_0(::RPG::Client::AirlineVariableScalePoint* item1, ::RPG::Client::AirlineVariableScalePoint* item2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AirlineVariableScalePoint*, ::RPG::Client::AirlineVariableScalePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY___C__AWAKE_B__16_0_OFFSET))(this, item1, item2);
		}
	};
}
