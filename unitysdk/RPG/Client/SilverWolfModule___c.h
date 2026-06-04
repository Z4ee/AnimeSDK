#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SilverWolfGroupData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SILVERWOLFMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8CAE80)
#define RPG_CLIENT_SILVERWOLFMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8CAEC0)
#define RPG_CLIENT_SILVERWOLFMODULE___C__GETSORTEDSILVERWOLFGROUPDATAS_B__1_0_OFFSET UNITYSDK_OFFSET(0xC8CAED0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfModule___c_TypeDefinitionIndex = 63586;

	class SilverWolfModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SilverWolfGroupData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::SilverWolfGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(SilverWolfModule___c_TypeDefinitionIndex)->GetStaticField(0x46B20);
		}
		static ::RPG::Client::SilverWolfModule___c** StaticGet___9()
		{
			return (::RPG::Client::SilverWolfModule___c**)Il2CppClass::FromTypeDefinitionIndex(SilverWolfModule___c_TypeDefinitionIndex)->GetStaticField(0x46B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedSilverWolfGroupDatas_b__1_0(::RPG::Client::SilverWolfGroupData* a1, ::RPG::Client::SilverWolfGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SilverWolfGroupData*, ::RPG::Client::SilverWolfGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___C__GETSORTEDSILVERWOLFGROUPDATAS_B__1_0_OFFSET))(this, a1, a2);
		}
	};
}
