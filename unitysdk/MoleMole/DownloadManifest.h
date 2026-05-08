#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

class Class_2_7FC98B52833961D9;
namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define MOLEMOLE_DOWNLOADMANIFEST_METHOD_1_92C46EC231D398A9_OFFSET UNITYSDK_OFFSET(0x181F26C0)
#define MOLEMOLE_DOWNLOADMANIFEST_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181F24D0)
#define MOLEMOLE_DOWNLOADMANIFEST_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181F2490)
#define MOLEMOLE_DOWNLOADMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x181F26B0)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadManifest_TypeDefinitionIndex = 78875;

	class DownloadManifest : public ::System::Object
	{
	public:
		::System::String* remoteParentDir; // 0x10
		::Il2CppArray<::MoleMole::DownloadFileInfo*>* files; // 0x18
		::Il2CppArray<::Enum_3_34F7035555410463_1>* packages; // 0x20
		::Il2CppArray<::Enum_3_34F7035555410463_1>* basePackages; // 0x28
		::Il2CppArray<::Enum_3_34F7035555410463_1>* baseOnlyPackages; // 0x30
		::Il2CppArray<::System::Int32>* baseOnlyTitles; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::Class_2_7FC98B52833961D9* Method_1_92C46EC231D398A9()
		{
			return ((::Class_2_7FC98B52833961D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADMANIFEST_METHOD_1_92C46EC231D398A9_OFFSET))(this);
		}
	};
}
