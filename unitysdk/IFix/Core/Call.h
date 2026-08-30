#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core { class ThreadStackInfo; }
namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System { class Type; }

#define IFIX_CORE_CALL_BEGINFORSTACK_OFFSET UNITYSDK_OFFSET(0x1CC5DF30)
#define IFIX_CORE_CALL_BEGIN_OFFSET UNITYSDK_OFFSET(0x1CC5D640)
#define IFIX_CORE_CALL_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3BB23D0)
#define IFIX_CORE_CALL_GETBYTE_OFFSET UNITYSDK_OFFSET(0x3BB2400)
#define IFIX_CORE_CALL_GETCHAR_OFFSET UNITYSDK_OFFSET(0x3BB2460)
#define IFIX_CORE_CALL_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x3BB2610)
#define IFIX_CORE_CALL_GETINT16_OFFSET UNITYSDK_OFFSET(0x3BB2460)
#define IFIX_CORE_CALL_GETINT32_OFFSET UNITYSDK_OFFSET(0x3BB24F0)
#define IFIX_CORE_CALL_GETINT64_OFFSET UNITYSDK_OFFSET(0x3BB2550)
#define IFIX_CORE_CALL_GETINTPTR_OFFSET UNITYSDK_OFFSET(0x3BB2550)
#define IFIX_CORE_CALL_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x3BB2660)
#define IFIX_CORE_CALL_GETSINGLE_OFFSET UNITYSDK_OFFSET(0x3BB25B0)
#define IFIX_CORE_CALL_GETUINT16_OFFSET UNITYSDK_OFFSET(0x3BB2460)
#define IFIX_CORE_CALL_GETUINT32_OFFSET UNITYSDK_OFFSET(0x3BB24F0)
#define IFIX_CORE_CALL_GETUINT64_OFFSET UNITYSDK_OFFSET(0x3BB2550)
#define IFIX_CORE_CALL_PUSHBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3BB23A0)
#define IFIX_CORE_CALL_PUSHBYTE_OFFSET UNITYSDK_OFFSET(0x3BB23A0)
#define IFIX_CORE_CALL_PUSHDOUBLE_OFFSET UNITYSDK_OFFSET(0x3BB25E0)
#define IFIX_CORE_CALL_PUSHINT16_OFFSET UNITYSDK_OFFSET(0x3BB2430)
#define IFIX_CORE_CALL_PUSHINT32_OFFSET UNITYSDK_OFFSET(0x3BB24C0)
#define IFIX_CORE_CALL_PUSHINT64_OFFSET UNITYSDK_OFFSET(0x3BB2520)
#define IFIX_CORE_CALL_PUSHINTPTR_OFFSET UNITYSDK_OFFSET(0x3BB2520)
#define IFIX_CORE_CALL_PUSHOBJECTASRESULT_OFFSET UNITYSDK_OFFSET(0x3BB2700)
#define IFIX_CORE_CALL_PUSHOBJECT_OFFSET UNITYSDK_OFFSET(0x3BB2640)
#define IFIX_CORE_CALL_PUSHREF_OFFSET UNITYSDK_OFFSET(0x3BB2740)
#define IFIX_CORE_CALL_PUSHSINGLE_OFFSET UNITYSDK_OFFSET(0x3BB2580)
#define IFIX_CORE_CALL_PUSHUINT16_OFFSET UNITYSDK_OFFSET(0x3BB2490)
#define IFIX_CORE_CALL_PUSHUINT32_OFFSET UNITYSDK_OFFSET(0x3BB24C0)
#define IFIX_CORE_CALL_PUSHUINT64_OFFSET UNITYSDK_OFFSET(0x3BB2520)
#define IFIX_CORE_CALL_PUSHVALUETYPE_OFFSET UNITYSDK_OFFSET(0x3BB2650)
#define IFIX_CORE_CALL_UPDATEREFERENCE_OFFSET UNITYSDK_OFFSET(0x3BB2780)

namespace IFix::Core
{
	inline static constexpr unsigned int Call_TypeDefinitionIndex = 10067;

	struct alignas(8) Call
	{
		::IFix::Core::Value* argumentBase; // 0x10
		::IFix::Core::Value* evaluationStackBase; // 0x18
		::Il2CppArray<::System::Object*>* managedStack; // 0x20
		::IFix::Core::Value* currentTop; // 0x28
		::IFix::Core::Value** topWriteBack; // 0x30

		static ::IFix::Core::Call Begin()
		{
			return ((::IFix::Core::Call(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_BEGIN_OFFSET))();
		}

		static ::IFix::Core::Call BeginForStack(::IFix::Core::ThreadStackInfo* a1)
		{
			return ((::IFix::Core::Call(*)(::IFix::Core::ThreadStackInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_BEGINFORSTACK_OFFSET))(a1);
		}

		::System::Void PushBoolean(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHBOOLEAN_OFFSET))(this, a1);
		}

		::System::Boolean GetBoolean(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETBOOLEAN_OFFSET))(this, a1);
		}

		::System::Void PushByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHBYTE_OFFSET))(this, a1);
		}

		::System::Byte GetByte(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETBYTE_OFFSET))(this, a1);
		}

		::System::Void PushInt16(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINT16_OFFSET))(this, a1);
		}

		::System::Int16 GetInt16(::System::Int32 a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINT16_OFFSET))(this, a1);
		}

		::System::Char GetChar(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETCHAR_OFFSET))(this, a1);
		}

		::System::Void PushUInt16(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINT16_OFFSET))(this, a1);
		}

		::System::UInt16 GetUInt16(::System::Int32 a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINT16_OFFSET))(this, a1);
		}

		::System::Void PushInt32(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINT32_OFFSET))(this, a1);
		}

		::System::Int32 GetInt32(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINT32_OFFSET))(this, a1);
		}

		::System::Void PushUInt32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINT32_OFFSET))(this, a1);
		}

		::System::UInt32 GetUInt32(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINT32_OFFSET))(this, a1);
		}

		::System::Void PushInt64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINT64_OFFSET))(this, a1);
		}

		::System::Int64 GetInt64(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINT64_OFFSET))(this, a1);
		}

		::System::Void PushUInt64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINT64_OFFSET))(this, a1);
		}

		::System::UInt64 GetUInt64(::System::Int32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINT64_OFFSET))(this, a1);
		}

		::System::Void PushSingle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHSINGLE_OFFSET))(this, a1);
		}

		::System::Single GetSingle(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETSINGLE_OFFSET))(this, a1);
		}

		::System::Void PushDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHDOUBLE_OFFSET))(this, a1);
		}

		::System::Double GetDouble(::System::Int32 a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETDOUBLE_OFFSET))(this, a1);
		}

		::System::Void PushIntPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINTPTR_OFFSET))(this, a1);
		}

		::System::IntPtr GetIntPtr(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINTPTR_OFFSET))(this, a1);
		}

		::System::Void PushObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHOBJECT_OFFSET))(this, a1);
		}

		::System::Void PushValueType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHVALUETYPE_OFFSET))(this, a1);
		}

		::System::Object* GetObject(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETOBJECT_OFFSET))(this, a1);
		}

		::System::Void PushObjectAsResult(::System::Object* a1, ::System::Type* a2, ::IFix::Core::TypeInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*, ::IFix::Core::TypeInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHOBJECTASRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PushRef(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHREF_OFFSET))(this, a1);
		}

		::System::Void UpdateReference(::System::Int32 a1, ::System::Object* a2, ::IFix::Core::VirtualMachine* a3, ::System::Type* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::IFix::Core::VirtualMachine*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_UPDATEREFERENCE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
