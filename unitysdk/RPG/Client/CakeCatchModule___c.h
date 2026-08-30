#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchPerformanceData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKECATCHMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A13CD60)
#define RPG_CLIENT_CAKECATCHMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13CDA0)
#define RPG_CLIENT_CAKECATCHMODULE___C__GETALLPERFORMANCEDATA_B__42_0_OFFSET UNITYSDK_OFFSET(0x1A13CDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule___c_TypeDefinitionIndex = 63034;

	class CakeCatchModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeCatchPerformanceData*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeCatchPerformanceData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeCatchModule___c_TypeDefinitionIndex)->GetStaticField(0x14470);
		}
		static ::RPG::Client::CakeCatchModule___c** StaticGet___9()
		{
			return (::RPG::Client::CakeCatchModule___c**)Il2CppClass::FromTypeDefinitionIndex(CakeCatchModule___c_TypeDefinitionIndex)->GetStaticField(0x14478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPerformanceData_b__42_0(::RPG::Client::CakeCatchPerformanceData* a1, ::RPG::Client::CakeCatchPerformanceData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeCatchPerformanceData*, ::RPG::Client::CakeCatchPerformanceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__GETALLPERFORMANCEDATA_B__42_0_OFFSET))(this, a1, a2);
		}
	};
}
