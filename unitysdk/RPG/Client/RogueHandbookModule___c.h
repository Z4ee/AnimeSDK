#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueHandbookBuffData; }
namespace RPG::Client { class RogueHandbookMiracleData; }
namespace RPG::Client { class RogueHandbookRandomEventData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A467D10)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A467D50)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A467D60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1A467DB0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1A467E60)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1A467F00)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A467FA0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_1_OFFSET UNITYSDK_OFFSET(0x1A467FC0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_2_OFFSET UNITYSDK_OFFSET(0x1A467FE0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A468040)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_1_OFFSET UNITYSDK_OFFSET(0x1A468060)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule___c_TypeDefinitionIndex = 64378;

	class RogueHandbookModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x24270);
		}
		static ::RPG::Client::RogueHandbookModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueHandbookModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x24278);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x24280);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x24288);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x24290);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x24298);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x242A0);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::UInt32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x242A8);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x242B0);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x242B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedBuffByType_b__7_0(::RPG::Client::RogueHandbookBuffData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffByType_b__7_1(::RPG::Client::RogueHandbookBuffData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffByType_b__7_2(::RPG::Client::RogueHandbookBuffData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffByType_b__7_3(::RPG::Client::RogueHandbookBuffData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_3_OFFSET))(this, a1);
		}

		::System::Int32 _GetSortedMiracle_b__8_0(::RPG::Client::RogueHandbookMiracleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueHandbookMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetSortedMiracle_b__8_1(::RPG::Client::RogueHandbookMiracleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueHandbookMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedMiracle_b__8_2(::RPG::Client::RogueHandbookMiracleData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedRandomEventData_b__14_0(::RPG::Client::RogueHandbookRandomEventData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedRandomEventData_b__14_1(::RPG::Client::RogueHandbookRandomEventData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueHandbookRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_1_OFFSET))(this, a1);
		}
	};
}
