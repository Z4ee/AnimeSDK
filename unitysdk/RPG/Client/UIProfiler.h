#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_Key.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIProfiler_SampleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET UNITYSDK_OFFSET(0x183075A0)
#define RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x18306F40)
#define RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0x18307780)
#define RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x18307250)
#define RPG_CLIENT_UIPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18307850)
#define RPG_CLIENT_UIPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x18307840)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_TypeDefinitionIndex = 69824;

	class UIProfiler : public ::System::Object
	{
	public:
		static ::RPG::Client::UIController** StaticGet__Controller()
		{
			return (::RPG::Client::UIController**)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0x4F0E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UIProfiler_Key, ::RPG::Client::UIProfiler_SampleData*>** StaticGet__SampleDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UIProfiler_Key, ::RPG::Client::UIProfiler_SampleData*>**)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0x4F0E8);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0xE2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER__CCTOR_OFFSET))();
		}

		static ::System::Void BeginSample(::RPG::Client::UIProfiler_SampleType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void EndSample(::RPG::Client::UIProfiler_SampleType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void AsyncShowUI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET))(a1);
		}

		static ::System::Void CloseUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET))();
		}
	};
}
