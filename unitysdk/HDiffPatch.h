#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HDIFFPATCH_HDIFFFILE_OFFSET UNITYSDK_OFFSET(0x1FC6B540)
#define HDIFFPATCH_HDIFF_CMD_LINE_OFFSET UNITYSDK_OFFSET(0x1FC6B050)
#define HDIFFPATCH_HPATCHFILE_OFFSET UNITYSDK_OFFSET(0x1FC6B4D0)
#define HDIFFPATCH_HPATCH_CMD_LINE_OFFSET UNITYSDK_OFFSET(0x1FC6AF10)
#define HDIFFPATCH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC6AE80)
#define HDIFFPATCH_INVOKEDLL_HDIFFFILE_OFFSET UNITYSDK_OFFSET(0x1FC6B330)
#define HDIFFPATCH_INVOKEDLL_HPATCHFILE_OFFSET UNITYSDK_OFFSET(0x1FC6B190)
#define HDIFFPATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6ADF0)

inline static constexpr unsigned int HDiffPatch_TypeDefinitionIndex = 35298;

class HDiffPatch : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__initialized()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HDiffPatch_TypeDefinitionIndex)->GetStaticField(0x8560);
	}
	// static const ::System::String* HPATCHZ_NAME; // 0x0
	// static const ::System::String* HDIFFZ_NAME; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDIFFPATCH__CCTOR_OFFSET))();
	}

	static ::System::Void Initialize()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDIFFPATCH_INITIALIZE_OFFSET))();
	}

	static ::System::Int32 hpatch_cmd_line(::System::Int32 argc, ::Il2CppArray<::System::String*>* argv)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HDIFFPATCH_HPATCH_CMD_LINE_OFFSET))(argc, argv);
	}

	static ::System::Int32 hdiff_cmd_line(::System::Int32 argc, ::Il2CppArray<::System::String*>* argv)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HDIFFPATCH_HDIFF_CMD_LINE_OFFSET))(argc, argv);
	}

	static ::System::Int32 InvokeDll_HPatchFile(::System::String* oldFilePath, ::System::String* diffFilePath, ::System::String* outNewFilePath)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDIFFPATCH_INVOKEDLL_HPATCHFILE_OFFSET))(oldFilePath, diffFilePath, outNewFilePath);
	}

	static ::System::Int32 InvokeDll_HDiffFile(::System::String* oldFilePath, ::System::String* newFilePath, ::System::String* outDiffFile)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDIFFPATCH_INVOKEDLL_HDIFFFILE_OFFSET))(oldFilePath, newFilePath, outDiffFile);
	}

	static ::System::Int32 HPatchFile(::System::String* oldFilePath, ::System::String* diffFilePath, ::System::String* outNewFilePath)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDIFFPATCH_HPATCHFILE_OFFSET))(oldFilePath, diffFilePath, outNewFilePath);
	}

	static ::System::Int32 HDiffFile(::System::String* oldFilePath, ::System::String* newFilePath, ::System::String* outDiffFile)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDIFFPATCH_HDIFFFILE_OFFSET))(oldFilePath, newFilePath, outDiffFile);
	}
};
