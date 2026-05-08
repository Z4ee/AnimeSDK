#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocator_FormatterInfo.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocator_FormatterLocatorInfo.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C34AD40)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C34AD80)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C34AD90)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C___CCTOR_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C34AE50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterLocator___c_TypeDefinitionIndex = 7305;

	class FormatterLocator___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::FormatterLocator___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::FormatterLocator___c**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator___c_TypeDefinitionIndex)->GetStaticField(0x6050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__8_0(::Sirenix::Serialization::FormatterLocator_FormatterInfo a, ::Sirenix::Serialization::FormatterLocator_FormatterInfo b)
		{
			return ((::System::Int32(*)(::PVOID, ::Sirenix::Serialization::FormatterLocator_FormatterInfo, ::Sirenix::Serialization::FormatterLocator_FormatterInfo))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C___CCTOR_B__8_0_OFFSET))(this, a, b);
		}

		::System::Int32 __cctor_b__8_1(::Sirenix::Serialization::FormatterLocator_FormatterLocatorInfo a, ::Sirenix::Serialization::FormatterLocator_FormatterLocatorInfo b)
		{
			return ((::System::Int32(*)(::PVOID, ::Sirenix::Serialization::FormatterLocator_FormatterLocatorInfo, ::Sirenix::Serialization::FormatterLocator_FormatterLocatorInfo))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR___C___CCTOR_B__8_1_OFFSET))(this, a, b);
		}
	};
}
