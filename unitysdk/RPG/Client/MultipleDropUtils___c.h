#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultipleDropData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MULTIPLEDROPUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAFB1A0)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFB1D0)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETALLDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0xAAFB290)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xAAFB1E0)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0xAAFB200)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__GETTOPDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0xAAFB270)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropUtils___c_TypeDefinitionIndex = 61088;

	class MultipleDropUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x48BB0);
		}
		static ::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x48BB8);
		}
		static ::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::MultipleDropData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x48BC0);
		}
		static ::RPG::Client::MultipleDropUtils___c** StaticGet___9()
		{
			return (::RPG::Client::MultipleDropUtils___c**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x48BC8);
		}
		static ::System::Func_3<::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropTimesData>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropTimesData>**)Il2CppClass::FromTypeDefinitionIndex(MultipleDropUtils___c_TypeDefinitionIndex)->GetStaticField(0x48BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMultipleDropTimesData_b__5_0(::RPG::Client::MultipleDropData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_0_OFFSET))(this, t);
		}

		::RPG::Client::MultipleDropTimesData _GetMultipleDropTimesData_b__5_1(::RPG::Client::MultipleDropTimesData current, ::RPG::Client::MultipleDropData* t)
		{
			return ((::RPG::Client::MultipleDropTimesData(*)(::PVOID, ::RPG::Client::MultipleDropTimesData, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETMULTIPLEDROPTIMESDATA_B__5_1_OFFSET))(this, current, t);
		}

		::System::Boolean _GetTopData_b__6_0(::RPG::Client::MultipleDropData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETTOPDATA_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _GetAllData_b__7_0(::RPG::Client::MultipleDropData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__GETALLDATA_B__7_0_OFFSET))(this, x);
		}
	};
}
