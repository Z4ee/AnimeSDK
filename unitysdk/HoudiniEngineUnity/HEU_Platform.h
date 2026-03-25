#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_PLATFORM_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x8452B50)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x8482530)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_DOESDIRECTORYEXIST_OFFSET UNITYSDK_OFFSET(0x84824A0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_DOESFILEEXIST_OFFSET UNITYSDK_OFFSET(0x844D3D0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_DOESPATHEXIST_OFFSET UNITYSDK_OFFSET(0x8482390)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATHHELPER_OFFSET UNITYSDK_OFFSET(0x8482080)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATH_OFFSET UNITYSDK_OFFSET(0x8481F20)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETENVIRONMENTVALUE_OFFSET UNITYSDK_OFFSET(0x8482910)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAMEWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x8482360)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x846C6A0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILESINFOLDER_OFFSET UNITYSDK_OFFSET(0x8482250)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x84529F0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x84825E0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEDEFAULTPATH_OFFSET UNITYSDK_OFFSET(0x8481410)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEENVIRONMENTFILEPATHFULL_OFFSET UNITYSDK_OFFSET(0x84829C0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEPATH_OFFSET UNITYSDK_OFFSET(0x8481200)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETPARENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x84825C0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GETSAVEDHOUDINIPATH_OFFSET UNITYSDK_OFFSET(0x8481290)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATORSTR_OFFSET UNITYSDK_OFFSET(0x847FAE0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x8482380)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_ISPATHSET_OFFSET UNITYSDK_OFFSET(0x8481110)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_GET_LIBPATH_OFFSET UNITYSDK_OFFSET(0x84810B0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_ISPATHROOTED_OFFSET UNITYSDK_OFFSET(0x84825F0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_LOADFILEINTOMEMORY_OFFSET UNITYSDK_OFFSET(0x844D470)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_READALLTEXT_OFFSET UNITYSDK_OFFSET(0x8482740)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_SETHAPICLIENTNAME_OFFSET UNITYSDK_OFFSET(0x84811B0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_SETHOUDINIENGINEPATH_OFFSET UNITYSDK_OFFSET(0x84811F0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_TRIMLASTDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x8452AB0)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEALLTEXT_OFFSET UNITYSDK_OFFSET(0x8482600)
#define HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x846B350)
#define HOUDINIENGINEUNITY_HEU_PLATFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x8481170)
#define HOUDINIENGINEUNITY_HEU_PLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x8482CE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Platform_TypeDefinitionIndex = 37661;

	class HEU_Platform : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__lastErrorMsg()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Platform_TypeDefinitionIndex)->GetStaticField(0x58F0);
		}
		static ::System::String** StaticGet__libPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Platform_TypeDefinitionIndex)->GetStaticField(0x58F8);
		}
		static ::System::Boolean* StaticGet__pathSet()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HEU_Platform_TypeDefinitionIndex)->GetStaticField(0x3760);
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

		static ::System::String* GetAllFoldersInPath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATH_OFFSET))(path);
		}

		static ::System::Void GetAllFoldersInPathHelper(::System::String* inPath, ::System::Text::StringBuilder* pathBuilder)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETALLFOLDERSINPATHHELPER_OFFSET))(inPath, pathBuilder);
		}

		static ::Il2CppArray<::System::String*>* GetFilesInFolder(::System::String* folderPath, ::System::String* searchPattern, ::System::Boolean bRecursive)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILESINFOLDER_OFFSET))(folderPath, searchPattern, bRecursive);
		}

		static ::System::String* GetFileName(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAME_OFFSET))(path);
		}

		static ::System::String* GetFileNameWithoutExtension(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFILENAMEWITHOUTEXTENSION_OFFSET))(path);
		}

		static ::System::String* GetFolderPath(::System::String* path, ::System::Boolean bRemoveDirectorySeparatorAtEnd)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFOLDERPATH_OFFSET))(path, bRemoveDirectorySeparatorAtEnd);
		}

		static ::System::Char get_DirectorySeparator()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATOR_OFFSET))();
		}

		static ::System::String* get_DirectorySeparatorStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GET_DIRECTORYSEPARATORSTR_OFFSET))();
		}

		static ::System::String* BuildPath(::System::String* folder1, ::System::String* folder2, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_BUILDPATH_OFFSET))(folder1, folder2, args);
		}

		static ::System::String* TrimLastDirectorySeparator(::System::String* inPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_TRIMLASTDIRECTORYSEPARATOR_OFFSET))(inPath);
		}

		static ::System::Boolean DoesPathExist(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_DOESPATHEXIST_OFFSET))(inPath);
		}

		static ::System::Boolean DoesFileExist(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_DOESFILEEXIST_OFFSET))(inPath);
		}

		static ::System::Boolean DoesDirectoryExist(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_DOESDIRECTORYEXIST_OFFSET))(inPath);
		}

		static ::System::Boolean CreateDirectory(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_CREATEDIRECTORY_OFFSET))(inPath);
		}

		static ::System::String* GetParentDirectory(::System::String* inPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETPARENTDIRECTORY_OFFSET))(inPath);
		}

		static ::System::String* GetFullPath(::System::String* inPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETFULLPATH_OFFSET))(inPath);
		}

		static ::System::Boolean IsPathRooted(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_ISPATHROOTED_OFFSET))(inPath);
		}

		static ::System::Void WriteBytes(::System::String* path, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEBYTES_OFFSET))(path, bytes);
		}

		static ::System::Boolean WriteAllText(::System::String* path, ::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_WRITEALLTEXT_OFFSET))(path, text);
		}

		static ::System::String* ReadAllText(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_READALLTEXT_OFFSET))(path);
		}

		static ::System::String* GetEnvironmentValue(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETENVIRONMENTVALUE_OFFSET))(key);
		}

		static ::System::String* GetHoudiniEngineEnvironmentFilePathFull()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_GETHOUDINIENGINEENVIRONMENTFILEPATHFULL_OFFSET))();
		}

		static ::System::Boolean LoadFileIntoMemory(::System::String* path, ::Il2CppArray<::System::Byte>*& buffer)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLATFORM_LOADFILEINTOMEMORY_OFFSET))(path, buffer);
		}
	};
}
