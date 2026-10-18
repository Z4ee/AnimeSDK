#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define R3_DISPOSABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F50F0)

namespace R3
{
	inline static constexpr unsigned int Disposable_TypeDefinitionIndex = 35903;

	class Disposable : public ::System::Object
	{
	public:
		static ::System::IDisposable** StaticGet_Empty()
		{
			return (::System::IDisposable**)Il2CppClass::FromTypeDefinitionIndex(Disposable_TypeDefinitionIndex)->GetStaticField(0x9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_DISPOSABLE__CCTOR_OFFSET))();
		}
	};
}
