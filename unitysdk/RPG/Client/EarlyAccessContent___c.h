#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F730B69FCB9EE042;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EARLYACCESSCONTENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD0A3E0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCD0A410)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__GETALLFLOORIDS_B__25_0_OFFSET UNITYSDK_OFFSET(0xCD0A420)
#define RPG_CLIENT_EARLYACCESSCONTENT___C___PREPAREFLOORDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0xCD0A480)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c_TypeDefinitionIndex = 63642;

	class EarlyAccessContent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_F730B69FCB9EE042*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::Class_1_F730B69FCB9EE042*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessContent___c_TypeDefinitionIndex)->GetStaticField(0x34290);
		}
		static ::System::Converter_2<::Class_1_F730B69FCB9EE042*, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Converter_2<::Class_1_F730B69FCB9EE042*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessContent___c_TypeDefinitionIndex)->GetStaticField(0x34298);
		}
		static ::RPG::Client::EarlyAccessContent___c** StaticGet___9()
		{
			return (::RPG::Client::EarlyAccessContent___c**)Il2CppClass::FromTypeDefinitionIndex(EarlyAccessContent___c_TypeDefinitionIndex)->GetStaticField(0x342A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllFloorIDs_b__25_0(::Class_1_F730B69FCB9EE042* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__GETALLFLOORIDS_B__25_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __PrepareFloorData_b__38_0(::Class_1_F730B69FCB9EE042* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F730B69FCB9EE042*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C___PREPAREFLOORDATA_B__38_0_OFFSET))(this, a1);
		}
	};
}
