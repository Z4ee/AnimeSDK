#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultipleDropData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MULTIPLEDROPUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD8E66C0)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD8E66F0)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETALLDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0xD8E67B0)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xD8E6700)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0xD8E6720)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETTOPDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0xD8E6790)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropUtils___c_TypeDefinitionIndex = 66323;

	class MultipleDropUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x6B790);
		}
		static ::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x6B798);
		}
		static ::RPG::Client::MultipleDropUtils___c** StaticGet___9()
		{
			return (::RPG::Client::MultipleDropUtils___c**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x6B7A0);
		}
		static ::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x6B7A8);
		}
		static ::System::Func_3<::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropTimesData>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropTimesData>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x6B7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMultipleDropTimesData_b__5_0(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_0_OFFSET))(this, a1);
		}

		::RPG::Client::MultipleDropTimesData _GetMultipleDropTimesData_b__5_1(::RPG::Client::MultipleDropTimesData a1, ::RPG::Client::MultipleDropData* a2)
		{
			return ((::RPG::Client::MultipleDropTimesData(*)(::PVOID, ::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetTopData_b__6_0(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETTOPDATA_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllData_b__7_0(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETALLDATA_B__7_0_OFFSET))(this, a1);
		}
	};
}
