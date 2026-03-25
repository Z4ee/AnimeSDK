#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueHandbookBuffData; }
namespace RPG::Client { class RogueHandbookMiracleData; }
namespace RPG::Client { class RogueHandbookRandomEventData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA310750)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA310790)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_0_OFFSET UNITYSDK_OFFSET(0xA3107A0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_1_OFFSET UNITYSDK_OFFSET(0xA3107C0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_2_OFFSET UNITYSDK_OFFSET(0xA310870)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDBUFFBYTYPE_B__7_3_OFFSET UNITYSDK_OFFSET(0xA310910)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_0_OFFSET UNITYSDK_OFFSET(0xA3109B0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_1_OFFSET UNITYSDK_OFFSET(0xA3109D0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDMIRACLE_B__8_2_OFFSET UNITYSDK_OFFSET(0xA3109F0)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xA310A20)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__GETSORTEDRANDOMEVENTDATA_B__14_1_OFFSET UNITYSDK_OFFSET(0xA310A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule___c_TypeDefinitionIndex = 54890;

	class RogueHandbookModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A30);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::UInt32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A38);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A40);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A48);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookBuffData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A50);
		}
		static ::RPG::Client::RogueHandbookModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueHandbookModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A58);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A60);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookRandomEventData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A68);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A70);
		}
		static ::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::RogueHandbookMiracleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueHandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x15A78);
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
