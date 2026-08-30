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

#define IFIX_CORE_VIRTUALMACHINE_ARRAYGET_OFFSET UNITYSDK_OFFSET(0x1B4E67E0)
#define IFIX_CORE_VIRTUALMACHINE_ARRAYSET_OFFSET UNITYSDK_OFFSET(0x1B4E6B40)
#define IFIX_CORE_VIRTUALMACHINE_CHECKCCTOREXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4D2E70)
#define IFIX_CORE_VIRTUALMACHINE_COPY_OFFSET UNITYSDK_OFFSET(0x1B4D3350)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1B4D30A0)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1B4D35A0)
#define IFIX_CORE_VIRTUALMACHINE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4B7640)
#define IFIX_CORE_VIRTUALMACHINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D2D60)
#define IFIX_CORE_VIRTUALMACHINE_GETEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1B4E6680)
#define IFIX_CORE_VIRTUALMACHINE_GET_ANONYMOUSSTOREYINFOS_OFFSET UNITYSDK_OFFSET(0x1B4D2CE0)
#define IFIX_CORE_VIRTUALMACHINE_GET_CCTORS_OFFSET UNITYSDK_OFFSET(0x1B4D2D10)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXCEPTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B4D2C30)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXTERNMETHODS_OFFSET UNITYSDK_OFFSET(0x1B4D2C70)
#define IFIX_CORE_VIRTUALMACHINE_GET_EXTERNTYPES_OFFSET UNITYSDK_OFFSET(0x1B4D2C50)
#define IFIX_CORE_VIRTUALMACHINE_GET_FIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1B4D2CA0)
#define IFIX_CORE_VIRTUALMACHINE_GET_INTERNSTRINGS_OFFSET UNITYSDK_OFFSET(0x1B4D2C80)
#define IFIX_CORE_VIRTUALMACHINE_GET_NEWFIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1B4D2CC0)
#define IFIX_CORE_VIRTUALMACHINE_GET_STATICFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x1B4D2D00)
#define IFIX_CORE_VIRTUALMACHINE_GET_UNMANAGEDCODES_OFFSET UNITYSDK_OFFSET(0x1B4D2D30)
#define IFIX_CORE_VIRTUALMACHINE_GET_WRAPPERSMANAGER_OFFSET UNITYSDK_OFFSET(0x1B4D2D40)
#define IFIX_CORE_VIRTUALMACHINE_LOGRUNTIMEFIXVERSION_OFFSET UNITYSDK_OFFSET(0x1B4C4F40)
#define IFIX_CORE_VIRTUALMACHINE_SET_ANONYMOUSSTOREYINFOS_OFFSET UNITYSDK_OFFSET(0x1B4D2CF0)
#define IFIX_CORE_VIRTUALMACHINE_SET_CCTORS_OFFSET UNITYSDK_OFFSET(0x1B4D2D20)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXCEPTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B4D2C40)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXTERNMETHODS_OFFSET UNITYSDK_OFFSET(0x1B4C5280)
#define IFIX_CORE_VIRTUALMACHINE_SET_EXTERNTYPES_OFFSET UNITYSDK_OFFSET(0x1B4D2C60)
#define IFIX_CORE_VIRTUALMACHINE_SET_FIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1B4D2CB0)
#define IFIX_CORE_VIRTUALMACHINE_SET_INTERNSTRINGS_OFFSET UNITYSDK_OFFSET(0x1B4D2C90)
#define IFIX_CORE_VIRTUALMACHINE_SET_NEWFIELDINFOS_OFFSET UNITYSDK_OFFSET(0x1B4D2CD0)
#define IFIX_CORE_VIRTUALMACHINE_SET_STATICFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x1B4C5300)
#define IFIX_CORE_VIRTUALMACHINE_SET_WRAPPERSMANAGER_OFFSET UNITYSDK_OFFSET(0x1B4D2D50)
#define IFIX_CORE_VIRTUALMACHINE_STORE_OFFSET UNITYSDK_OFFSET(0x1B4D30F0)
#define IFIX_CORE_VIRTUALMACHINE_THROWRUNTIMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B4E6600)
#define IFIX_CORE_VIRTUALMACHINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E6E80)
#define IFIX_CORE_VIRTUALMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C5080)
#define IFIX_CORE_VIRTUALMACHINE__INFO_OFFSET UNITYSDK_OFFSET(0x1B4D2040)

namespace IFix::Core
{
	inline static constexpr unsigned int VirtualMachine_TypeDefinitionIndex = 10075;

	class VirtualMachine : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___f__mg_cache0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VirtualMachine_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::Action_1<::System::String*>** StaticGet_Info()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VirtualMachine_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		::Il2CppArray<::IFix::Core::ExternInvoker*>* externDirectInvokers; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>*>* overrideCache; // 0x18
		::Il2CppArray<::System::String*>* internStrings; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* newFieldInfos; // 0x28
		::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* exceptionHandlers; // 0x30
		::Il2CppArray<::System::Type*>* staticFieldTypes; // 0x38
		::Il2CppArray<::System::Type*>* externTypes; // 0x40
		::IFix::Core::ObjectClone* objectClone; // 0x48
		::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* anonymousStoreyInfos; // 0x50
		::Il2CppArray<::System::Object*>* staticFields; // 0x58
		::Il2CppArray<::System::Reflection::FieldInfo*>* fieldInfos; // 0x60
		::IFix::Core::WrappersManager* wrappersManager; // 0x68
		::Il2CppArray<::System::Reflection::MethodBase*>* externMethods; // 0x70
		::Il2CppArray<::IFix::Core::ExternInvoker*>* externInvokers; // 0x78
		::System::Action* onDispose; // 0x80
		::Il2CppArray<::System::Int32>* cctors; // 0x88
		::IFix::Core::Instruction** unmanagedCodes; // 0x90
		::System::Int32 PatchedArrayLength; // 0x98

		::System::Void _ctor(::IFix::Core::Instruction** a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Instruction**, ::System::Action*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* get_ExceptionHandlers()
		{
			return ((::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_EXCEPTIONHANDLERS_OFFSET))(this);
		}

		::System::Void set_ExceptionHandlers(::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::IFix::Core::ExceptionHandler*>*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_EXCEPTIONHANDLERS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* get_ExternTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_EXTERNTYPES_OFFSET))(this);
		}

		::System::Void set_ExternTypes(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_EXTERNTYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::MethodBase*>* get_ExternMethods()
		{
			return ((::Il2CppArray<::System::Reflection::MethodBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_EXTERNMETHODS_OFFSET))(this);
		}

		::System::Void set_ExternMethods(::Il2CppArray<::System::Reflection::MethodBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::MethodBase*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_EXTERNMETHODS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_InternStrings()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_INTERNSTRINGS_OFFSET))(this);
		}

		::System::Void set_InternStrings(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_INTERNSTRINGS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* get_FieldInfos()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_FIELDINFOS_OFFSET))(this);
		}

		::System::Void set_FieldInfos(::Il2CppArray<::System::Reflection::FieldInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_FIELDINFOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* get_NewFieldInfos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_NEWFIELDINFOS_OFFSET))(this);
		}

		::System::Void set_NewFieldInfos(::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_NEWFIELDINFOS_OFFSET))(this, a1);
		}

		::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* get_AnonymousStoreyInfos()
		{
			return ((::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_ANONYMOUSSTOREYINFOS_OFFSET))(this);
		}

		::System::Void set_AnonymousStoreyInfos(::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::IFix::Core::AnonymousStoreyInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_ANONYMOUSSTOREYINFOS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* get_StaticFieldTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_STATICFIELDTYPES_OFFSET))(this);
		}

		::System::Void set_StaticFieldTypes(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_STATICFIELDTYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Cctors()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_CCTORS_OFFSET))(this);
		}

		::System::Void set_Cctors(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_CCTORS_OFFSET))(this, a1);
		}

		::IFix::Core::Instruction** get_UnmanagedCodes()
		{
			return ((::IFix::Core::Instruction**(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_UNMANAGEDCODES_OFFSET))(this);
		}

		::IFix::Core::WrappersManager* get_WrappersManager()
		{
			return ((::IFix::Core::WrappersManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GET_WRAPPERSMANAGER_OFFSET))(this);
		}

		::System::Void set_WrappersManager(::IFix::Core::WrappersManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::WrappersManager*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_SET_WRAPPERSMANAGER_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_FINALIZE_OFFSET))(this);
		}

		::System::Void checkCctorExecute(::System::Int32 a1, ::IFix::Core::Value* a2, ::Il2CppArray<::System::Object*>* a3, ::IFix::Core::Value* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_CHECKCCTOREXECUTE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void store(::IFix::Core::Value* a1, ::IFix::Core::Value* a2, ::IFix::Core::Value* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Value*, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_STORE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void copy(::IFix::Core::Value* a1, ::IFix::Core::Value* a2, ::IFix::Core::Value* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Value*, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_COPY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Execute(::System::Int32 a1, ::IFix::Core::Call& a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Call&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_EXECUTE_OFFSET))(this, a1, a2, a3, a4);
		}

		::IFix::Core::Value* Execute_1(::System::Int32 a1, ::IFix::Core::Value* a2, ::Il2CppArray<::System::Object*>* a3, ::IFix::Core::Value* a4, ::System::Int32 a5)
		{
			return ((::IFix::Core::Value*(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_EXECUTE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void throwRuntimeException(::System::Exception* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_THROWRUNTIMEEXCEPTION_OFFSET))(this, a1, a2);
		}

		::IFix::Core::ExceptionHandler* getExceptionHandler(::System::Int32 a1, ::System::Type* a2, ::System::Int32 a3)
		{
			return ((::IFix::Core::ExceptionHandler*(*)(::PVOID, ::System::Int32, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_GETEXCEPTIONHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void arrayGet(::System::Object* a1, ::System::Int32 a2, ::IFix::Core::Value* a3, ::Il2CppArray<::System::Object*>* a4, ::IFix::Core::Value* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_ARRAYGET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void arraySet(::System::Object* a1, ::System::Int32 a2, ::IFix::Core::Value* a3, ::Il2CppArray<::System::Object*>* a4, ::IFix::Core::Value* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_ARRAYSET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _Info(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE__INFO_OFFSET))(a1);
		}

		static ::System::Void LogRuntimeFixVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_LOGRUNTIMEFIXVERSION_OFFSET))();
		}

		::IFix::Core::Value* Execute_2(::IFix::Core::Instruction* a1, ::IFix::Core::Value* a2, ::Il2CppArray<::System::Object*>* a3, ::IFix::Core::Value* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::IFix::Core::Value** a8)
		{
			return ((::IFix::Core::Value*(*)(::PVOID, ::IFix::Core::Instruction*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::IFix::Core::Value*, ::System::Int32, ::System::Int32, ::System::Int32, ::IFix::Core::Value**))((::PBYTE)hIl2Cpp + IFIX_CORE_VIRTUALMACHINE_EXECUTE_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
