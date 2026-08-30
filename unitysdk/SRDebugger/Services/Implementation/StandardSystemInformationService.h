#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class InfoEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_ADD_OFFSET UNITYSDK_OFFSET(0x1BDAD3F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x1BDB0240)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEREPORT_OFFSET UNITYSDK_OFFSET(0x1BDB3D00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCATEGORIES_OFFSET UNITYSDK_OFFSET(0x1BDB3A20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCLOUDMANIFESTPRETTYNAME_OFFSET UNITYSDK_OFFSET(0x1BDB47D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETINFO_OFFSET UNITYSDK_OFFSET(0x1BDB3AF0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB01C0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int StandardSystemInformationService_TypeDefinitionIndex = 37396;

	class StandardSystemInformationService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>*>* _info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetCategories()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCATEGORIES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>* GetInfo(::System::String* a1)
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETINFO_OFFSET))(this, a1);
		}

		::System::Void Add(::SRDebugger::InfoEntry* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::InfoEntry*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* CreateReport(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEREPORT_OFFSET))(this, a1);
		}

		::System::Void CreateDefaultSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_CREATEDEFAULTSET_OFFSET))(this);
		}

		static ::System::String* GetCloudManifestPrettyName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDSYSTEMINFORMATIONSERVICE_GETCLOUDMANIFESTPRETTYNAME_OFFSET))(a1);
		}
	};
}
