#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FantasticStoryBuffData; }
namespace RPG::Client { class FantasticStoryBuffSlotData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B2F70)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B2FA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSLOTBUFFDATA_B__37_0_OFFSET UNITYSDK_OFFSET(0x1B8B2FF0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFDATA_B__35_0_OFFSET UNITYSDK_OFFSET(0x1B8B2FD0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFSLOTDATA_B__36_0_OFFSET UNITYSDK_OFFSET(0x1B8B2FE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDCHAPTERDATA_B__33_0_OFFSET UNITYSDK_OFFSET(0x1B8B2FB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDPARAGRAPHDATA_B__34_0_OFFSET UNITYSDK_OFFSET(0x1B8B2FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityModule___c_TypeDefinitionIndex = 64035;

	class FantasticStoryActivityModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*>, ::System::UInt32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x64B10);
		}
		static ::System::Comparison_1<::RPG::Client::FantasticStoryBuffData*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::RPG::Client::FantasticStoryBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x64B18);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*>, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x64B20);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*>, ::System::UInt32>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x64B28);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*>, ::System::UInt32>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x64B30);
		}
		static ::RPG::Client::FantasticStoryActivityModule___c** StaticGet___9()
		{
			return (::RPG::Client::FantasticStoryActivityModule___c**)Il2CppClass::FromTypeDefinitionIndex(FantasticStoryActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x64B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetSortedChapterData_b__33_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryChapterData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDCHAPTERDATA_B__33_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedParagraphData_b__34_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryParagraphData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDPARAGRAPHDATA_B__34_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffData_b__35_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFDATA_B__35_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffSlotData_b__36_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::FantasticStoryBuffSlotData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFSLOTDATA_B__36_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetSlotBuffData_b__37_0(::RPG::Client::FantasticStoryBuffData* a1, ::RPG::Client::FantasticStoryBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryBuffData*, ::RPG::Client::FantasticStoryBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSLOTBUFFDATA_B__37_0_OFFSET))(this, a1, a2);
		}
	};
}
