#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ITEMCOMPOSEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA65B740)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA65B770)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___C__INITMAP_B__5_0_OFFSET UNITYSDK_OFFSET(0xA65B780)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule___c_TypeDefinitionIndex = 60534;

	class ItemComposeModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ItemComposeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ItemComposeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeModule___c_TypeDefinitionIndex)->GetStaticField(0x255C0);
		}
		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ItemComposeModule___c_TypeDefinitionIndex)->GetStaticField(0x255C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMap_b__5_0(::System::UInt32 x, ::System::UInt32 y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___C__INITMAP_B__5_0_OFFSET))(this, x, y);
		}
	};
}
