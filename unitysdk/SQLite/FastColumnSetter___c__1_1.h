#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace SQLite { template <typename T> class FastColumnSetter___c__1_1; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class UriBuilder; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Text { class StringBuilder; }

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter___c__1_1_TypeDefinitionIndex = 36801;

	template <typename T>
	class FastColumnSetter___c__1_1 : public ::System::Object
	{
	public:
		static ::SQLite::FastColumnSetter___c__1_1<T>** StaticGet___9()
		{
			return (::SQLite::FastColumnSetter___c__1_1<T>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Int32>** StaticGet___9__1_1()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Boolean>** StaticGet___9__1_2()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Double>** StaticGet___9__1_3()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Single>** StaticGet___9__1_4()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::TimeSpan>** StaticGet___9__1_5()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::DateTime>** StaticGet___9__1_7()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::DateTimeOffset>** StaticGet___9__1_9()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::DateTimeOffset>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Int64>** StaticGet___9__1_11()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UInt64>** StaticGet___9__1_12()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UInt32>** StaticGet___9__1_13()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Decimal>** StaticGet___9__1_14()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Decimal>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Byte>** StaticGet___9__1_15()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UInt16>** StaticGet___9__1_16()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Int16>** StaticGet___9__1_17()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::SByte>** StaticGet___9__1_18()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::Il2CppArray<::System::Byte>*>** StaticGet___9__1_19()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Guid>** StaticGet___9__1_20()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Uri*>** StaticGet___9__1_21()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Uri*>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Text::StringBuilder*>** StaticGet___9__1_22()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UriBuilder*>** StaticGet___9__1_23()
		{
			return (::System::Func_3<::System::IntPtr, ::System::Int32, ::System::UriBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(FastColumnSetter___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
