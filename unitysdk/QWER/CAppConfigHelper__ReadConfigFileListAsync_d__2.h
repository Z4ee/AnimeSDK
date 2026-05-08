#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"

namespace QWER { class CConfigFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlNodeList; }

#define QWER_CAPPCONFIGHELPER__READCONFIGFILELISTASYNC_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE83810)
#define QWER_CAPPCONFIGHELPER__READCONFIGFILELISTASYNC_D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1BE843C0)
#define QWER_CAPPCONFIGHELPER__READCONFIGFILELISTASYNC_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE82FA0)

namespace QWER
{
	inline static constexpr unsigned int CAppConfigHelper__ReadConfigFileListAsync_d__2_TypeDefinitionIndex = 85837;

	class CAppConfigHelper__ReadConfigFileListAsync_d__2 : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::QWER::CConfigFileInfo*>*> __t__builder; // 0x10
		::System::Collections::Generic::List_1<::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*>* _oTasks_5__5; // 0x28
		::Il2CppArray<::System::Byte>* _oConfigList_5__11; // 0x30
		::System::Xml::XmlDocument* _oXmlDocument_5__3; // 0x38
		::System::Xml::XmlNode* _oXmlNode_5__17; // 0x40
		::System::Xml::XmlNodeList* _oXmlNodeList1_5__14; // 0x48
		::System::Xml::XmlNodeList* _oXmlNodeList_5__4; // 0x50
		::System::Xml::XmlDocument* _oXmlConfigList_5__13; // 0x58
		::System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppArray<::System::Byte>*> __u__1; // 0x60
		::System::String* _strContent_5__2; // 0x68
		::Il2CppArray<::System::Byte>* __s__15; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::QWER::CConfigFileInfo*>* _oRet_5__6; // 0x78
		::System::String* _strConfigList_5__12; // 0x80
		::System::String* strUrl; // 0x88
		::System::Xml::XmlNode* _oXmlNode_5__9; // 0x90
		::Il2CppArray<::System::Byte>* __s__7; // 0x98
		::Il2CppArray<::System::Byte>* _oContent_5__1; // 0xA0
		::System::Int32 __1__state; // 0xA8
		::System::Int32 _j_5__16; // 0xAC
		::System::Int32 _i_5__10; // 0xB0
		::System::Int32 _i_5__8; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READCONFIGFILELISTASYNC_D__2__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READCONFIGFILELISTASYNC_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CAPPCONFIGHELPER__READCONFIGFILELISTASYNC_D__2_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
