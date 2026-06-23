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
namespace System::IO { class Stream; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_VIRTUALMACHINE_ARRAYGET_OFFSET UNITYSDK_OFFSET(0x1CABC600)
#define IFIX_CORE_VIRTUALMACHINE_ARRAYSET_OFFSET UNITYSDK_OFFSET(0x1CABC9E0)
#define IFIX_CORE_VIRTUALMACHINE_CHECKCCTOREXECUTE_OFFSET UNITYSDK_OFFSET(0x1CAA7740)
#define IFIX_CORE_VIRTUALMACHINE_COPY_OFFSET UNITYSDK_OFFSET(0x1CAA7BC0)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1CAA7970)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1CAA7E50)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA9B450)
#define IFIX_CORE_VIRTUALMACHINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CAA76B0)
#define IFIX_CORE_VIRTUALMACHINE_GETEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1CABC510)
#define IFIX_CORE_VIRTUALMACHINE_GETGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CABD480)
#define IFIX_CORE_VIRTUALMACHINE_GET_ANONYMOUSSTOREYINFOS_OFFSET UNITYSDK_OFFSET(0x1CAA7670)
#define IFIX_CORE_VIRTUALMACHINE_GET_CCTORS_OFFSET UNITYSDK_OFFSET(0x1CAA7690)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXCEPTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CAA7620)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXTERNMETHODS_OFFSET UNITYSDK_OFFSET(0x1CAA7630)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXTERNTYPES_OFFSET UNITYSDK_OFFSET(0x1CA9A120)
#define IFIX_CORE_VIRTUALMACHINE_GET_FIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1CAA7650)
#define IFIX_CORE_VIRTUALMACHINE_GET_INTERNSTRINGS_OFFSET UNITYSDK_OFFSET(0x1CAA7640)
#define IFIX_CORE_VIRTUALMACHINE_GET_NEWFIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1CAA7660)
#define IFIX_CORE_VIRTUALMACHINE_GET_STATICFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x1CAA7680)
#define IFIX_CORE_VIRTUALMACHINE_GET_WRAPPERSMANAGER_OFFSET UNITYSDK_OFFSET(0x1CAA76A0)
#define IFIX_CORE_VIRTUALMACHINE_INITIALIZEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CABD360)
#define IFIX_CORE_VIRTUALMACHINE_PRINTSTACK_OFFSET UNITYSDK_OFFSET(0x1CABC270)
#define IFIX_CORE_VIRTUALMACHINE_REMOVEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CABD420)
#define IFIX_CORE_VIRTUALMACHINE_REPLACEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CABD3C0)
#define IFIX_CORE_VIRTUALMACHINE_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x1CABD310)
#define IFIX_CORE_VIRTUALMACHINE_SET_ANONYMOUSSTOREYINFOS_OFFSET UNITYSDK_OFFSET(0x1CAA4830)
#define IFIX_CORE_VIRTUALMACHINE_SET_CCTORS_OFFSET UNITYSDK_OFFSET(0x1CAA48A0)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXCEPTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CAA47F0)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXTERNMETHODS_OFFSET UNITYSDK_OFFSET(0x1CAA4790)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXTERNTYPES_OFFSET UNITYSDK_OFFSET(0x1CAA4780)
#define IFIX_CORE_VIRTUALMACHINE_SET_FIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1CAA4810)
#define IFIX_CORE_VIRTUALMACHINE_SET_INTERNSTRINGS_OFFSET UNITYSDK_OFFSET(0x1CAA4800)
#define IFIX_CORE_VIRTUALMACHINE_SET_NEWFIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1CAA4820)
#define IFIX_CORE_VIRTUALMACHINE_SET_STATICFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x1CAA4840)
#define IFIX_CORE_VIRTUALMACHINE_SET_WRAPPERSMANAGER_OFFSET UNITYSDK_OFFSET(0x1CAA48B0)
#define IFIX_CORE_VIRTUALMACHINE_STATISTICS_OFFSET UNITYSDK_OFFSET(0x1CABCE50)
#define IFIX_CORE_VIRTUALMACHINE_STORE_OFFSET UNITYSDK_OFFSET(0x1CAA79C0)
#define IFIX_CORE_VIRTUALMACHINE_SWEEP_OFFSET UNITYSDK_OFFSET(0x1CABCDF0)
#define IFIX_CORE_VIRTUALMACHINE_THROWRUNTIMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CABC490)
#define IFIX_CORE_VIRTUALMACHINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CABD4D0)
#define IFIX_CORE_VIRTUALMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA4550)
#define IFIX_CORE_VIRTUALMACHINE__INFO_OFFSET UNITYSDK_OFFSET(0x1CAA6580)

namespace IFix::Core
{
	inline static constexpr unsigned int VirtualMachine_TypeDefinitionIndex = 6950;

	class VirtualMachine : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_Info()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VirtualMachine_TypeDefinitionIndex)->GetStaticField(0x5DC0);
		}
		// static const ::System::Int32 MAX_EVALUATION_STACK_SIZE = 0x2800; // 0x0
		::Il2CppArray<::System::Type*>* externTypes; // 0x10
		::Il2CppArray<::System::Object*>* staticFields; // 0x18
		::IFix::Core::ObjectClone* objectClone; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>*>* overrideCache; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* newFieldInfos; // 0x30
		::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* exceptionHandlers; // 0x38
		::Il2CppArray<::System::Reflection::MethodBase*>* externMethods; // 0x40
		::IFix::Core::WrappersManager* wrappersManager; // 0x48
		::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* anonymousStoreyInfos; // 0x50
		::Il2CppArray<::System::String*>* internStrings; // 0x58
		::Il2CppArray<::IFix::Core::ExternInvoker*>* externInvokers; // 0x60
		::Il2CppArray<::System::Reflection::FieldInfo*>* fieldInfos; // 0x68
		::System::Action* onDispose; // 0x70
		::Il2CppArray<::System::Type*>* staticFieldTypes; // 0x78
		::Il2CppArray<::System::Int32>* cctors; // 0x80
		::IFix::Core::Instruction** unmanagedCodes; // 0x88
		::System::Int32 PatchedArrayLength; // 0x90

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

		::System::Void printStack(::System::String* title, ::IFix::Core::Value* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_PRINTSTACK_OFFSET))(this, title, val);
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

		static ::System::Void Sweep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SWEEP_OFFSET))();
		}

		::System::String* Statistics()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_STATISTICS_OFFSET))(this);
		}

		static ::System::Void SetGlobal(::IFix::Core::VirtualMachine* virtualMachine, ::System::Boolean throwWhileExisted)
		{
			return ((::System::Void(*)(::IFix::Core::VirtualMachine*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SETGLOBAL_OFFSET))(virtualMachine, throwWhileExisted);
		}

		static ::System::Void InitializeGlobal(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_INITIALIZEGLOBAL_OFFSET))(stream);
		}

		static ::System::Void ReplaceGlobal(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_REPLACEGLOBAL_OFFSET))(stream);
		}

		static ::System::Void RemoveGlobal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_REMOVEGLOBAL_OFFSET))();
		}

		static ::IFix::Core::VirtualMachine* GetGlobal()
		{
			return ((::IFix::Core::VirtualMachine*(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GETGLOBAL_OFFSET))();
		}
	};
}
