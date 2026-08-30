#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }

#define R3_RETURNBOOLEAN_SUBSCRIBECORE_OFFSET UNITYSDK_OFFSET(0x1EFBB720)
#define R3_RETURNBOOLEAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBB7A0)
#define R3_RETURNBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBB700)

namespace R3
{
	inline static constexpr unsigned int ReturnBoolean_TypeDefinitionIndex = 35238;

	class ReturnBoolean : public ::R3::Observable_1<::System::Boolean>
	{
	public:
		static ::R3::Observable_1<::System::Boolean>** StaticGet_True()
		{
			return (::R3::Observable_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReturnBoolean_TypeDefinitionIndex)->GetStaticField(0xD50);
		}
		static ::R3::Observable_1<::System::Boolean>** StaticGet_False()
		{
			return (::R3::Observable_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ReturnBoolean_TypeDefinitionIndex)->GetStaticField(0xD58);
		}
		::System::Boolean value; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + R3_RETURNBOOLEAN__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_RETURNBOOLEAN__CCTOR_OFFSET))();
		}

		::System::IDisposable* SubscribeCore(::R3::Observer_1<::System::Boolean>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::R3::Observer_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + R3_RETURNBOOLEAN_SUBSCRIBECORE_OFFSET))(this, a1);
		}
	};
}
