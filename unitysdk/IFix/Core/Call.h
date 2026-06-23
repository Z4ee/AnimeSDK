#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core { class ThreadStackInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System { class Type; }

#define IFIX_CORE_CALL_BEGINFORSTACK_OFFSET UNITYSDK_OFFSET(0x1CA9BCA0)
#define IFIX_CORE_CALL_BEGIN_OFFSET UNITYSDK_OFFSET(0x1CA9BA80)
#define IFIX_CORE_CALL_END_OFFSET UNITYSDK_OFFSET(0x1CA9C9F0)
#define IFIX_CORE_CALL_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x99A220)
#define IFIX_CORE_CALL_GETBYTE_OFFSET UNITYSDK_OFFSET(0x99A250)
#define IFIX_CORE_CALL_GETCHAR_OFFSET UNITYSDK_OFFSET(0x99A2E0)
#define IFIX_CORE_CALL_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x99A490)
#define IFIX_CORE_CALL_GETINT16_OFFSET UNITYSDK_OFFSET(0x99A2E0)
#define IFIX_CORE_CALL_GETINT32_OFFSET UNITYSDK_OFFSET(0x99A370)
#define IFIX_CORE_CALL_GETINT64_OFFSET UNITYSDK_OFFSET(0x99A3D0)
#define IFIX_CORE_CALL_GETINTPTR_OFFSET UNITYSDK_OFFSET(0x99A3D0)
#define IFIX_CORE_CALL_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x99A550)
#define IFIX_CORE_CALL_GETSBYTE_OFFSET UNITYSDK_OFFSET(0x99A250)
#define IFIX_CORE_CALL_GETSINGLE_OFFSET UNITYSDK_OFFSET(0x99A430)
#define IFIX_CORE_CALL_GETUINT16_OFFSET UNITYSDK_OFFSET(0x99A2E0)
#define IFIX_CORE_CALL_GETUINT32_OFFSET UNITYSDK_OFFSET(0x99A370)
#define IFIX_CORE_CALL_GETUINT64_OFFSET UNITYSDK_OFFSET(0x99A3D0)
#define IFIX_CORE_CALL_GETUINTPTR_OFFSET UNITYSDK_OFFSET(0x99A4C0)
#define IFIX_CORE_CALL_PUSHBOOLEAN_OFFSET UNITYSDK_OFFSET(0x99A1F0)
#define IFIX_CORE_CALL_PUSHBYTE_OFFSET UNITYSDK_OFFSET(0x99A1F0)
#define IFIX_CORE_CALL_PUSHCHAR_OFFSET UNITYSDK_OFFSET(0x99A310)
#define IFIX_CORE_CALL_PUSHDOUBLE_OFFSET UNITYSDK_OFFSET(0x99A460)
#define IFIX_CORE_CALL_PUSHINT16_OFFSET UNITYSDK_OFFSET(0x99A2B0)
#define IFIX_CORE_CALL_PUSHINT32_OFFSET UNITYSDK_OFFSET(0x99A340)
#define IFIX_CORE_CALL_PUSHINT64_OFFSET UNITYSDK_OFFSET(0x99A3A0)
#define IFIX_CORE_CALL_PUSHINTPTR_OFFSET UNITYSDK_OFFSET(0x99A3A0)
#define IFIX_CORE_CALL_PUSHOBJECTASRESULT_OFFSET UNITYSDK_OFFSET(0x99A560)
#define IFIX_CORE_CALL_PUSHOBJECT_OFFSET UNITYSDK_OFFSET(0x99A530)
#define IFIX_CORE_CALL_PUSHREF_OFFSET UNITYSDK_OFFSET(0x99A5A0)
#define IFIX_CORE_CALL_PUSHSBYTE_OFFSET UNITYSDK_OFFSET(0x99A280)
#define IFIX_CORE_CALL_PUSHSINGLE_OFFSET UNITYSDK_OFFSET(0x99A400)
#define IFIX_CORE_CALL_PUSHUINT16_OFFSET UNITYSDK_OFFSET(0x99A310)
#define IFIX_CORE_CALL_PUSHUINT32_OFFSET UNITYSDK_OFFSET(0x99A340)
#define IFIX_CORE_CALL_PUSHUINT64_OFFSET UNITYSDK_OFFSET(0x99A3A0)
#define IFIX_CORE_CALL_PUSHUINTPTR_OFFSET UNITYSDK_OFFSET(0x99A3A0)
#define IFIX_CORE_CALL_PUSHVALUETYPE_OFFSET UNITYSDK_OFFSET(0x99A540)
#define IFIX_CORE_CALL_UPDATEREFERENCE_OFFSET UNITYSDK_OFFSET(0x99A5E0)

namespace IFix::Core
{
	inline static constexpr unsigned int Call_TypeDefinitionIndex = 6943;

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

		static ::IFix::Core::Call BeginForStack(::IFix::Core::ThreadStackInfo* stack)
		{
			return ((::IFix::Core::Call(*)(::IFix::Core::ThreadStackInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_BEGINFORSTACK_OFFSET))(stack);
		}

		::System::Void PushBoolean(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHBOOLEAN_OFFSET))(this, b);
		}

		::System::Boolean GetBoolean(::System::Int32 offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETBOOLEAN_OFFSET))(this, offset);
		}

		::System::Void PushByte(::System::Byte b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHBYTE_OFFSET))(this, b);
		}

		::System::Byte GetByte(::System::Int32 offset)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETBYTE_OFFSET))(this, offset);
		}

		::System::Void PushSByte(::System::SByte sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHSBYTE_OFFSET))(this, sb);
		}

		::System::SByte GetSByte(::System::Int32 offset)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETSBYTE_OFFSET))(this, offset);
		}

		::System::Void PushInt16(::System::Int16 s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINT16_OFFSET))(this, s);
		}

		::System::Int16 GetInt16(::System::Int32 offset)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINT16_OFFSET))(this, offset);
		}

		::System::Void PushChar(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHCHAR_OFFSET))(this, c);
		}

		::System::Char GetChar(::System::Int32 offset)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETCHAR_OFFSET))(this, offset);
		}

		::System::Void PushUInt16(::System::UInt16 us)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINT16_OFFSET))(this, us);
		}

		::System::UInt16 GetUInt16(::System::Int32 offset)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINT16_OFFSET))(this, offset);
		}

		::System::Void PushInt32(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINT32_OFFSET))(this, i);
		}

		::System::Int32 GetInt32(::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINT32_OFFSET))(this, offset);
		}

		::System::Void PushUInt32(::System::UInt32 ui)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINT32_OFFSET))(this, ui);
		}

		::System::UInt32 GetUInt32(::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINT32_OFFSET))(this, offset);
		}

		::System::Void PushInt64(::System::Int64 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINT64_OFFSET))(this, i);
		}

		::System::Int64 GetInt64(::System::Int32 offset)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINT64_OFFSET))(this, offset);
		}

		::System::Void PushUInt64(::System::UInt64 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINT64_OFFSET))(this, i);
		}

		::System::UInt64 GetUInt64(::System::Int32 offset)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINT64_OFFSET))(this, offset);
		}

		::System::Void PushSingle(::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHSINGLE_OFFSET))(this, f);
		}

		::System::Single GetSingle(::System::Int32 offset)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETSINGLE_OFFSET))(this, offset);
		}

		::System::Void PushDouble(::System::Double d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHDOUBLE_OFFSET))(this, d);
		}

		::System::Double GetDouble(::System::Int32 offset)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETDOUBLE_OFFSET))(this, offset);
		}

		::System::Void PushIntPtr(::System::IntPtr i)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHINTPTR_OFFSET))(this, i);
		}

		::System::IntPtr GetIntPtr(::System::Int32 offset)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETINTPTR_OFFSET))(this, offset);
		}

		::System::Void PushUIntPtr(::System::UIntPtr i)
		{
			return ((::System::Void(*)(::PVOID, ::System::UIntPtr))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHUINTPTR_OFFSET))(this, i);
		}

		::System::UIntPtr GetUIntPtr(::System::Int32 offset)
		{
			return ((::System::UIntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETUINTPTR_OFFSET))(this, offset);
		}

		::System::Void PushObject(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHOBJECT_OFFSET))(this, o);
		}

		::System::Void PushValueType(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHVALUETYPE_OFFSET))(this, o);
		}

		::System::Object* GetObject(::System::Int32 offset)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_GETOBJECT_OFFSET))(this, offset);
		}

		::System::Void PushObjectAsResult(::System::Object* obj, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHOBJECTASRESULT_OFFSET))(this, obj, type);
		}

		::System::Void PushRef(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_PUSHREF_OFFSET))(this, offset);
		}

		::System::Void UpdateReference(::System::Int32 offset, ::System::Object* obj, ::IFix::Core::VirtualMachine* virtualMachine, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::IFix::Core::VirtualMachine*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_UPDATEREFERENCE_OFFSET))(this, offset, obj, virtualMachine, type);
		}

		static ::System::Void End(::IFix::Core::Call& call)
		{
			return ((::System::Void(*)(::IFix::Core::Call&))((::PBYTE)hIl2Cpp + IFIX_CORE_CALL_END_OFFSET))(call);
		}
	};
}
