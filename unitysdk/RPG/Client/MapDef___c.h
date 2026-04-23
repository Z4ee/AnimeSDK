#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_BD898AE9C0E88E25;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MAPDEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7EAE40)
#define RPG_CLIENT_MAPDEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA7EAE80)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET UNITYSDK_OFFSET(0xA7EAE90)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET UNITYSDK_OFFSET(0xA7EAEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef___c_TypeDefinitionIndex = 57274;

	class MapDef___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*>, ::Class_2_BD898AE9C0E88E25*>** StaticGet___9__212_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*>, ::Class_2_BD898AE9C0E88E25*>**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x223C0);
		}
		static ::RPG::Client::MapDef___c** StaticGet___9()
		{
			return (::RPG::Client::MapDef___c**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x223C8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*>, ::System::UInt32>** StaticGet___9__212_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MapDef___c_TypeDefinitionIndex)->GetStaticField(0x223D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetActiveGroupDefs_b__212_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*> k)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET))(this, k);
		}

		::Class_2_BD898AE9C0E88E25* _GetActiveGroupDefs_b__212_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*> v)
		{
			return ((::Class_2_BD898AE9C0E88E25*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_2_BD898AE9C0E88E25*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET))(this, v);
		}
	};
}
