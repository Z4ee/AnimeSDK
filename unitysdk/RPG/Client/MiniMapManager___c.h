#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_516;
namespace RPG::Client { class MiniMapZone; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BACEC0)
#define RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BACEF0)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_0_OFFSET UNITYSDK_OFFSET(0x9BACF00)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_1_OFFSET UNITYSDK_OFFSET(0x9BAD240)
#define RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__24_0_OFFSET UNITYSDK_OFFSET(0x9BAD390)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager___c_TypeDefinitionIndex = 49139;

	class MiniMapManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MiniMapManager___c** StaticGet___9()
		{
			return (::RPG::Client::MiniMapManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30FB0);
		}
		static ::System::Comparison_1<::RPG::Client::MiniMapZone*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::RPG::Client::MiniMapZone*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30FB8);
		}
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_516*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_516*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30FC0);
		}
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_516*>** StaticGet___9__19_1()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_516*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x30FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMiniMapIcons_b__19_0(::Class_0_16E4307DCC419505_516* A, ::Class_0_16E4307DCC419505_516* B)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_516*, ::Class_0_16E4307DCC419505_516*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_0_OFFSET))(this, A, B);
		}

		::System::Int32 _GetMiniMapIcons_b__19_1(::Class_0_16E4307DCC419505_516* A, ::Class_0_16E4307DCC419505_516* B)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_516*, ::Class_0_16E4307DCC419505_516*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__19_1_OFFSET))(this, A, B);
		}

		::System::Int32 __RegisterZoneInternal_b__24_0(::RPG::Client::MiniMapZone* a, ::RPG::Client::MiniMapZone* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__24_0_OFFSET))(this, a, b);
		}
	};
}
