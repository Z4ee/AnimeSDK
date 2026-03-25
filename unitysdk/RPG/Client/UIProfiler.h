#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_Key.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIProfiler_SampleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET UNITYSDK_OFFSET(0xA729AC0)
#define RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xA7293F0)
#define RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0xA729CB0)
#define RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xA729740)
#define RPG_CLIENT_UIPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA729D80)
#define RPG_CLIENT_UIPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0xA729D70)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_TypeDefinitionIndex = 59985;

	class UIProfiler : public ::System::Object
	{
	public:
		static ::RPG::Client::UIController** StaticGet__Controller()
		{
			return (::RPG::Client::UIController**)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0x26410);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::UIProfiler_Key, ::RPG::Client::UIProfiler_SampleData*>** StaticGet__SampleDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::UIProfiler_Key, ::RPG::Client::UIProfiler_SampleData*>**)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0x26418);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIProfiler_TypeDefinitionIndex)->GetStaticField(0xC770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER__CCTOR_OFFSET))();
		}

		static ::System::Void BeginSample(::RPG::Client::UIProfiler_SampleType sampleType, ::System::String* name)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET))(sampleType, name);
		}

		static ::System::Void EndSample(::RPG::Client::UIProfiler_SampleType sampleType, ::System::String* name)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET))(sampleType, name);
		}

		static ::System::Void AsyncShowUI(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET))(path);
		}

		static ::System::Void CloseUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET))();
		}
	};
}
