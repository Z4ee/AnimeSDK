#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_392;
class Class_1_2B230335ACE90696_Class_1_9927D381C10D59F2;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2B230335ACE90696_METHOD_1_0C3E9AD1DFEBE14B_OFFSET UNITYSDK_OFFSET(0x10938D30)
#define CLASS_1_2B230335ACE90696_METHOD_1_1D5D7B3A5D70C462_OFFSET UNITYSDK_OFFSET(0x10939820)
#define CLASS_1_2B230335ACE90696_METHOD_1_1F08FC45D05EFBB8_OFFSET UNITYSDK_OFFSET(0x10938A10)
#define CLASS_1_2B230335ACE90696_METHOD_1_224C763FF4E2C9A9_OFFSET UNITYSDK_OFFSET(0x10938EB0)
#define CLASS_1_2B230335ACE90696_METHOD_1_631A2B2A2EA98F62_OFFSET UNITYSDK_OFFSET(0x109381C0)
#define CLASS_1_2B230335ACE90696_METHOD_1_70738777F292CC2D_OFFSET UNITYSDK_OFFSET(0x10937F60)
#define CLASS_1_2B230335ACE90696_METHOD_1_E2384E5FBA966A8A_OFFSET UNITYSDK_OFFSET(0x10939490)
#define CLASS_1_2B230335ACE90696__CCTOR_OFFSET UNITYSDK_OFFSET(0x10937ED0)

inline static constexpr unsigned int Class_1_2B230335ACE90696_TypeDefinitionIndex = 78086;

class Class_1_2B230335ACE90696 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_2B230335ACE90696_Class_1_9927D381C10D59F2*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_2B230335ACE90696_Class_1_9927D381C10D59F2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B230335ACE90696_TypeDefinitionIndex)->GetStaticField(0x47DC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_70738777F292CC2D(::UnityEngine::RectTransform* a1, ::Class_0_16E4307DCC419505_392* a2, ::System::Action_1<::UnityEngine::Vector2>* a3)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::Class_0_16E4307DCC419505_392*, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_70738777F292CC2D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C3E9AD1DFEBE14B(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_0C3E9AD1DFEBE14B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E2384E5FBA966A8A(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_E2384E5FBA966A8A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_631A2B2A2EA98F62(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_631A2B2A2EA98F62_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_392* Method_1_224C763FF4E2C9A9(::UnityEngine::Vector2 a1)
	{
		return ((::Class_0_16E4307DCC419505_392*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_224C763FF4E2C9A9_OFFSET))(a1);
	}

	static ::System::Void Method_1_1D5D7B3A5D70C462(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_1D5D7B3A5D70C462_OFFSET))(a1);
	}

	static ::System::Void Method_1_1F08FC45D05EFBB8(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_METHOD_1_1F08FC45D05EFBB8_OFFSET))(a1);
	}
};
