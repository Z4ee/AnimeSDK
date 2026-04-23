#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/IFix/Core/Instruction.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class AnonymousStoreyInfo; }
namespace IFix::Core { class ExceptionHandler; }
namespace IFix::Core { class ExternInvoker; }
namespace IFix::Core { class NewFieldInfo; }
namespace IFix::Core { class ObjectClone; }
namespace IFix::Core { class WrappersManager; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_VIRTUALMACHINE_ARRAYGET_OFFSET UNITYSDK_OFFSET(0x17162CE0)
#define IFIX_CORE_VIRTUALMACHINE_ARRAYSET_OFFSET UNITYSDK_OFFSET(0x171630D0)
#define IFIX_CORE_VIRTUALMACHINE_CHECKCCTOREXECUTE_OFFSET UNITYSDK_OFFSET(0x1714E6A0)
#define IFIX_CORE_VIRTUALMACHINE_COPY_OFFSET UNITYSDK_OFFSET(0x1714EB10)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1714E8D0)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1714ED00)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1713C4D0)
#define IFIX_CORE_VIRTUALMACHINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1714E5A0)
#define IFIX_CORE_VIRTUALMACHINE_GETEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x17162BF0)
#define IFIX_CORE_VIRTUALMACHINE_GET_ANONYMOUSSTOREYINFOS_OFFSET UNITYSDK_OFFSET(0x1714E520)
#define IFIX_CORE_VIRTUALMACHINE_GET_CCTORS_OFFSET UNITYSDK_OFFSET(0x1714E550)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXCEPTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1714E470)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXTERNMETHODS_OFFSET UNITYSDK_OFFSET(0x1714E4B0)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXTERNTYPES_OFFSET UNITYSDK_OFFSET(0x1714E490)
#define IFIX_CORE_VIRTUALMACHINE_GET_FIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1714E4E0)
#define IFIX_CORE_VIRTUALMACHINE_GET_INTERNSTRINGS_OFFSET UNITYSDK_OFFSET(0x1714E4C0)
#define IFIX_CORE_VIRTUALMACHINE_GET_NEWFIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1714E500)
#define IFIX_CORE_VIRTUALMACHINE_GET_STATICFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x1714E540)
#define IFIX_CORE_VIRTUALMACHINE_GET_UNMANAGEDCODES_OFFSET UNITYSDK_OFFSET(0x1714E570)
#define IFIX_CORE_VIRTUALMACHINE_GET_WRAPPERSMANAGER_OFFSET UNITYSDK_OFFSET(0x1714E580)
#define IFIX_CORE_VIRTUALMACHINE_SET_ANONYMOUSSTOREYINFOS_OFFSET UNITYSDK_OFFSET(0x1714E530)
#define IFIX_CORE_VIRTUALMACHINE_SET_CCTORS_OFFSET UNITYSDK_OFFSET(0x1714E560)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXCEPTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1714E480)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXTERNMETHODS_OFFSET UNITYSDK_OFFSET(0x17147040)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXTERNTYPES_OFFSET UNITYSDK_OFFSET(0x1714E4A0)
#define IFIX_CORE_VIRTUALMACHINE_SET_FIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1714E4F0)
#define IFIX_CORE_VIRTUALMACHINE_SET_INTERNSTRINGS_OFFSET UNITYSDK_OFFSET(0x1714E4D0)
#define IFIX_CORE_VIRTUALMACHINE_SET_NEWFIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1714E510)
#define IFIX_CORE_VIRTUALMACHINE_SET_STATICFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x171470A0)
#define IFIX_CORE_VIRTUALMACHINE_SET_WRAPPERSMANAGER_OFFSET UNITYSDK_OFFSET(0x1714E590)
#define IFIX_CORE_VIRTUALMACHINE_STORE_OFFSET UNITYSDK_OFFSET(0x1714E920)
#define IFIX_CORE_VIRTUALMACHINE_THROWRUNTIMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17162B70)
#define IFIX_CORE_VIRTUALMACHINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171634E0)
#define IFIX_CORE_VIRTUALMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x17146DB0)
#define IFIX_CORE_VIRTUALMACHINE__INFO_OFFSET UNITYSDK_OFFSET(0x1714DD10)

namespace IFix::Core
{
	inline static constexpr unsigned int VirtualMachine_TypeDefinitionIndex = 9954;

	class VirtualMachine : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___f__mg_cache0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VirtualMachine_TypeDefinitionIndex)->GetStaticField(0xB80);
		}
		static ::System::Action_1<::System::String*>** StaticGet_Info()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VirtualMachine_TypeDefinitionIndex)->GetStaticField(0xB88);
		}
		::Il2CppArray<::System::Type*>* staticFieldTypes; // 0x10
		::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* exceptionHandlers; // 0x18
		::Il2CppArray<::System::Reflection::FieldInfo*>* fieldInfos; // 0x20
		::Il2CppArray<::System::String*>* internStrings; // 0x28
		::IFix::Core::ObjectClone* objectClone; // 0x30
		::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* anonymousStoreyInfos; // 0x38
		::Il2CppArray<::System::Int32>* cctors; // 0x40
		::Il2CppArray<::IFix::Core::ExternInvoker*>* externInvokers; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>*>* overrideCache; // 0x50
		::IFix::Core::WrappersManager* wrappersManager; // 0x58
		::Il2CppArray<::System::Reflection::MethodBase*>* externMethods; // 0x60
		::System::Action* onDispose; // 0x68
		::Il2CppArray<::System::Type*>* externTypes; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* newFieldInfos; // 0x78
		::Il2CppArray<::System::Object*>* staticFields; // 0x80
		::System::Int32 PatchedArrayLength; // 0x88
		::IFix::Core::Instruction** unmanagedCodes; // 0x90

		::System::Void _ctor(::IFix::Core::Instruction** unmanaged_codes, ::System::Action* on_dispose)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Instruction**, ::System::Action*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE__CTOR_OFFSET))(this, unmanaged_codes, on_dispose);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* get_ExceptionHandlers()
		{
			return ((::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_EXCEPTIONHANDLERS_OFFSET))(this);
		}

		::System::Void set_ExceptionHandlers(::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_EXCEPTIONHANDLERS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Type*>* get_ExternTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_EXTERNTYPES_OFFSET))(this);
		}

		::System::Void set_ExternTypes(::Il2CppArray<::System::Type*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_EXTERNTYPES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Reflection::MethodBase*>* get_ExternMethods()
		{
			return ((::Il2CppArray<::System::Reflection::MethodBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_EXTERNMETHODS_OFFSET))(this);
		}

		::System::Void set_ExternMethods(::Il2CppArray<::System::Reflection::MethodBase*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::MethodBase*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_EXTERNMETHODS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_InternStrings()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_INTERNSTRINGS_OFFSET))(this);
		}

		::System::Void set_InternStrings(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_INTERNSTRINGS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* get_FieldInfos()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_FIELDINFOS_OFFSET))(this);
		}

		::System::Void set_FieldInfos(::Il2CppArray<::System::Reflection::FieldInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_FIELDINFOS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* get_NewFieldInfos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_NEWFIELDINFOS_OFFSET))(this);
		}

		::System::Void set_NewFieldInfos(::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_NEWFIELDINFOS_OFFSET))(this, value);
		}

		::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* get_AnonymousStoreyInfos()
		{
			return ((::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_ANONYMOUSSTOREYINFOS_OFFSET))(this);
		}

		::System::Void set_AnonymousStoreyInfos(::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_ANONYMOUSSTOREYINFOS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Type*>* get_StaticFieldTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_STATICFIELDTYPES_OFFSET))(this);
		}

		::System::Void set_StaticFieldTypes(::Il2CppArray<::System::Type*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_STATICFIELDTYPES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_Cctors()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_CCTORS_OFFSET))(this);
		}

		::System::Void set_Cctors(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_CCTORS_OFFSET))(this, value);
		}

		::IFix::Core::Instruction** get_UnmanagedCodes()
		{
			return ((::IFix::Core::Instruction**(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_UNMANAGEDCODES_OFFSET))(this);
		}

		::IFix::Core::WrappersManager* get_WrappersManager()
		{
			return ((::IFix::Core::WrappersManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_WRAPPERSMANAGER_OFFSET))(this);
		}

		::System::Void set_WrappersManager(::IFix::Core::WrappersManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::WrappersManager*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_WRAPPERSMANAGER_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_FINALIZE_OFFSET))(this);
		}

		::System::Void checkCctorExecute(::System::Int32 fieldId, ::IFix::Core::Value* argumentBase, ::Il2CppArray<::System::Object*>* managedStack, ::IFix::Core::Value* evaluationStackBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_CHECKCCTOREXECUTE_OFFSET))(this, fieldId, argumentBase, managedStack, evaluationStackBase);
		}

		::System::Void store(::IFix::Core::Value* stackBase, ::IFix::Core::Value* dst, ::IFix::Core::Value* src, ::Il2CppArray<::System::Object*>* managedStack)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Value*, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_STORE_OFFSET))(this, stackBase, dst, src, managedStack);
		}

		::System::Void copy(::IFix::Core::Value* stackBase, ::IFix::Core::Value* dst, ::IFix::Core::Value* src, ::Il2CppArray<::System::Object*>* managedStack)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Value*, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_COPY_OFFSET))(this, stackBase, dst, src, managedStack);
		}

		::System::Void Execute(::System::Int32 methodIndex, ::IFix::Core::Call& call, ::System::Int32 argsCount, ::System::Int32 refCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Call&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_EXECUTE_OFFSET))(this, methodIndex, call, argsCount, refCount);
		}

		::IFix::Core::Value* Execute_1(::System::Int32 methodIndex, ::IFix::Core::Value* argumentBase, ::Il2CppArray<::System::Object*>* managedStack, ::IFix::Core::Value* evaluationStackBase, ::System::Int32 argsCount)
		{
			return ((::IFix::Core::Value*(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_EXECUTE_1_OFFSET))(this, methodIndex, argumentBase, managedStack, evaluationStackBase, argsCount);
		}

		::System::Void throwRuntimeException(::System::Exception* e, ::System::Boolean bWrap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_THROWRUNTIMEEXCEPTION_OFFSET))(this, e, bWrap);
		}

		::IFix::Core::ExceptionHandler* getExceptionHandler(::System::Int32 methodIndex, ::System::Type* exceptionType, ::System::Int32 pc)
		{
			return ((::IFix::Core::ExceptionHandler*(*)(::PVOID, ::System::Int32, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GETEXCEPTIONHANDLER_OFFSET))(this, methodIndex, exceptionType, pc);
		}

		::System::Void arrayGet(::System::Object* obj, ::System::Int32 idx, ::IFix::Core::Value* val, ::Il2CppArray<::System::Object*>* managedStack, ::IFix::Core::Value* evaluationStackBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_ARRAYGET_OFFSET))(this, obj, idx, val, managedStack, evaluationStackBase);
		}

		::System::Void arraySet(::System::Object* obj, ::System::Int32 idx, ::IFix::Core::Value* val, ::Il2CppArray<::System::Object*>* managedStack, ::IFix::Core::Value* evaluationStackBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_ARRAYSET_OFFSET))(this, obj, idx, val, managedStack, evaluationStackBase);
		}

		static ::System::Void _Info(::System::String* a)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE__INFO_OFFSET))(a);
		}

		::IFix::Core::Value* Execute_2(::IFix::Core::Instruction* pc, ::IFix::Core::Value* argumentBase, ::Il2CppArray<::System::Object*>* managedStack, ::IFix::Core::Value* evaluationStackBase, ::System::Int32 argsCount, ::System::Int32 methodIndex, ::System::Int32 refCount, ::IFix::Core::Value** topWriteBack)
		{
			return ((::IFix::Core::Value*(*)(::PVOID, ::IFix::Core::Instruction*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*, ::System::Int32, ::System::Int32, ::System::Int32, ::IFix::Core::Value**))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_EXECUTE_2_OFFSET))(this, pc, argumentBase, managedStack, evaluationStackBase, argsCount, methodIndex, refCount, topWriteBack);
		}
	};
}
