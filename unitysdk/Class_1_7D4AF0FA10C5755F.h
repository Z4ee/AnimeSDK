#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sofa { class BaseSofaControl; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_12278013BD932743_OFFSET UNITYSDK_OFFSET(0x15BA7350)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_148053C181D47060_OFFSET UNITYSDK_OFFSET(0x15BA6D60)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_27BB44271C271C71_OFFSET UNITYSDK_OFFSET(0x15BA6B80)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_30CCCBB74BD3C6D6_OFFSET UNITYSDK_OFFSET(0x15BA6FB0)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_3D6034C88CF99530_OFFSET UNITYSDK_OFFSET(0x15BA7270)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_AD9311E7182736A2_OFFSET UNITYSDK_OFFSET(0x15BA7190)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_D8A23DF0BE910080_OFFSET UNITYSDK_OFFSET(0x15BA69A0)
#define CLASS_1_7D4AF0FA10C5755F_METHOD_1_F6E2F1352AE1721D_OFFSET UNITYSDK_OFFSET(0x15BA70A0)

inline static constexpr unsigned int Class_1_7D4AF0FA10C5755F_TypeDefinitionIndex = 50346;

class Class_1_7D4AF0FA10C5755F : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* Method_1_D8A23DF0BE910080(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* a1, ::System::Type* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_D8A23DF0BE910080_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_27BB44271C271C71(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* a1, ::System::Type* a2)
	{
		return ((::UnityEngine::Transform*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_27BB44271C271C71_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_148053C181D47060(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* a1, ::System::Type* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_148053C181D47060_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_30CCCBB74BD3C6D6(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* a1, ::System::Type* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_30CCCBB74BD3C6D6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_F6E2F1352AE1721D(::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>* a1, ::System::Type* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::Sofa::BaseSofaControl*>*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_F6E2F1352AE1721D_OFFSET))(a1, a2);
	}

	static ::Sofa::BaseSofaControl* Method_1_AD9311E7182736A2(::UnityEngine::GameObject* a1)
	{
		return ((::Sofa::BaseSofaControl*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_AD9311E7182736A2_OFFSET))(a1);
	}

	static ::Sofa::BaseSofaControl* Method_1_3D6034C88CF99530(::UnityEngine::Transform* a1)
	{
		return ((::Sofa::BaseSofaControl*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_3D6034C88CF99530_OFFSET))(a1);
	}

	static ::Sofa::BaseSofaControl* Method_1_12278013BD932743(::Sofa::BaseSofaControl* a1)
	{
		return ((::Sofa::BaseSofaControl*(*)(::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + CLASS_1_7D4AF0FA10C5755F_METHOD_1_12278013BD932743_OFFSET))(a1);
	}
};
