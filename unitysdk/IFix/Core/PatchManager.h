#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define IFIX_CORE_PATCHMANAGER_APPENDPATCH_OFFSET UNITYSDK_OFFSET(0x17148F30)
#define IFIX_CORE_PATCHMANAGER_GETMAPID_1_OFFSET UNITYSDK_OFFSET(0x17142300)
#define IFIX_CORE_PATCHMANAGER_GETMAPID_OFFSET UNITYSDK_OFFSET(0x17142020)
#define IFIX_CORE_PATCHMANAGER_LOADMANIFEST_OFFSET UNITYSDK_OFFSET(0x17147100)
#define IFIX_CORE_PATCHMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x17142B20)
#define IFIX_CORE_PATCHMANAGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x171429E0)
#define IFIX_CORE_PATCHMANAGER_LOG_OFFSET UNITYSDK_OFFSET(0x17142950)
#define IFIX_CORE_PATCHMANAGER_MERGEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1714BB50)
#define IFIX_CORE_PATCHMANAGER_READMETHOD_OFFSET UNITYSDK_OFFSET(0x17141260)
#define IFIX_CORE_PATCHMANAGER_READSLOTINFO_OFFSET UNITYSDK_OFFSET(0x17142560)
#define IFIX_CORE_PATCHMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714C590)
#define IFIX_CORE_PATCHMANAGER__READMETHOD_M__0_OFFSET UNITYSDK_OFFSET(0x1714C6A0)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager_TypeDefinitionIndex = 9915;

	class PatchManager : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_DLog()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0xB40);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_PatchedMethodIDs()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0xB48);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::System::Action*>** StaticGet_removers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0xB50);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___f__am_cache0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0xB58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::MethodBase* readMethod(::System::IO::BinaryReader* reader, ::Il2CppArray<::System::Type*>* externTypes)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IO::BinaryReader*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_READMETHOD_OFFSET))(reader, externTypes);
		}

		static ::System::Int32 getMapId(::System::Collections::Generic::List_1<::System::Type*>* idMapArray, ::System::Reflection::MethodBase* method)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Type*>*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETMAPID_OFFSET))(idMapArray, method);
		}

		static ::System::Int32 getMapId_1(::System::Reflection::MethodBase* method)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETMAPID_1_OFFSET))(method);
		}

		static ::Il2CppArray<::System::Int32>* readSlotInfo(::System::IO::BinaryReader* reader, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>* itfMethodToId, ::Il2CppArray<::System::Type*>* externTypes, ::System::Int32 maxId)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>*, ::Il2CppArray<::System::Type*>*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_READSLOTINFO_OFFSET))(reader, itfMethodToId, externTypes, maxId);
		}

		static ::System::Void Log(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOG_OFFSET))(content);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOGFORMAT_OFFSET))(format, args);
		}

		static ::IFix::Core::VirtualMachine* Load(::System::IO::Stream* stream, ::System::Boolean checkNew, ::System::Action_1<::System::String*>* dLog)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::IO::Stream*, ::System::Boolean, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOAD_OFFSET))(stream, checkNew, dLog);
		}

		static ::IFix::Core::VirtualMachine* LoadManifest(::System::IO::Stream* stream, ::System::Collections::Generic::List_1<::System::String*>*& patches, ::System::Collections::Generic::List_1<::System::Int32>*& ignoreList, ::System::Action_1<::System::String*>* dLog)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::IO::Stream*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOADMANIFEST_OFFSET))(stream, patches, ignoreList, dLog);
		}

		static ::System::Void AppendPatch(::IFix::Core::VirtualMachine* vm, ::System::IO::Stream* stream, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>* methods, ::System::Collections::Generic::List_1<::System::Int32>* methodIds, ::System::String*& assemblyStr)
		{
			return ((::System::Void(*)(::IFix::Core::VirtualMachine*, ::System::IO::Stream*, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*&))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_APPENDPATCH_OFFSET))(vm, stream, methods, methodIds, assemblyStr);
		}

		static ::System::Void MergeWrapper(::IFix::Core::VirtualMachine* vm, ::System::String* assemblyStr, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>* methods, ::System::Collections::Generic::List_1<::System::Int32>* methodIds, ::System::Collections::Generic::List_1<::System::Int32>* ignoreIds)
		{
			return ((::System::Void(*)(::IFix::Core::VirtualMachine*, ::System::String*, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_MERGEWRAPPER_OFFSET))(vm, assemblyStr, methods, methodIds, ignoreIds);
		}

		static ::System::Type* _readMethod_m__0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Type*(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__READMETHOD_M__0_OFFSET))(p);
		}
	};
}
