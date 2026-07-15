#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_COOKLOGS_APPENDCOOKLOG_OFFSET UNITYSDK_OFFSET(0x1501B650)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_CLEARCOOKLOG_OFFSET UNITYSDK_OFFSET(0x1501BB50)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_DELETECOOKINGFILE_OFFSET UNITYSDK_OFFSET(0x1501BC80)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGFILEPATH_OFFSET UNITYSDK_OFFSET(0x1501BBD0)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGSTRING_OFFSET UNITYSDK_OFFSET(0x1501B630)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GETFILESIZEOFLOGFILE_OFFSET UNITYSDK_OFFSET(0x1501BF20)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1501B4B0)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS_WRITETOLOGFILE_OFFSET UNITYSDK_OFFSET(0x1501B880)
#define HOUDINIENGINEUNITY_HEU_COOKLOGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1501B5A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookLogs_TypeDefinitionIndex = 38464;

	class HEU_CookLogs : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_CookLogs** StaticGet__instance()
		{
			return (::HoudiniEngineUnity::HEU_CookLogs**)Il2CppClass::FromTypeDefinitionIndex(HEU_CookLogs_TypeDefinitionIndex)->GetStaticField(0xDB60);
		}
		// static const ::System::Int32 MAX_COOK_LOG_COUNT = 0x2329; // 0x0
		// static const ::System::Int64 MaxLogSize = 0x2FAF080; // 0x0
		::System::Text::StringBuilder* _cookLogs; // 0x10
		::System::String* _lastLogStr; // 0x18
		::System::Boolean _uniqueStrOnly; // 0x20
		::System::Int32 _currentCookLogCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS__CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_CookLogs* get_Instance()
		{
			return ((::HoudiniEngineUnity::HEU_CookLogs*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetCookLogString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGSTRING_OFFSET))(this);
		}

		::System::Void AppendCookLog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_APPENDCOOKLOG_OFFSET))(this, a1);
		}

		::System::Void ClearCookLog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_CLEARCOOKLOG_OFFSET))(this);
		}

		::System::String* GetCookLogFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GETCOOKLOGFILEPATH_OFFSET))(this);
		}

		::System::Void DeleteCookingFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_DELETECOOKINGFILE_OFFSET))(this);
		}

		::System::Void WriteToLogFile(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_WRITETOLOGFILE_OFFSET))(this, a1, a2);
		}

		::System::Int64 GetFileSizeOfLogFile()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKLOGS_GETFILESIZEOFLOGFILE_OFFSET))(this);
		}
	};
}
