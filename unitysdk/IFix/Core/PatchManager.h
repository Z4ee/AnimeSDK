#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class AnonymousStoreyInfo; }
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

#define IFIX_CORE_PATCHMANAGER_APPENDPATCH_OFFSET UNITYSDK_OFFSET(0x1B4C7810)
#define IFIX_CORE_PATCHMANAGER_GETMAPID_1_OFFSET UNITYSDK_OFFSET(0x1B4BE7A0)
#define IFIX_CORE_PATCHMANAGER_GETMAPID_OFFSET UNITYSDK_OFFSET(0x1B4BE280)
#define IFIX_CORE_PATCHMANAGER_LOADMANIFEST_OFFSET UNITYSDK_OFFSET(0x1B4C5360)
#define IFIX_CORE_PATCHMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x1B4BF690)
#define IFIX_CORE_PATCHMANAGER_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B4BF1F0)
#define IFIX_CORE_PATCHMANAGER_LOG_OFFSET UNITYSDK_OFFSET(0x1B4BF160)
#define IFIX_CORE_PATCHMANAGER_MERGEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1B4CBA90)
#define IFIX_CORE_PATCHMANAGER_READMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4BC900)
#define IFIX_CORE_PATCHMANAGER_READSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1B4BEAD0)
#define IFIX_CORE_PATCHMANAGER_SETANONYMOUSSTOREYINFO_OFFSET UNITYSDK_OFFSET(0x1B4BF340)
#define IFIX_CORE_PATCHMANAGER_VALIDATEANONYMOUSSTOREYCTORINFO_OFFSET UNITYSDK_OFFSET(0x1B4BF530)
#define IFIX_CORE_PATCHMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4CC6A0)
#define IFIX_CORE_PATCHMANAGER__READMETHOD_M__0_OFFSET UNITYSDK_OFFSET(0x1B4CC7B0)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager_TypeDefinitionIndex = 10035;

	class PatchManager : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_DLog()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0x640);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::System::Action*>** StaticGet_removers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0x648);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___f__am_cache0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_PatchedMethodIDs()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0x658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::MethodBase* readMethod(::System::IO::BinaryReader* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IO::BinaryReader*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_READMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Int32 getMapId(::System::Collections::Generic::List_1<::System::Type*>* a1, ::System::Reflection::MethodBase* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Type*>*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETMAPID_OFFSET))(a1, a2);
		}

		static ::System::Int32 getMapId_1(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETMAPID_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* readSlotInfo(::System::IO::BinaryReader* a1, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>* a2, ::Il2CppArray<::System::Type*>* a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>*, ::Il2CppArray<::System::Type*>*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_READSLOTINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOG_OFFSET))(a1);
		}

		static ::System::Void LogFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void SetAnonymousStoreyInfo(::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::IFix::Core::AnonymousStoreyInfo* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>*, ::System::Int32, ::System::Int32, ::IFix::Core::AnonymousStoreyInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_SETANONYMOUSSTOREYINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateAnonymousStoreyCtorInfo(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_VALIDATEANONYMOUSSTOREYCTORINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::IFix::Core::VirtualMachine* Load(::System::IO::Stream* a1, ::System::Boolean a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::IO::Stream*, ::System::Boolean, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOAD_OFFSET))(a1, a2, a3);
		}

		static ::IFix::Core::VirtualMachine* LoadManifest(::System::IO::Stream* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::System::Action_1<::System::String*>* a4)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::IO::Stream*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOADMANIFEST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AppendPatch(::IFix::Core::VirtualMachine* a1, ::System::IO::Stream* a2, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::String*& a5)
		{
			return ((::System::Void(*)(::IFix::Core::VirtualMachine*, ::System::IO::Stream*, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*&))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_APPENDPATCH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void MergeWrapper(::IFix::Core::VirtualMachine* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::IFix::Core::VirtualMachine*, ::System::String*, ::System::Collections::Generic::List_1<::System::Reflection::MethodBase*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_MERGEWRAPPER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Type* _readMethod_m__0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__READMETHOD_M__0_OFFSET))(a1);
		}
	};
}
