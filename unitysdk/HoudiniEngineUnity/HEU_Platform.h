#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_PLATFORM_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x11A29F30)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x11A91840)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_DOESDIRECTORYEXIST_OFFSET UNITYSDK_OFFSET(0x11A917B0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_DOESFILEEXIST_OFFSET UNITYSDK_OFFSET(0x11A3F8D0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_DOESPATHEXIST_OFFSET UNITYSDK_OFFSET(0x11A916A0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATHHELPER_OFFSET UNITYSDK_OFFSET(0x11A913B0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATH_OFFSET UNITYSDK_OFFSET(0x11A91250)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETENVIRONMENTVALUE_OFFSET UNITYSDK_OFFSET(0x1B13BAA0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAMEWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x11A91670)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x11A6BE90)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILESINFOLDER_OFFSET UNITYSDK_OFFSET(0x11A91570)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x11A29DF0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x11A918F0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEDEFAULTPATH_OFFSET UNITYSDK_OFFSET(0x11A91020)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEENVIRONMENTFILEPATHFULL_OFFSET UNITYSDK_OFFSET(0x1B13BB50)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEPATH_OFFSET UNITYSDK_OFFSET(0x11A90CF0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETPARENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x11A918D0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETSAVEDHOUDINIPATH_OFFSET UNITYSDK_OFFSET(0x11A90D80)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATORSTR_OFFSET UNITYSDK_OFFSET(0x11A8EDB0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x11A91690)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_ISPATHSET_OFFSET UNITYSDK_OFFSET(0x11A90C00)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_LIBPATH_OFFSET UNITYSDK_OFFSET(0x11A90BA0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_ISPATHROOTED_OFFSET UNITYSDK_OFFSET(0x11A91900)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_LOADFILEINTOMEMORY_OFFSET UNITYSDK_OFFSET(0x1B13BDD0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_READALLTEXT_OFFSET UNITYSDK_OFFSET(0x1B13B900)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_SETHAPICLIENTNAME_OFFSET UNITYSDK_OFFSET(0x11A90CA0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_SETHOUDINIENGINEPATH_OFFSET UNITYSDK_OFFSET(0x11A90CE0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_TRIMLASTDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x11A29EA0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEALLTEXT_OFFSET UNITYSDK_OFFSET(0x1B13B7C0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x1B13B7B0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A90C60)
#define HOUDINIENGINEUNITY_HEU_PLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13BFF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Platform_TypeDefinitionIndex = 39139;

	class HEU_Platform : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__libPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Platform_TypeDefinitionIndex)->GetStaticField(0x590D0);
		}
		static ::System::String** StaticGet__lastErrorMsg()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Platform_TypeDefinitionIndex)->GetStaticField(0x590D8);
		}
		static ::System::Boolean* StaticGet__pathSet()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HEU_Platform_TypeDefinitionIndex)->GetStaticField(0x12160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM__CTOR_OFFSET))(this);
		}

		static ::System::String* get_LibPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GET_LIBPATH_OFFSET))();
		}

		static ::System::Boolean get_IsPathSet()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GET_ISPATHSET_OFFSET))();
		}

		static ::System::String* GetHoudiniEnginePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEPATH_OFFSET))();
		}

		static ::System::String* GetHoudiniEngineDefaultPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEDEFAULTPATH_OFFSET))();
		}

		static ::System::String* GetSavedHoudiniPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETSAVEDHOUDINIPATH_OFFSET))();
		}

		static ::System::Void SetHapiClientName()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_SETHAPICLIENTNAME_OFFSET))();
		}

		static ::System::Void SetHoudiniEnginePath()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_SETHOUDINIENGINEPATH_OFFSET))();
		}

		static ::System::String* GetAllFoldersInPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATH_OFFSET))(a1);
		}

		static ::System::Void GetAllFoldersInPathHelper(::System::String* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATHHELPER_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* GetFilesInFolder(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILESINFOLDER_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAME_OFFSET))(a1);
		}

		static ::System::String* GetFileNameWithoutExtension(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAMEWITHOUTEXTENSION_OFFSET))(a1);
		}

		static ::System::String* GetFolderPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFOLDERPATH_OFFSET))(a1, a2);
		}

		static ::System::Char get_DirectorySeparator()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATOR_OFFSET))();
		}

		static ::System::String* get_DirectorySeparatorStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATORSTR_OFFSET))();
		}

		static ::System::String* BuildPath(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_BUILDPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* TrimLastDirectorySeparator(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_TRIMLASTDIRECTORYSEPARATOR_OFFSET))(a1);
		}

		static ::System::Boolean DoesPathExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_DOESPATHEXIST_OFFSET))(a1);
		}

		static ::System::Boolean DoesFileExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_DOESFILEEXIST_OFFSET))(a1);
		}

		static ::System::Boolean DoesDirectoryExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_DOESDIRECTORYEXIST_OFFSET))(a1);
		}

		static ::System::Boolean CreateDirectory(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_CREATEDIRECTORY_OFFSET))(a1);
		}

		static ::System::String* GetParentDirectory(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETPARENTDIRECTORY_OFFSET))(a1);
		}

		static ::System::String* GetFullPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFULLPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsPathRooted(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_ISPATHROOTED_OFFSET))(a1);
		}

		static ::System::Void WriteBytes(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEBYTES_OFFSET))(a1, a2);
		}

		static ::System::Boolean WriteAllText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEALLTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* ReadAllText(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_READALLTEXT_OFFSET))(a1);
		}

		static ::System::String* GetEnvironmentValue(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETENVIRONMENTVALUE_OFFSET))(a1);
		}

		static ::System::String* GetHoudiniEngineEnvironmentFilePathFull()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEENVIRONMENTFILEPATHFULL_OFFSET))();
		}

		static ::System::Boolean LoadFileIntoMemory(::System::String* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_LOADFILEINTOMEMORY_OFFSET))(a1, a2);
		}
	};
}
