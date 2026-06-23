#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ByteArray; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class FileInfo; }
namespace System::IO { class Stream; }

#define FOUNDATION_FILEHELPER_APPENDSTRINGTOFILE_OFFSET UNITYSDK_OFFSET(0x1C5D0E10)
#define FOUNDATION_FILEHELPER_ASSUREDIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x1C5D05F0)
#define FOUNDATION_FILEHELPER_CALCULATEMD5_OFFSET UNITYSDK_OFFSET(0x1C5CE230)
#define FOUNDATION_FILEHELPER_CHANGEDIRECTORYREADONLYFLAG_OFFSET UNITYSDK_OFFSET(0x1C5CEFF0)
#define FOUNDATION_FILEHELPER_CHANGEFILEREADONLYACCESS_OFFSET UNITYSDK_OFFSET(0x1C5D0840)
#define FOUNDATION_FILEHELPER_CHANGEREADONLYANDDELETEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1C5D0700)
#define FOUNDATION_FILEHELPER_CLEARFLODER_OFFSET UNITYSDK_OFFSET(0x1C5CF310)
#define FOUNDATION_FILEHELPER_COMBINEPATH_OFFSET UNITYSDK_OFFSET(0x1C5CC420)
#define FOUNDATION_FILEHELPER_COMBINERELATEPATH_OFFSET UNITYSDK_OFFSET(0x1C5CC500)
#define FOUNDATION_FILEHELPER_COPYDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C5CD100)
#define FOUNDATION_FILEHELPER_COPYFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1C5D3AF0)
#define FOUNDATION_FILEHELPER_COPYFILE_OFFSET UNITYSDK_OFFSET(0x1C5CCEC0)
#define FOUNDATION_FILEHELPER_COPYFOLDER_OFFSET UNITYSDK_OFFSET(0x1C5CFEA0)
#define FOUNDATION_FILEHELPER_CREATEDIRECTORYBYFILE_OFFSET UNITYSDK_OFFSET(0x1C5CCFD0)
#define FOUNDATION_FILEHELPER_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C5CC6E0)
#define FOUNDATION_FILEHELPER_DELETECREATENEWDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C5CC7A0)
#define FOUNDATION_FILEHELPER_DELETEDIRALLFILES_OFFSET UNITYSDK_OFFSET(0x1C5CCCE0)
#define FOUNDATION_FILEHELPER_DELETEFILESEXCEPT_OFFSET UNITYSDK_OFFSET(0x1C5CE9B0)
#define FOUNDATION_FILEHELPER_DELETEFILES_OFFSET UNITYSDK_OFFSET(0x1C5CE720)
#define FOUNDATION_FILEHELPER_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x1C5CCC90)
#define FOUNDATION_FILEHELPER_DELETEREADONLYDIR_OFFSET UNITYSDK_OFFSET(0x1C5CC890)
#define FOUNDATION_FILEHELPER_ENSUREPARENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C5D0450)
#define FOUNDATION_FILEHELPER_FILECOPY_OFFSET UNITYSDK_OFFSET(0x1C5D2150)
#define FOUNDATION_FILEHELPER_FILEEXISTSWINDOWSLONGPATH_OFFSET UNITYSDK_OFFSET(0x1C5D40B0)
#define FOUNDATION_FILEHELPER_FILEEXIST_OFFSET UNITYSDK_OFFSET(0x1C5C16C0)
#define FOUNDATION_FILEHELPER_FILENAMEAPPEND_OFFSET UNITYSDK_OFFSET(0x1C5CD650)
#define FOUNDATION_FILEHELPER_FILEREADALLBYTES_OFFSET UNITYSDK_OFFSET(0x1C5CD7A0)
#define FOUNDATION_FILEHELPER_FILEREADALLTEXT_OFFSET UNITYSDK_OFFSET(0x1C5CD700)
#define FOUNDATION_FILEHELPER_FILESTREAMCOPY_OFFSET UNITYSDK_OFFSET(0x1C5D2300)
#define FOUNDATION_FILEHELPER_FILEWRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x1C5CD840)
#define FOUNDATION_FILEHELPER_FILEWRITEALLLINES_1_OFFSET UNITYSDK_OFFSET(0x1C5CD980)
#define FOUNDATION_FILEHELPER_FILEWRITEALLLINES_OFFSET UNITYSDK_OFFSET(0x1C5CD8E0)
#define FOUNDATION_FILEHELPER_FILEWRITEALLTEXTS_OFFSET UNITYSDK_OFFSET(0x1C5CDA20)
#define FOUNDATION_FILEHELPER_FILEWRITEALLTEXTTOBASE64_OFFSET UNITYSDK_OFFSET(0x1C5CDB20)
#define FOUNDATION_FILEHELPER_FIXSLASHES_1_OFFSET UNITYSDK_OFFSET(0x1C5D0B40)
#define FOUNDATION_FILEHELPER_FIXSLASHES_OFFSET UNITYSDK_OFFSET(0x1C5D0A90)
#define FOUNDATION_FILEHELPER_FORMATFILEPATH_OFFSET UNITYSDK_OFFSET(0x1C5CC3C0)
#define FOUNDATION_FILEHELPER_FORMATSLASH_OFFSET UNITYSDK_OFFSET(0x1C5D0D80)
#define FOUNDATION_FILEHELPER_GETALLFILE_OFFSET UNITYSDK_OFFSET(0x1C5CE560)
#define FOUNDATION_FILEHELPER_GETCHILDRENRELATIVEPATHS_OFFSET UNITYSDK_OFFSET(0x1C5D2F60)
#define FOUNDATION_FILEHELPER_GETFILECRC_OFFSET UNITYSDK_OFFSET(0x1C5CFAC0)
#define FOUNDATION_FILEHELPER_GETFILEMD5_OFFSET UNITYSDK_OFFSET(0x1C5CF7B0)
#define FOUNDATION_FILEHELPER_GETFILEPREFIX_OFFSET UNITYSDK_OFFSET(0x1C5CEBB0)
#define FOUNDATION_FILEHELPER_GETFILESIZEFAST_OFFSET UNITYSDK_OFFSET(0x1C5CFDC0)
#define FOUNDATION_FILEHELPER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C5CFC20)
#define FOUNDATION_FILEHELPER_GETPATHWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1C5D0A20)
#define FOUNDATION_FILEHELPER_GETPERSISTFILESSIZE_OFFSET UNITYSDK_OFFSET(0x1C5D44C0)
#define FOUNDATION_FILEHELPER_GETPERSISTFOLDERSIZE_OFFSET UNITYSDK_OFFSET(0x1C5D42A0)
#define FOUNDATION_FILEHELPER_GETRELATIVEASSETPATHFROMFULLPATH_OFFSET UNITYSDK_OFFSET(0x1C5D2DB0)
#define FOUNDATION_FILEHELPER_GETRELATIVEPATH_1_OFFSET UNITYSDK_OFFSET(0x1C5D3180)
#define FOUNDATION_FILEHELPER_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1C5D3410)
#define FOUNDATION_FILEHELPER_GETWINDOWNLONGPATH_OFFSET UNITYSDK_OFFSET(0x1C5D3540)
#define FOUNDATION_FILEHELPER_GET_EDITORPROJECTDIR_OFFSET UNITYSDK_OFFSET(0x1C5CC310)
#define FOUNDATION_FILEHELPER_GET_FILECONFIGDEBUGPREFIX_OFFSET UNITYSDK_OFFSET(0x1C5CBB20)
#define FOUNDATION_FILEHELPER_ISAVAILABLEPATCHINSTREAMING_OFFSET UNITYSDK_OFFSET(0x1C5D38A0)
#define FOUNDATION_FILEHELPER_ISFILEEXISTS_OFFSET UNITYSDK_OFFSET(0x1C5C1760)
#define FOUNDATION_FILEHELPER_ISFILEOPENED_OFFSET UNITYSDK_OFFSET(0x1C5D3E80)
#define FOUNDATION_FILEHELPER_ISFILEPATHSTARTSFROMSTREAMINGASSETS_OFFSET UNITYSDK_OFFSET(0x1C5D20B0)
#define FOUNDATION_FILEHELPER_ISSKIPCHECKINSTREAMING_OFFSET UNITYSDK_OFFSET(0x1C5D3820)
#define FOUNDATION_FILEHELPER_LOADDATAATFILECFGFOLDER_OFFSET UNITYSDK_OFFSET(0x1C5CBB60)
#define FOUNDATION_FILEHELPER_LOADTEXTBINARY_OFFSET UNITYSDK_OFFSET(0x1C5CBED0)
#define FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARYASYNC_OFFSET UNITYSDK_OFFSET(0x1C5CBFC0)
#define FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5CBC90)
#define FOUNDATION_FILEHELPER_LOADTEXTFILETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C5CC0F0)
#define FOUNDATION_FILEHELPER_MKDIR_OFFSET UNITYSDK_OFFSET(0x1C5CED30)
#define FOUNDATION_FILEHELPER_MODIFYFILENAME_OFFSET UNITYSDK_OFFSET(0x1C5CD5A0)
#define FOUNDATION_FILEHELPER_MOVEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1C5D39E0)
#define FOUNDATION_FILEHELPER_OPENREAD_OFFSET UNITYSDK_OFFSET(0x1C5D2850)
#define FOUNDATION_FILEHELPER_READASSETLISTFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C5D15E0)
#define FOUNDATION_FILEHELPER_READFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C5D2900)
#define FOUNDATION_FILEHELPER_RECURSIVE_OFFSET UNITYSDK_OFFSET(0x1C5CDD80)
#define FOUNDATION_FILEHELPER_REMOVEDIRECTORYIFEMPTY_OFFSET UNITYSDK_OFFSET(0x1C5D3C00)
#define FOUNDATION_FILEHELPER_REMOVEEMPTYDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C5D3D20)
#define FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_1_OFFSET UNITYSDK_OFFSET(0x1C5D4A30)
#define FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1C5D4960)
#define FOUNDATION_FILEHELPER_REPLACEFILENAME_OFFSET UNITYSDK_OFFSET(0x1C5D41C0)
#define FOUNDATION_FILEHELPER_RMDIR_OFFSET UNITYSDK_OFFSET(0x1C5CEEA0)
#define FOUNDATION_FILEHELPER_SPLITPATH_OFFSET UNITYSDK_OFFSET(0x1C5D35E0)
#define FOUNDATION_FILEHELPER_UNZIPFILE_OFFSET UNITYSDK_OFFSET(0x1C5D18E0)
#define FOUNDATION_FILEHELPER_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x1C5D1260)
#define FOUNDATION_FILEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5D4B90)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper_TypeDefinitionIndex = 8151;

	class FileHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_streamingDirRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileHelper_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		// static const ::System::String* FileCfgPrefix; // 0x0
		// static const ::System::String* BytesSuffix; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER__CCTOR_OFFSET))();
		}

		static ::System::String* get_FileConfigDebugPrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GET_FILECONFIGDEBUGPREFIX_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* LoadDataAtFileCfgFolder(::System::String* filename)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADDATAATFILECFGFOLDER_OFFSET))(filename);
		}

		static ::Foundation::ByteArray* LoadTextBinary(::System::String* filePath)
		{
			return ((::Foundation::ByteArray*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTBINARY_OFFSET))(filePath);
		}

		static ::System::Void LoadTextFileFromBinaryAsync(::Foundation::AssetPath filePath, ::System::Action_1<::Il2CppArray<::System::Byte>*>* callback, ::System::Boolean noError)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_1<::Il2CppArray<::System::Byte>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARYASYNC_OFFSET))(filePath, callback, noError);
		}

		static ::Il2CppArray<::System::Byte>* LoadTextFileFromBinary(::Foundation::AssetPath filePath, ::System::Boolean noError)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARY_OFFSET))(filePath, noError);
		}

		static ::System::String* LoadTextFileToString(::System::String* filePath, ::System::Boolean noError)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTFILETOSTRING_OFFSET))(filePath, noError);
		}

		static ::System::String* get_EditorProjectDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GET_EDITORPROJECTDIR_OFFSET))();
		}

		static ::System::String* FormatFilePath(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FORMATFILEPATH_OFFSET))(filePath);
		}

		static ::System::String* CombinePath(::System::String* path1, ::System::String* path2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COMBINEPATH_OFFSET))(path1, path2);
		}

		static ::System::String* CombineRelatePath(::Il2CppArray<::System::String*>* dir)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COMBINERELATEPATH_OFFSET))(dir);
		}

		static ::System::Void CreateDirectory(::System::String* dir)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CREATEDIRECTORY_OFFSET))(dir);
		}

		static ::System::Void DeleteCreateNewDirectory(::System::String* dir)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETECREATENEWDIRECTORY_OFFSET))(dir);
		}

		static ::System::Void DeleteReadOnlyDir(::System::String* file)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEREADONLYDIR_OFFSET))(file);
		}

		static ::System::Void DeleteFile(::System::String* filepath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEFILE_OFFSET))(filepath);
		}

		static ::System::Void DeleteDirAllFiles(::System::String* dirPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEDIRALLFILES_OFFSET))(dirPath);
		}

		static ::System::Boolean CopyFile(::System::String* sourcePath, ::System::String* targetPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYFILE_OFFSET))(sourcePath, targetPath);
		}

		static ::System::Void CopyDirectory(::System::String* srcDir, ::System::String* tgtDir)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYDIRECTORY_OFFSET))(srcDir, tgtDir);
		}

		static ::System::Void CreateDirectoryByFile(::System::String* filepath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CREATEDIRECTORYBYFILE_OFFSET))(filepath);
		}

		static ::System::Void ModifyFileName(::System::String* srcFileName, ::System::String* desFileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_MODIFYFILENAME_OFFSET))(srcFileName, desFileName);
		}

		static ::System::Boolean FileExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEEXIST_OFFSET))(filePath);
		}

		static ::System::String* FileNameAppend(::System::String* filename, ::System::String* nameChar)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILENAMEAPPEND_OFFSET))(filename, nameChar);
		}

		static ::System::String* FileReadAllText(::System::String* filepath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEREADALLTEXT_OFFSET))(filepath);
		}

		static ::Il2CppArray<::System::Byte>* FileReadAllBytes(::System::String* filepath)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEREADALLBYTES_OFFSET))(filepath);
		}

		static ::System::Void FileWriteAllBytes(::System::String* filepath, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLBYTES_OFFSET))(filepath, bytes);
		}

		static ::System::Void FileWriteAllLines(::System::String* filepath, ::Il2CppArray<::System::String*>* lines)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLLINES_OFFSET))(filepath, lines);
		}

		static ::System::Void FileWriteAllLines_1(::System::String* filepath, ::System::Collections::Generic::IEnumerable_1<::System::String*>* lines)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLLINES_1_OFFSET))(filepath, lines);
		}

		static ::System::Void FileWriteAllTexts(::System::String* filepath, ::System::String* text)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLTEXTS_OFFSET))(filepath, text);
		}

		static ::System::Void FileWriteAllTextToBase64(::System::String* filepath, ::System::String* text)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLTEXTTOBASE64_OFFSET))(filepath, text);
		}

		static ::System::Void Recursive(::System::String* path, ::System::Collections::Generic::List_1<::System::String*>* files, ::System::Collections::Generic::List_1<::System::String*>* paths)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_RECURSIVE_OFFSET))(path, files, paths);
		}

		static ::System::String* CalculateMD5(::System::String* filepath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CALCULATEMD5_OFFSET))(filepath);
		}

		static ::Il2CppArray<::System::IO::FileInfo*>* GetAllFile(::System::String* directory, ::System::String* fileSuffix)
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETALLFILE_OFFSET))(directory, fileSuffix);
		}

		static ::System::Void DeleteFiles(::System::String* directory, ::System::String* fileSuffix)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEFILES_OFFSET))(directory, fileSuffix);
		}

		static ::System::Void DeleteFilesExcept(::System::String* directory, ::System::String* exceptFileSuffix)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEFILESEXCEPT_OFFSET))(directory, exceptFileSuffix);
		}

		static ::System::String* GetFilePrefix(::System::String* filename)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILEPREFIX_OFFSET))(filename);
		}

		static ::System::Void Mkdir(::System::String* path, ::System::Boolean isOverride)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_MKDIR_OFFSET))(path, isOverride);
		}

		static ::System::Void RmDir(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_RMDIR_OFFSET))(path);
		}

		static ::System::Void ChangeDirectoryReadOnlyFlag(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CHANGEDIRECTORYREADONLYFLAG_OFFSET))(path);
		}

		static ::System::Void ClearFloder(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CLEARFLODER_OFFSET))(path);
		}

		static ::System::String* GetFileMd5(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILEMD5_OFFSET))(filePath);
		}

		static ::System::String* GetFileCRC(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILECRC_OFFSET))(filePath);
		}

		static ::System::Int64 GetFileSize(::System::String* filePath)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILESIZE_OFFSET))(filePath);
		}

		static ::System::Int64 GetFileSizeFast(::System::String* filePath)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILESIZEFAST_OFFSET))(filePath);
		}

		static ::System::Void CopyFolder(::System::String* srcPath, ::System::String* destPath, ::System::Boolean containMeta)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYFOLDER_OFFSET))(srcPath, destPath, containMeta);
		}

		static ::System::Void EnsureParentDirectory(::System::String* path, ::System::Boolean inputIsDir)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ENSUREPARENTDIRECTORY_OFFSET))(path, inputIsDir);
		}

		static ::System::Void AssureDirectoryExists(::System::String* directoryPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ASSUREDIRECTORYEXISTS_OFFSET))(directoryPath);
		}

		static ::System::Boolean ChangeReadOnlyAndDeleteIfExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CHANGEREADONLYANDDELETEIFEXIST_OFFSET))(filePath);
		}

		static ::System::Void ChangeFileReadOnlyAccess(::System::String* filePath, ::System::Boolean isReadOnly)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CHANGEFILEREADONLYACCESS_OFFSET))(filePath, isReadOnly);
		}

		static ::System::String* GetPathWithoutExtension(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETPATHWITHOUTEXTENSION_OFFSET))(path);
		}

		static ::System::Void FixSlashes(::System::String*& path)
		{
			return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FIXSLASHES_OFFSET))(path);
		}

		static ::System::Void FixSlashes_1(::System::String*& path, ::System::Char separatorChar, ::System::Char badChar, ::System::Boolean addTrailingSlash)
		{
			return ((::System::Void(*)(::System::String*&, ::System::Char, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FIXSLASHES_1_OFFSET))(path, separatorChar, badChar, addTrailingSlash);
		}

		static ::System::String* FormatSlash(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FORMATSLASH_OFFSET))(path);
		}

		static ::System::Void AppendStringToFile(::System::String* path, ::System::String* content, ::System::Boolean newLine)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_APPENDSTRINGTOFILE_OFFSET))(path, content, newLine);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* ReadAssetListFromFile(::System::String* filePath)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_READASSETLISTFROMFILE_OFFSET))(filePath);
		}

		static ::System::Void UnzipFile(::System::String* filePath, ::System::String* outputFolder)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_UNZIPFILE_OFFSET))(filePath, outputFolder);
		}

		static ::System::Boolean IsFileExists(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISFILEEXISTS_OFFSET))(filePath);
		}

		static ::System::Boolean IsFilePathStartsFromStreamingAssets(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISFILEPATHSTARTSFROMSTREAMINGASSETS_OFFSET))(filePath);
		}

		static ::System::Boolean FileCopy(::System::String* src, ::System::String* dst)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILECOPY_OFFSET))(src, dst);
		}

		static ::System::Boolean FileStreamCopy(::System::String* src, ::System::String* dst)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILESTREAMCOPY_OFFSET))(src, dst);
		}

		static ::System::IO::Stream* OpenRead(::System::String* filePath)
		{
			return ((::System::IO::Stream*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_OPENREAD_OFFSET))(filePath);
		}

		static ::System::String* ReadFromFile(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_READFROMFILE_OFFSET))(path);
		}

		static ::System::Void WriteToFile(::System::String* path, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_WRITETOFILE_OFFSET))(path, content);
		}

		static ::System::String* GetRelativeAssetPathFromFullPath(::System::String* fullPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETRELATIVEASSETPATHFROMFULLPATH_OFFSET))(fullPath);
		}

		static ::Il2CppArray<::System::String*>* GetChildrenRelativePaths(::System::String* path, ::System::String* searchPattern)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETCHILDRENRELATIVEPATHS_OFFSET))(path, searchPattern);
		}

		static ::System::String* GetRelativePath(::System::IO::FileInfo* fi, ::System::String* rootPath)
		{
			return ((::System::String*(*)(::System::IO::FileInfo*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETRELATIVEPATH_OFFSET))(fi, rootPath);
		}

		static ::System::String* GetRelativePath_1(::System::String* path, ::System::String* relativeTo)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETRELATIVEPATH_1_OFFSET))(path, relativeTo);
		}

		static ::System::String* GetWindownLongPath(::System::String* filepath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETWINDOWNLONGPATH_OFFSET))(filepath);
		}

		static ::Il2CppArray<::System::String*>* SplitPath(::System::String* path, ::System::String* rootpath)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_SPLITPATH_OFFSET))(path, rootpath);
		}

		static ::System::Boolean IsSkipCheckInStreaming()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISSKIPCHECKINSTREAMING_OFFSET))();
		}

		static ::System::Boolean IsAvailablePatchInStreaming()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISAVAILABLEPATCHINSTREAMING_OFFSET))();
		}

		static ::System::String* MoveFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_MOVEFILEIFEXIST_OFFSET))(srcPath, dstPath);
		}

		static ::System::String* CopyFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYFILEIFEXIST_OFFSET))(srcPath, dstPath);
		}

		static ::System::Void RemoveDirectoryIfEmpty(::System::String* directory)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEDIRECTORYIFEMPTY_OFFSET))(directory);
		}

		static ::System::Void RemoveEmptyDirectory(::System::String* startPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEEMPTYDIRECTORY_OFFSET))(startPath);
		}

		static ::System::Boolean IsFileOpened(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISFILEOPENED_OFFSET))(filePath);
		}

		static ::System::Boolean FileExistsWindowsLongPath(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEEXISTSWINDOWSLONGPATH_OFFSET))(path);
		}

		static ::System::String* ReplaceFileName(::System::String* path, ::System::String* newFileName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REPLACEFILENAME_OFFSET))(path, newFileName);
		}

		static ::System::Int64 GetPersistFolderSize(::System::String* folderPath)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETPERSISTFOLDERSIZE_OFFSET))(folderPath);
		}

		static ::System::Int64 GetPersistFilesSize(::System::Collections::Generic::IEnumerable_1<::System::String*>* filePaths)
		{
			return ((::System::Int64(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETPERSISTFILESSIZE_OFFSET))(filePaths);
		}

		static ::System::String* RemoveFileExtension(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_OFFSET))(filePath);
		}

		static ::System::String* RemoveFileExtension_1(::System::String* filePath, ::System::Boolean formatSlash)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_1_OFFSET))(filePath, formatSlash);
		}
	};
}
