#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueHandbookBuffData; }
namespace RPG::Client { class RogueHandbookMiracleData; }
namespace RPG::Client { class RogueHandbookRandomEventData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB047440)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB047480)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_0_OFFSET UNITYSDK_OFFSET(0xB047490)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_1_OFFSET UNITYSDK_OFFSET(0xB0474B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_2_OFFSET UNITYSDK_OFFSET(0xB047560)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_3_OFFSET UNITYSDK_OFFSET(0xB047600)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB0476A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_1_OFFSET UNITYSDK_OFFSET(0xB0476C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_2_OFFSET UNITYSDK_OFFSET(0xB0476E0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xB047710)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_1_OFFSET UNITYSDK_OFFSET(0xB047730)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule___c_TypeDefinitionIndex = 62078;

	class RogueHandbookModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19D90);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19D98);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DA0);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DA8);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::UInt32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DB0);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DB8);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DC0);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DC8);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DD0);
		}
		static ::RPG::Client::RogueHandbookModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueHandbookModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x19DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedBuffByType_b__7_0(::RPG::Client::RogueHandbookBuffData* a)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_0_OFFSET))(this, a);
		}

		::System::UInt32 _GetSortedBuffByType_b__7_1(::RPG::Client::RogueHandbookBuffData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_1_OFFSET))(this, a);
		}

		::System::UInt32 _GetSortedBuffByType_b__7_2(::RPG::Client::RogueHandbookBuffData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_2_OFFSET))(this, a);
		}

		::System::UInt32 _GetSortedBuffByType_b__7_3(::RPG::Client::RogueHandbookBuffData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_3_OFFSET))(this, a);
		}

		::System::Int32 _GetSortedMiracle_b__8_0(::RPG::Client::RogueHandbookMiracleData* a)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueHandbookMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_0_OFFSET))(this, a);
		}

		::System::Boolean _GetSortedMiracle_b__8_1(::RPG::Client::RogueHandbookMiracleData* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueHandbookMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_1_OFFSET))(this, a);
		}

		::System::UInt32 _GetSortedMiracle_b__8_2(::RPG::Client::RogueHandbookMiracleData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_2_OFFSET))(this, a);
		}

		::System::UInt32 _GetSortedRandomEventData_b__14_0(::RPG::Client::RogueHandbookRandomEventData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_0_OFFSET))(this, a);
		}

		::System::UInt32 _GetSortedRandomEventData_b__14_1(::RPG::Client::RogueHandbookRandomEventData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_1_OFFSET))(this, a);
		}
	};
}
