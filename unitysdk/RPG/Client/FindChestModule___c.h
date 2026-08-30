#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FindChestData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FINDCHESTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD064EE0)
#define RPG_CLIENT_FINDCHESTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD064F10)
#define RPG_CLIENT_FINDCHESTMODULE___C__GETSORTEDFINDCHESTDATALIST_B__9_0_OFFSET UNITYSDK_OFFSET(0xD064F20)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule___c_TypeDefinitionIndex = 64263;

	class FindChestModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FindChestModule___c** StaticGet___9()
		{
			return (::RPG::Client::FindChestModule___c**)Il2CppClass::FromTypeDefinitionIndex(FindChestModule___c_TypeDefinitionIndex)->GetStaticField(0xFE00);
		}
		static ::System::Comparison_1<::RPG::Client::FindChestData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::FindChestData*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestModule___c_TypeDefinitionIndex)->GetStaticField(0xFE08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedFindChestDataList_b__9_0(::RPG::Client::FindChestData* a1, ::RPG::Client::FindChestData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FindChestData*, ::RPG::Client::FindChestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__GETSORTEDFINDCHESTDATALIST_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
