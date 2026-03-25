#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace UnityEngine { class WaitForSeconds; }

#define CLASS_1_ABCBA089712699AA_METHOD_1_D445EB0D4A48B246_OFFSET UNITYSDK_OFFSET(0x183159B0)
#define CLASS_1_ABCBA089712699AA_METHOD_1_DF8EB249A74DFDAE_OFFSET UNITYSDK_OFFSET(0x183159E0)
#define CLASS_1_ABCBA089712699AA_METHOD_1_FA7EC0D9A8DFB2E9_OFFSET UNITYSDK_OFFSET(0x18315A10)
#define CLASS_1_ABCBA089712699AA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18315B90)

inline static constexpr unsigned int Class_1_ABCBA089712699AA_TypeDefinitionIndex = 9406;

class Class_1_ABCBA089712699AA : public ::System::Object
{
public:
	static ::UnityEngine::WaitForFixedUpdate** StaticGet_Field_1_2()
	{
		return (::UnityEngine::WaitForFixedUpdate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABCBA089712699AA_TypeDefinitionIndex)->GetStaticField(0x143A0);
	}
	static ::UnityEngine::WaitForEndOfFrame** StaticGet_Field_1_1()
	{
		return (::UnityEngine::WaitForEndOfFrame**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABCBA089712699AA_TypeDefinitionIndex)->GetStaticField(0x143A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABCBA089712699AA_TypeDefinitionIndex)->GetStaticField(0x143B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABCBA089712699AA__CCTOR_OFFSET))();
	}

	static ::UnityEngine::WaitForEndOfFrame* Method_1_D445EB0D4A48B246()
	{
		return ((::UnityEngine::WaitForEndOfFrame*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABCBA089712699AA_METHOD_1_D445EB0D4A48B246_OFFSET))();
	}

	static ::UnityEngine::WaitForFixedUpdate* Method_1_DF8EB249A74DFDAE()
	{
		return ((::UnityEngine::WaitForFixedUpdate*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABCBA089712699AA_METHOD_1_DF8EB249A74DFDAE_OFFSET))();
	}

	static ::UnityEngine::WaitForSeconds* Method_1_FA7EC0D9A8DFB2E9(::System::Single a1)
	{
		return ((::UnityEngine::WaitForSeconds*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ABCBA089712699AA_METHOD_1_FA7EC0D9A8DFB2E9_OFFSET))(a1);
	}
};
