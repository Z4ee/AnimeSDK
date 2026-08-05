#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class SystemReaderWriterLockSlim; }
namespace System { template <typename T> class Func_1; }

#define FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DC770)
#define FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DC7B0)
#define FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F9DC7C0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FThreadSafeNamePool___c_TypeDefinitionIndex = 8775;

	class FThreadSafeNamePool___c : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FThreadSafeNamePool___c** StaticGet___9()
		{
			return (::Foundation::Unreal::FThreadSafeNamePool___c**)Il2CppClass::FromTypeDefinitionIndex(FThreadSafeNamePool___c_TypeDefinitionIndex)->GetStaticField(0x7570);
		}
		static ::System::Func_1<::Foundation::SystemReaderWriterLockSlim*>** StaticGet___9__0_0()
		{
			return (::System::Func_1<::Foundation::SystemReaderWriterLockSlim*>**)Il2CppClass::FromTypeDefinitionIndex(FThreadSafeNamePool___c_TypeDefinitionIndex)->GetStaticField(0x7578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL___C__CTOR_OFFSET))(this);
		}

		::Foundation::SystemReaderWriterLockSlim* __ctor_b__0_0()
		{
			return ((::Foundation::SystemReaderWriterLockSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL___C___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
