#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_7512195797754C1C_METHOD_1_18640901F2E32116_OFFSET UNITYSDK_OFFSET(0x153EE160)
#define CLASS_1_7512195797754C1C_METHOD_1_73EB93A9132E6D0F_OFFSET UNITYSDK_OFFSET(0x153EE9C0)
#define CLASS_1_7512195797754C1C_METHOD_1_87D2AD69B39C8631_OFFSET UNITYSDK_OFFSET(0x153EDBA0)
#define CLASS_1_7512195797754C1C_METHOD_1_EAB69954AF5F4501_OFFSET UNITYSDK_OFFSET(0x153EE2A0)

inline static constexpr unsigned int Class_1_7512195797754C1C_TypeDefinitionIndex = 45872;

class Class_1_7512195797754C1C : public ::System::Object
{
public:
	static ::System::Void Method_1_87D2AD69B39C8631(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Action_2<::System::String*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7512195797754C1C_METHOD_1_87D2AD69B39C8631_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_18640901F2E32116(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Action_2<::System::String*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7512195797754C1C_METHOD_1_18640901F2E32116_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_EAB69954AF5F4501(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Action_2<::System::String*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_7512195797754C1C_METHOD_1_EAB69954AF5F4501_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_73EB93A9132E6D0F(::UnityEngine::Material* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2, ::System::Action_2<::System::String*, ::System::Boolean>* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_7512195797754C1C_METHOD_1_73EB93A9132E6D0F_OFFSET))(a1, a2, a3, a4);
	}
};
