#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace UnityEngine { class WaitForSeconds; }

#define CLASS_1_BB025225C3994645_METHOD_1_371729ADD214EBB1_OFFSET UNITYSDK_OFFSET(0x1EC1D4F0)
#define CLASS_1_BB025225C3994645_METHOD_1_BED2AA7381C1BF39_OFFSET UNITYSDK_OFFSET(0x1EC1D550)
#define CLASS_1_BB025225C3994645_METHOD_1_D153716A15D4D320_OFFSET UNITYSDK_OFFSET(0x1EC1D5B0)
#define CLASS_1_BB025225C3994645__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC1D940)

inline static constexpr unsigned int Class_1_BB025225C3994645_TypeDefinitionIndex = 35173;

class Class_1_BB025225C3994645 : public ::System::Object
{
public:
	static ::UnityEngine::WaitForEndOfFrame** StaticGet_GKKHJLLNIOJ()
	{
		return (::UnityEngine::WaitForEndOfFrame**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB025225C3994645_TypeDefinitionIndex)->GetStaticField(0x4B670);
	}
	static ::UnityEngine::WaitForFixedUpdate** StaticGet_KIONDMCELHN()
	{
		return (::UnityEngine::WaitForFixedUpdate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB025225C3994645_TypeDefinitionIndex)->GetStaticField(0x4B678);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>** StaticGet_HANKAANFAFF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB025225C3994645_TypeDefinitionIndex)->GetStaticField(0x4B680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB025225C3994645__CCTOR_OFFSET))();
	}

	static ::UnityEngine::WaitForEndOfFrame* Method_1_371729ADD214EBB1()
	{
		return ((::UnityEngine::WaitForEndOfFrame*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB025225C3994645_METHOD_1_371729ADD214EBB1_OFFSET))();
	}

	static ::UnityEngine::WaitForFixedUpdate* Method_1_BED2AA7381C1BF39()
	{
		return ((::UnityEngine::WaitForFixedUpdate*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB025225C3994645_METHOD_1_BED2AA7381C1BF39_OFFSET))();
	}

	static ::UnityEngine::WaitForSeconds* Method_1_D153716A15D4D320(::System::Single a1)
	{
		return ((::UnityEngine::WaitForSeconds*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BB025225C3994645_METHOD_1_D153716A15D4D320_OFFSET))(a1);
	}
};
