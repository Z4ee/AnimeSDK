#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LUAFILEVISITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA721080)
#define RPG_CLIENT_LUAFILEVISITOR_GET_ISLUABYTECODELOADMODE_OFFSET UNITYSDK_OFFSET(0xA7210C0)
#define RPG_CLIENT_LUAFILEVISITOR_INIT_OFFSET UNITYSDK_OFFSET(0xA721040)
#define RPG_CLIENT_LUAFILEVISITOR_LOADFILEBUFFER_OFFSET UNITYSDK_OFFSET(0xA721540)
#define RPG_CLIENT_LUAFILEVISITOR_LOADFILE_OFFSET UNITYSDK_OFFSET(0xA721470)
#define RPG_CLIENT_LUAFILEVISITOR_LOADPB_OFFSET UNITYSDK_OFFSET(0xA7217B0)
#define RPG_CLIENT_LUAFILEVISITOR_LUACHUNKNAME_OFFSET UNITYSDK_OFFSET(0xA721600)
#define RPG_CLIENT_LUAFILEVISITOR_SET_ISLUABYTECODELOADMODE_OFFSET UNITYSDK_OFFSET(0xA7210D0)
#define RPG_CLIENT_LUAFILEVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA721030)
#define RPG_CLIENT_LUAFILEVISITOR__LOADASSETTEXTFILETOSTRING_OFFSET UNITYSDK_OFFSET(0xA721220)
#define RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBINARYBUNDLE_OFFSET UNITYSDK_OFFSET(0xA721360)
#define RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBUNDLE_OFFSET UNITYSDK_OFFSET(0xA721310)
#define RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMFILE_OFFSET UNITYSDK_OFFSET(0xA7213B0)
#define RPG_CLIENT_LUAFILEVISITOR__RESEARCHFILEPATH_OFFSET UNITYSDK_OFFSET(0xA7210E0)
#define RPG_CLIENT_LUAFILEVISITOR__RESEARCHPBFILEPATH_OFFSET UNITYSDK_OFFSET(0xA7216B0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaFileVisitor_TypeDefinitionIndex = 54813;

	class LuaFileVisitor : public ::System::Object
	{
	public:
		::System::Boolean _IsLuaByteCodeLoadMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsLuaByteCodeLoadMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_GET_ISLUABYTECODELOADMODE_OFFSET))(this);
		}

		::System::Void set_IsLuaByteCodeLoadMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_SET_ISLUABYTECODELOADMODE_OFFSET))(this, value);
		}

		::System::String* _ResearchFilePath(::System::String* fileName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__RESEARCHFILEPATH_OFFSET))(this, fileName);
		}

		::System::String* _LoadAssetTextFileToString(::System::String* Path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADASSETTEXTFILETOSTRING_OFFSET))(this, Path);
		}

		::Il2CppArray<::System::Byte>* _LoadLuaFileFromBundle(::System::String* Path)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBUNDLE_OFFSET))(this, Path);
		}

		::Il2CppArray<::System::Byte>* _LoadLuaFileFromBinaryBundle(::System::String* Path)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBINARYBUNDLE_OFFSET))(this, Path);
		}

		::System::String* _LoadLuaFileFromFile(::System::String* Path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMFILE_OFFSET))(this, Path);
		}

		::Il2CppArray<::System::Byte>* LoadFile(::System::String*& fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LOADFILE_OFFSET))(this, fileName);
		}

		::Il2CppArray<::System::Byte>* LoadFileBuffer(::System::String*& fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LOADFILEBUFFER_OFFSET))(this, fileName);
		}

		::System::String* LuaChunkName(::System::String* fileName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LUACHUNKNAME_OFFSET))(this, fileName);
		}

		::System::String* _ResearchPbFilePath(::System::String* fileName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__RESEARCHPBFILEPATH_OFFSET))(this, fileName);
		}

		::Il2CppArray<::System::Byte>* LoadPb(::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LOADPB_OFFSET))(this, fileName);
		}
	};
}
