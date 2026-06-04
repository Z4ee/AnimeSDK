#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightStageNode; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC07380)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC073C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_1_OFFSET UNITYSDK_OFFSET(0xBC073D0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_2_OFFSET UNITYSDK_OFFSET(0xBC073F0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_3_OFFSET UNITYSDK_OFFSET(0xBC07410)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_4_OFFSET UNITYSDK_OFFSET(0xBC07430)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_5_OFFSET UNITYSDK_OFFSET(0xBC07500)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_6_OFFSET UNITYSDK_OFFSET(0xBC07630)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute___c_TypeDefinitionIndex = 61007;

	class GridFightStageRoute___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>*, ::System::UInt32>** StaticGet___9__4_4()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38940);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*>** StaticGet___9__4_5()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38948);
		}
		static ::RPG::Client::GridFightStageRoute___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightStageRoute___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38950);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::System::UInt32>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38958);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::RPG::Client::GridFightStageNode*>** StaticGet___9__4_6()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::RPG::Client::GridFightStageNode*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38960);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38968);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::System::UInt32>** StaticGet___9__4_3()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightStageRouteConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRoute___c_TypeDefinitionIndex)->GetStaticField(0x38970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SyncRouteID_b__4_1(::RPG::GameCore::GridFightStageRouteConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_1_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncRouteID_b__4_2(::RPG::GameCore::GridFightStageRouteConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_2_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncRouteID_b__4_3(::RPG::GameCore::GridFightStageRouteConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_3_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncRouteID_b__4_4(::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_4_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* _SyncRouteID_b__4_5(::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::RPG::GameCore::GridFightStageRouteConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_5_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStageNode* _SyncRouteID_b__4_6(::RPG::GameCore::GridFightStageRouteConfigRow* a1)
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID, ::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE___C__SYNCROUTEID_B__4_6_OFFSET))(this, a1);
		}
	};
}
