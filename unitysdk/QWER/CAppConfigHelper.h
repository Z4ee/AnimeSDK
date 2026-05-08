#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CConfigFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http { class HttpClient; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define QWER_CAPPCONFIGHELPER_PARSECOMMANDLINEARGS_OFFSET UNITYSDK_OFFSET(0x1BE83470)
#define QWER_CAPPCONFIGHELPER_READCONFIGFILELISTASYNC_OFFSET UNITYSDK_OFFSET(0x1BE82EE0)
#define QWER_CAPPCONFIGHELPER_READFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1BE82E20)
#define QWER_CAPPCONFIGHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE837C0)
#define QWER_CAPPCONFIGHELPER__READLOCALFILE_OFFSET UNITYSDK_OFFSET(0x1BE83090)
#define QWER_CAPPCONFIGHELPER__READWEBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1BE82FB0)

namespace QWER
{
	inline static constexpr unsigned int CAppConfigHelper_TypeDefinitionIndex = 85835;

	class CAppConfigHelper : public ::System::Object
	{
	public:
		static ::System::Net::Http::HttpClient** StaticGet_m_oHttpClient()
		{
			return (::System::Net::Http::HttpClient**)Il2CppClass::FromTypeDefinitionIndex(CAppConfigHelper_TypeDefinitionIndex)->GetStaticField(0x4ABA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__CCTOR_OFFSET))();
		}

		static ::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* ReadFileAsync(::System::String* strUrl)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER_READFILEASYNC_OFFSET))(strUrl);
		}

		static ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::QWER::CConfigFileInfo*>*>* ReadConfigFileListAsync(::System::String* strUrl)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::QWER::CConfigFileInfo*>*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER_READCONFIGFILELISTASYNC_OFFSET))(strUrl);
		}

		static ::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* _ReadWebFileAsync(::System::Net::Http::HttpClient* oHttpClient, ::System::String* strUrl, ::System::Int32 dwCount)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::System::Net::Http::HttpClient*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READWEBFILEASYNC_OFFSET))(oHttpClient, strUrl, dwCount);
		}

		static ::Il2CppArray<::System::Byte>* _ReadLocalFile(::System::String* strUrl)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READLOCALFILE_OFFSET))(strUrl);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* ParseCommandLineArgs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER_PARSECOMMANDLINEARGS_OFFSET))();
		}
	};
}
