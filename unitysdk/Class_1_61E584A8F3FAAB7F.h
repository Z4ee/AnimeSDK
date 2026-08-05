#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_61E584A8F3FAAB7F_METHOD_1_2676DBEF6726F3F6_OFFSET UNITYSDK_OFFSET(0x1443E870)
#define CLASS_1_61E584A8F3FAAB7F_METHOD_1_A9D5F78980C6F925_OFFSET UNITYSDK_OFFSET(0x1443ED70)
#define CLASS_1_61E584A8F3FAAB7F_METHOD_1_E0779C33EECC5FC6_OFFSET UNITYSDK_OFFSET(0x1443E0F0)
#define CLASS_1_61E584A8F3FAAB7F_METHOD_1_EB7F5033CE7DD8CB_OFFSET UNITYSDK_OFFSET(0x1443E330)
#define CLASS_1_61E584A8F3FAAB7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1443E0E0)

inline static constexpr unsigned int Class_1_61E584A8F3FAAB7F_TypeDefinitionIndex = 42052;

class Class_1_61E584A8F3FAAB7F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61E584A8F3FAAB7F_TypeDefinitionIndex)->GetStaticField(0x47F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61E584A8F3FAAB7F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E0779C33EECC5FC6(::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_61E584A8F3FAAB7F_METHOD_1_E0779C33EECC5FC6_OFFSET))(a1);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> Method_1_EB7F5033CE7DD8CB(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_61E584A8F3FAAB7F_METHOD_1_EB7F5033CE7DD8CB_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> Method_1_2676DBEF6726F3F6(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_61E584A8F3FAAB7F_METHOD_1_2676DBEF6726F3F6_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> Method_1_A9D5F78980C6F925(::UnityEngine::RaycastHit a1)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_61E584A8F3FAAB7F_METHOD_1_A9D5F78980C6F925_OFFSET))(a1);
	}
};
