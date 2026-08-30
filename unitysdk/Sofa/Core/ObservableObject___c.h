#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define SOFA_CORE_OBSERVABLEOBJECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8D80)
#define SOFA_CORE_OBSERVABLEOBJECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8DC0)
#define SOFA_CORE_OBSERVABLEOBJECT___C___GETPROPERTYCHANGEDEVENTARGS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1E5C8DD0)

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableObject___c_TypeDefinitionIndex = 42425;

	class ObservableObject___c : public ::System::Object
	{
	public:
		static ::Sofa::Core::ObservableObject___c** StaticGet___9()
		{
			return (::Sofa::Core::ObservableObject___c**)Il2CppClass::FromTypeDefinitionIndex(ObservableObject___c_TypeDefinitionIndex)->GetStaticField(0x54BC0);
		}
		static ::System::Func_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(ObservableObject___c_TypeDefinitionIndex)->GetStaticField(0x54BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT___C__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::PropertyChangedEventArgs* __GetPropertyChangedEventArgs_b__5_0(::System::String* a1)
		{
			return ((::System::ComponentModel::PropertyChangedEventArgs*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT___C___GETPROPERTYCHANGEDEVENTARGS_B__5_0_OFFSET))(this, a1);
		}
	};
}
