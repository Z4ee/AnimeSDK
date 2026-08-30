#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE584A0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE584E0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C___ISGROUPCLOSED_B__5_0_OFFSET UNITYSDK_OFFSET(0xCE584F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProfileQuestGroupData___c_TypeDefinitionIndex = 63775;

	class ElfProfileQuestGroupData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ElfProfileQuestGroupData___c** StaticGet___9()
		{
			return (::RPG::Client::ElfProfileQuestGroupData___c**)Il2CppClass::FromTypeDefinitionIndex(ElfProfileQuestGroupData___c_TypeDefinitionIndex)->GetStaticField(0x64FE0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElfProfileQuestGroupData___c_TypeDefinitionIndex)->GetStaticField(0x64FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __IsGroupClosed_b__5_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C___ISGROUPCLOSED_B__5_0_OFFSET))(this, a1);
		}
	};
}
