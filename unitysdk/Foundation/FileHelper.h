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

#define FOUNDATION_FILEHELPER_APPENDSTRINGTOFILE_OFFSET UNITYSDK_OFFSET(0x1D96C720)
#define FOUNDATION_FILEHELPER_ASSUREDIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x1D96BF00)
#define FOUNDATION_FILEHELPER_CALCULATEMD5_OFFSET UNITYSDK_OFFSET(0x1D969B60)
#define FOUNDATION_FILEHELPER_CHANGEDIRECTORYREADONLYFLAG_OFFSET UNITYSDK_OFFSET(0x1D96A930)
#define FOUNDATION_FILEHELPER_CHANGEFILEREADONLYACCESS_OFFSET UNITYSDK_OFFSET(0x1D96C150)
#define FOUNDATION_FILEHELPER_CHANGEREADONLYANDDELETEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1D96C010)
#define FOUNDATION_FILEHELPER_CLEARFLODER_OFFSET UNITYSDK_OFFSET(0x1D96AC40)
#define FOUNDATION_FILEHELPER_COMBINEPATH_OFFSET UNITYSDK_OFFSET(0x1D967D70)
#define FOUNDATION_FILEHELPER_COMBINERELATEPATH_OFFSET UNITYSDK_OFFSET(0x1D967E50)
#define FOUNDATION_FILEHELPER_COPYDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D968A50)
#define FOUNDATION_FILEHELPER_COPYFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1D96F3A0)
#define FOUNDATION_FILEHELPER_COPYFILE_OFFSET UNITYSDK_OFFSET(0x1D968810)
#define FOUNDATION_FILEHELPER_COPYFOLDER_OFFSET UNITYSDK_OFFSET(0x1D96B7B0)
#define FOUNDATION_FILEHELPER_CREATEDIRECTORYBYFILE_OFFSET UNITYSDK_OFFSET(0x1D968920)
#define FOUNDATION_FILEHELPER_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D968030)
#define FOUNDATION_FILEHELPER_DELETECREATENEWDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D9680F0)
#define FOUNDATION_FILEHELPER_DELETEDIRALLFILES_OFFSET UNITYSDK_OFFSET(0x1D968630)
#define FOUNDATION_FILEHELPER_DELETEFILESEXCEPT_OFFSET UNITYSDK_OFFSET(0x1D96A2F0)
#define FOUNDATION_FILEHELPER_DELETEFILES_OFFSET UNITYSDK_OFFSET(0x1D96A060)
#define FOUNDATION_FILEHELPER_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x1D9685E0)
#define FOUNDATION_FILEHELPER_DELETEREADONLYDIR_OFFSET UNITYSDK_OFFSET(0x1D9681E0)
#define FOUNDATION_FILEHELPER_ENSUREPARENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D96BD60)
#define FOUNDATION_FILEHELPER_FILECOPY_OFFSET UNITYSDK_OFFSET(0x1D96DA80)
#define FOUNDATION_FILEHELPER_FILEEXISTSWINDOWSLONGPATH_OFFSET UNITYSDK_OFFSET(0x1D96F960)
#define FOUNDATION_FILEHELPER_FILEEXIST_OFFSET UNITYSDK_OFFSET(0x1D95D020)
#define FOUNDATION_FILEHELPER_FILENAMEAPPEND_OFFSET UNITYSDK_OFFSET(0x1D968F80)
#define FOUNDATION_FILEHELPER_FILEREADALLBYTES_OFFSET UNITYSDK_OFFSET(0x1D9690D0)
#define FOUNDATION_FILEHELPER_FILEREADALLTEXT_OFFSET UNITYSDK_OFFSET(0x1D969030)
#define FOUNDATION_FILEHELPER_FILESTREAMCOPY_OFFSET UNITYSDK_OFFSET(0x1D96DC30)
#define FOUNDATION_FILEHELPER_FILEWRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x1D969170)
#define FOUNDATION_FILEHELPER_FILEWRITEALLLINES_1_OFFSET UNITYSDK_OFFSET(0x1D9692B0)
#define FOUNDATION_FILEHELPER_FILEWRITEALLLINES_OFFSET UNITYSDK_OFFSET(0x1D969210)
#define FOUNDATION_FILEHELPER_FILEWRITEALLTEXTS_OFFSET UNITYSDK_OFFSET(0x1D969350)
#define FOUNDATION_FILEHELPER_FILEWRITEALLTEXTTOBASE64_OFFSET UNITYSDK_OFFSET(0x1D969450)
#define FOUNDATION_FILEHELPER_FIXSLASHES_1_OFFSET UNITYSDK_OFFSET(0x1D96C450)
#define FOUNDATION_FILEHELPER_FIXSLASHES_OFFSET UNITYSDK_OFFSET(0x1D96C3A0)
#define FOUNDATION_FILEHELPER_FORMATFILEPATH_OFFSET UNITYSDK_OFFSET(0x1D967D10)
#define FOUNDATION_FILEHELPER_FORMATSLASH_OFFSET UNITYSDK_OFFSET(0x1D96C690)
#define FOUNDATION_FILEHELPER_GETALLFILE_OFFSET UNITYSDK_OFFSET(0x1D969EA0)
#define FOUNDATION_FILEHELPER_GETCHILDRENRELATIVEPATHS_OFFSET UNITYSDK_OFFSET(0x1D96E860)
#define FOUNDATION_FILEHELPER_GETFILECRC_OFFSET UNITYSDK_OFFSET(0x1D96B3D0)
#define FOUNDATION_FILEHELPER_GETFILEMD5_OFFSET UNITYSDK_OFFSET(0x1D96B0C0)
#define FOUNDATION_FILEHELPER_GETFILEPREFIX_OFFSET UNITYSDK_OFFSET(0x1D96A4F0)
#define FOUNDATION_FILEHELPER_GETFILESIZEFAST_OFFSET UNITYSDK_OFFSET(0x1D96B6D0)
#define FOUNDATION_FILEHELPER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1D96B530)
#define FOUNDATION_FILEHELPER_GETPATHWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D96C330)
#define FOUNDATION_FILEHELPER_GETPERSISTFILESSIZE_OFFSET UNITYSDK_OFFSET(0x1D96FD60)
#define FOUNDATION_FILEHELPER_GETPERSISTFOLDERSIZE_OFFSET UNITYSDK_OFFSET(0x1D96FB50)
#define FOUNDATION_FILEHELPER_GETRELATIVEASSETPATHFROMFULLPATH_OFFSET UNITYSDK_OFFSET(0x1D96E6B0)
#define FOUNDATION_FILEHELPER_GETRELATIVEPATH_1_OFFSET UNITYSDK_OFFSET(0x1D96EA80)
#define FOUNDATION_FILEHELPER_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1D96ED10)
#define FOUNDATION_FILEHELPER_GETWINDOWNLONGPATH_OFFSET UNITYSDK_OFFSET(0x1D96EE40)
#define FOUNDATION_FILEHELPER_GET_EDITORPROJECTDIR_OFFSET UNITYSDK_OFFSET(0x1D967C60)
#define FOUNDATION_FILEHELPER_GET_FILECONFIGDEBUGPREFIX_OFFSET UNITYSDK_OFFSET(0x1D967470)
#define FOUNDATION_FILEHELPER_ISAVAILABLEPATCHINSTREAMING_OFFSET UNITYSDK_OFFSET(0x1D96F1A0)
#define FOUNDATION_FILEHELPER_ISFILEEXISTS_OFFSET UNITYSDK_OFFSET(0x1D95D0C0)
#define FOUNDATION_FILEHELPER_ISFILEOPENED_OFFSET UNITYSDK_OFFSET(0x1D96F730)
#define FOUNDATION_FILEHELPER_ISFILEPATHSTARTSFROMSTREAMINGASSETS_OFFSET UNITYSDK_OFFSET(0x1D96D9E0)
#define FOUNDATION_FILEHELPER_ISSKIPCHECKINSTREAMING_OFFSET UNITYSDK_OFFSET(0x1D96F120)
#define FOUNDATION_FILEHELPER_LOADDATAATFILECFGFOLDER_OFFSET UNITYSDK_OFFSET(0x1D9674B0)
#define FOUNDATION_FILEHELPER_LOADTEXTBINARY_OFFSET UNITYSDK_OFFSET(0x1D967820)
#define FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARYASYNC_OFFSET UNITYSDK_OFFSET(0x1D967910)
#define FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9675E0)
#define FOUNDATION_FILEHELPER_LOADTEXTFILETOSTRING_OFFSET UNITYSDK_OFFSET(0x1D967A40)
#define FOUNDATION_FILEHELPER_MKDIR_OFFSET UNITYSDK_OFFSET(0x1D96A670)
#define FOUNDATION_FILEHELPER_MODIFYFILENAME_OFFSET UNITYSDK_OFFSET(0x1D968ED0)
#define FOUNDATION_FILEHELPER_MOVEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1D96F290)
#define FOUNDATION_FILEHELPER_OPENREAD_OFFSET UNITYSDK_OFFSET(0x1D96E180)
#define FOUNDATION_FILEHELPER_READASSETLISTFROMFILE_OFFSET UNITYSDK_OFFSET(0x1D96CF00)
#define FOUNDATION_FILEHELPER_READFROMFILE_OFFSET UNITYSDK_OFFSET(0x1D96E230)
#define FOUNDATION_FILEHELPER_RECURSIVE_OFFSET UNITYSDK_OFFSET(0x1D9696B0)
#define FOUNDATION_FILEHELPER_REMOVEDIRECTORYIFEMPTY_OFFSET UNITYSDK_OFFSET(0x1D96F4B0)
#define FOUNDATION_FILEHELPER_REMOVEEMPTYDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D96F5D0)
#define FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_1_OFFSET UNITYSDK_OFFSET(0x1D9702E0)
#define FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D970210)
#define FOUNDATION_FILEHELPER_REPLACEFILENAME_OFFSET UNITYSDK_OFFSET(0x1D96FA70)
#define FOUNDATION_FILEHELPER_RMDIR_OFFSET UNITYSDK_OFFSET(0x1D96A7E0)
#define FOUNDATION_FILEHELPER_SPLITPATH_OFFSET UNITYSDK_OFFSET(0x1D96EEE0)
#define FOUNDATION_FILEHELPER_UNZIPFILE_OFFSET UNITYSDK_OFFSET(0x1D96D200)
#define FOUNDATION_FILEHELPER_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x1D96CB80)
#define FOUNDATION_FILEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D970440)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper_TypeDefinitionIndex = 7857;

	class FileHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_streamingDirRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileHelper_TypeDefinitionIndex)->GetStaticField(0x6DA0);
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
