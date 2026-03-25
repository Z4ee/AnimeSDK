#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_D8257A310CAD757C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MAPDEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AF2080)
#define RPG_CLIENT_MAPDEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF20C0)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET UNITYSDK_OFFSET(0x9AF20D0)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET UNITYSDK_OFFSET(0x9AF20E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef___c_TypeDefinitionIndex = 50415;

	class MapDef___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*>, ::System::UInt32>** StaticGet___9__212_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x2B250);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*>, ::Class_2_D8257A310CAD757C*>** StaticGet___9__212_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*>, ::Class_2_D8257A310CAD757C*>**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x2B258);
		}
		static ::RPG::Client::MapDef___c** StaticGet___9()
		{
			return (::RPG::Client::MapDef___c**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x2B260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetActiveGroupDefs_b__212_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*> k)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET))(this, k);
		}

		::Class_2_D8257A310CAD757C* _GetActiveGroupDefs_b__212_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*> v)
		{
			return ((::Class_2_D8257A310CAD757C*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_D8257A310CAD757C*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET))(this, v);
		}
	};
}
