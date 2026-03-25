#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FindChestData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FINDCHESTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96C6DD0)
#define RPG_CLIENT_FINDCHESTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96C6E00)
#define RPG_CLIENT_FINDCHESTMODULE___C__GETSORTEDFINDCHESTDATALIST_B__9_0_OFFSET UNITYSDK_OFFSET(0x96C6E10)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule___c_TypeDefinitionIndex = 52117;

	class FindChestModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FindChestModule___c** StaticGet___9()
		{
			return (::RPG::Client::FindChestModule___c**)Il2CppClass::FromTypeDefinitionIndex(FindChestModule___c_TypeDefinitionIndex)->GetStaticField(0x4EE0);
		}
		static ::System::Comparison_1<::RPG::Client::FindChestData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::FindChestData*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestModule___c_TypeDefinitionIndex)->GetStaticField(0x4EE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedFindChestDataList_b__9_0(::RPG::Client::FindChestData* x, ::RPG::Client::FindChestData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FindChestData*, ::RPG::Client::FindChestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__GETSORTEDFINDCHESTDATALIST_B__9_0_OFFSET))(this, x, y);
		}
	};
}
