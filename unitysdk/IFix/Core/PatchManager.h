#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_PATCHMANAGER_GETMAPID_1_OFFSET UNITYSDK_OFFSET(0x1E082C40)
#define IFIX_CORE_PATCHMANAGER_GETMAPID_OFFSET UNITYSDK_OFFSET(0x1E082B20)
#define IFIX_CORE_PATCHMANAGER_GETREDIRECTFIELD_OFFSET UNITYSDK_OFFSET(0x1E082820)
#define IFIX_CORE_PATCHMANAGER_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1E07F270)
#define IFIX_CORE_PATCHMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x1E07F130)
#define IFIX_CORE_PATCHMANAGER_READMETHOD_OFFSET UNITYSDK_OFFSET(0x1E081AE0)
#define IFIX_CORE_PATCHMANAGER_READSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1E082F50)
#define IFIX_CORE_PATCHMANAGER_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1E083860)
#define IFIX_CORE_PATCHMANAGER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1E083630)
#define IFIX_CORE_PATCHMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E083B60)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager_TypeDefinitionIndex = 6921;

	class PatchManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::System::Action*>** StaticGet_removers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(PatchManager_TypeDefinitionIndex)->GetStaticField(0x5DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__CCTOR_OFFSET))();
		}

		static ::IFix::Core::VirtualMachine* Load(::System::String* filepath, ::System::Boolean checkNew)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOAD_OFFSET))(filepath, checkNew);
		}

		static ::System::Reflection::MethodBase* readMethod(::System::IO::BinaryReader* reader, ::Il2CppArray<::System::Type*>* externTypes)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IO::BinaryReader*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_READMETHOD_OFFSET))(reader, externTypes);
		}

		static ::System::Reflection::FieldInfo* getRedirectField(::System::Reflection::MethodBase* method)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETREDIRECTFIELD_OFFSET))(method);
		}

		static ::System::Int32 getMapId(::System::Reflection::MethodBase* method)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETMAPID_OFFSET))(method);
		}

		static ::System::Int32 getMapId_1(::System::Collections::Generic::List_1<::System::Type*>* idMapArray, ::System::Reflection::MethodBase* method)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Type*>*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_GETMAPID_1_OFFSET))(idMapArray, method);
		}

		static ::Il2CppArray<::System::Int32>* readSlotInfo(::System::IO::BinaryReader* reader, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>* itfMethodToId, ::Il2CppArray<::System::Type*>* externTypes, ::System::Int32 maxId)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Int32>*, ::Il2CppArray<::System::Type*>*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_READSLOTINFO_OFFSET))(reader, itfMethodToId, externTypes, maxId);
		}

		static ::IFix::Core::VirtualMachine* Load_1(::System::IO::Stream* stream, ::System::Boolean checkNew)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_LOAD_1_OFFSET))(stream, checkNew);
		}

		static ::System::Void Unload(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_UNLOAD_OFFSET))(assembly);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER_UNLOADALL_OFFSET))();
		}
	};
}
