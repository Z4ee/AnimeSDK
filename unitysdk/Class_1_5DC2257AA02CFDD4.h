#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_006F4D5C221D8114_OFFSET UNITYSDK_OFFSET(0x89723D0)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_00DD04A858E595E0_1_OFFSET UNITYSDK_OFFSET(0x89724D0)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_00DD04A858E595E0_2_OFFSET UNITYSDK_OFFSET(0x8972540)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_00DD04A858E595E0_OFFSET UNITYSDK_OFFSET(0x8972450)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_59927E845A83721D_OFFSET UNITYSDK_OFFSET(0x8972370)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_5EAAB7D28BDBDA36_OFFSET UNITYSDK_OFFSET(0x8972A60)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_8DFEC2596574785D_OFFSET UNITYSDK_OFFSET(0x89725B0)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_B9E794E4B4438670_OFFSET UNITYSDK_OFFSET(0x8973430)
#define CLASS_1_5DC2257AA02CFDD4_METHOD_1_DAEC529A91997CF3_OFFSET UNITYSDK_OFFSET(0x8972E80)
#define CLASS_1_5DC2257AA02CFDD4__CCTOR_OFFSET UNITYSDK_OFFSET(0x8973820)

inline static constexpr unsigned int Class_1_5DC2257AA02CFDD4_TypeDefinitionIndex = 60370;

class Class_1_5DC2257AA02CFDD4 : public ::System::Object
{
public:
	static ::UnityEngine::Bounds* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5DC2257AA02CFDD4_TypeDefinitionIndex)->GetStaticField(0x10F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_59927E845A83721D(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_59927E845A83721D_OFFSET))(a1);
	}

	static ::System::Void Method_1_006F4D5C221D8114(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_006F4D5C221D8114_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector4 Method_1_00DD04A858E595E0(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_00DD04A858E595E0_OFFSET))(a1);
	}

	static ::UnityEngine::Vector4 Method_1_00DD04A858E595E0_1(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_00DD04A858E595E0_1_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_00DD04A858E595E0_2(::UnityEngine::Vector4 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_00DD04A858E595E0_2_OFFSET))(a1);
	}

	static ::RPG::Client::TAUtils::SimpleTransform Method_1_8DFEC2596574785D(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::TAUtils::SimpleTransform(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_8DFEC2596574785D_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::TAUtils::QuaternionTransform Method_1_5EAAB7D28BDBDA36(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_5EAAB7D28BDBDA36_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Bounds Method_1_DAEC529A91997CF3(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* a1)
	{
		return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_DAEC529A91997CF3_OFFSET))(a1);
	}

	static ::System::Void Method_1_B9E794E4B4438670(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* a1, ::System::Boolean a2, ::UnityEngine::Bounds a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_5DC2257AA02CFDD4_METHOD_1_B9E794E4B4438670_OFFSET))(a1, a2, a3);
	}
};
