#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EARLYACCESSCONTENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x952A490)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x952A4C0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__GETALLFLOORIDS_B__21_0_OFFSET UNITYSDK_OFFSET(0x952A4D0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C___PREPAREFLOORDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0x952A530)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c_TypeDefinitionIndex = 51689;

	class EarlyAccessContent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_F730B69FCB9EE042*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_1_F730B69FCB9EE042*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessContent___c_TypeDefinitionIndex)->GetStaticField(0x45A40);
		}
		static ::RPG::Client::EarlyAccessContent___c** StaticGet___9()
		{
			return (::RPG::Client::EarlyAccessContent___c**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessContent___c_TypeDefinitionIndex)->GetStaticField(0x45A48);
		}
		static ::System::Converter_2<::Class_1_F730B69FCB9EE042*, ::System::UInt32>** StaticGet___9__21_0()
		{
			return (::System::Converter_2<::Class_1_F730B69FCB9EE042*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessContent___c_TypeDefinitionIndex)->GetStaticField(0x45A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllFloorIDs_b__21_0(::Class_1_F730B69FCB9EE042* floorData)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__GETALLFLOORIDS_B__21_0_OFFSET))(this, floorData);
		}

		::RPG::Client::Promises::IPromise* __PrepareFloorData_b__32_0(::Class_1_F730B69FCB9EE042* floor)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C___PREPAREFLOORDATA_B__32_0_OFFSET))(this, floor);
		}
	};
}
