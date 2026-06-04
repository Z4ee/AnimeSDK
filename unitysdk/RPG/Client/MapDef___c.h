#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_510E2A3B742BC0DC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MAPDEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBED3E40)
#define RPG_CLIENT_MAPDEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBED3E80)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET UNITYSDK_OFFSET(0xBED3E90)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET UNITYSDK_OFFSET(0xBED3EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef___c_TypeDefinitionIndex = 58064;

	class MapDef___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MapDef___c** StaticGet___9()
		{
			return (::RPG::Client::MapDef___c**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x528E0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*>, ::System::UInt32>** StaticGet___9__212_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x528E8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*>, ::Class_2_510E2A3B742BC0DC*>** StaticGet___9__212_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*>, ::Class_2_510E2A3B742BC0DC*>**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x528F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetActiveGroupDefs_b__212_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET))(this, a1);
		}

		::Class_2_510E2A3B742BC0DC* _GetActiveGroupDefs_b__212_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*> a1)
		{
			return ((::Class_2_510E2A3B742BC0DC*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_510E2A3B742BC0DC*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET))(this, a1);
		}
	};
}
