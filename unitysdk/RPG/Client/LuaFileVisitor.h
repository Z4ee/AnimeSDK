#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LUAFILEVISITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE85800)
#define RPG_CLIENT_LUAFILEVISITOR_GET_ISLUABYTECODELOADMODE_OFFSET UNITYSDK_OFFSET(0xBE85840)
#define RPG_CLIENT_LUAFILEVISITOR_INIT_OFFSET UNITYSDK_OFFSET(0xBE857C0)
#define RPG_CLIENT_LUAFILEVISITOR_LOADFILEBUFFER_OFFSET UNITYSDK_OFFSET(0xBE85CC0)
#define RPG_CLIENT_LUAFILEVISITOR_LOADFILE_OFFSET UNITYSDK_OFFSET(0xBE85BF0)
#define RPG_CLIENT_LUAFILEVISITOR_LOADPB_OFFSET UNITYSDK_OFFSET(0xBE85F30)
#define RPG_CLIENT_LUAFILEVISITOR_LUACHUNKNAME_OFFSET UNITYSDK_OFFSET(0xBE85D80)
#define RPG_CLIENT_LUAFILEVISITOR_SET_ISLUABYTECODELOADMODE_OFFSET UNITYSDK_OFFSET(0xBE85850)
#define RPG_CLIENT_LUAFILEVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBE857B0)
#define RPG_CLIENT_LUAFILEVISITOR__LOADASSETTEXTFILETOSTRING_OFFSET UNITYSDK_OFFSET(0xBE859A0)
#define RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBINARYBUNDLE_OFFSET UNITYSDK_OFFSET(0xBE85AE0)
#define RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBUNDLE_OFFSET UNITYSDK_OFFSET(0xBE85A90)
#define RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMFILE_OFFSET UNITYSDK_OFFSET(0xBE85B30)
#define RPG_CLIENT_LUAFILEVISITOR__RESEARCHFILEPATH_OFFSET UNITYSDK_OFFSET(0xBE85860)
#define RPG_CLIENT_LUAFILEVISITOR__RESEARCHPBFILEPATH_OFFSET UNITYSDK_OFFSET(0xBE85E30)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaFileVisitor_TypeDefinitionIndex = 55540;

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

		::System::Void set_IsLuaByteCodeLoadMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_SET_ISLUABYTECODELOADMODE_OFFSET))(this, a1);
		}

		::System::String* _ResearchFilePath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__RESEARCHFILEPATH_OFFSET))(this, a1);
		}

		::System::String* _LoadAssetTextFileToString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADASSETTEXTFILETOSTRING_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* _LoadLuaFileFromBundle(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBUNDLE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* _LoadLuaFileFromBinaryBundle(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMBINARYBUNDLE_OFFSET))(this, a1);
		}

		::System::String* _LoadLuaFileFromFile(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__LOADLUAFILEFROMFILE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* LoadFile(::System::String*& a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LOADFILE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* LoadFileBuffer(::System::String*& a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LOADFILEBUFFER_OFFSET))(this, a1);
		}

		::System::String* LuaChunkName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LUACHUNKNAME_OFFSET))(this, a1);
		}

		::System::String* _ResearchPbFilePath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR__RESEARCHPBFILEPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* LoadPb(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAFILEVISITOR_LOADPB_OFFSET))(this, a1);
		}
	};
}
