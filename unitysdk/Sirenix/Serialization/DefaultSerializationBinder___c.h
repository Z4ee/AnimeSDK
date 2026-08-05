#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AssemblyLoadEventArgs; }

#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB97C50)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB97C90)
#define SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER___C___CCTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1FB97CA0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder___c_TypeDefinitionIndex = 7505;

	class DefaultSerializationBinder___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::DefaultSerializationBinder___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::DefaultSerializationBinder___c**)Il2CppClass::FromTypeDefinitionIndex(DefaultSerializationBinder___c_TypeDefinitionIndex)->GetStaticField(0x6250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__12_0(::System::Object* sender, ::System::AssemblyLoadEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::AssemblyLoadEventArgs*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTSERIALIZATIONBINDER___C___CCTOR_B__12_0_OFFSET))(this, sender, args);
		}
	};
}
