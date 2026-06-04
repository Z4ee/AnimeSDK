#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace UnityEngine { class WaitForSeconds; }

#define CLASS_1_58AB672D12125432_METHOD_1_4606BE0B929240DE_OFFSET UNITYSDK_OFFSET(0x1AC03B60)
#define CLASS_1_58AB672D12125432_METHOD_1_D445EB0D4A48B246_OFFSET UNITYSDK_OFFSET(0x1AC03B00)
#define CLASS_1_58AB672D12125432_METHOD_1_DF8EB249A74DFDAE_OFFSET UNITYSDK_OFFSET(0x1AC03B30)
#define CLASS_1_58AB672D12125432__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC03CB0)

inline static constexpr unsigned int Class_1_58AB672D12125432_TypeDefinitionIndex = 33373;

class Class_1_58AB672D12125432 : public ::System::Object
{
public:
	static ::UnityEngine::WaitForEndOfFrame** StaticGet_Field_1_0()
	{
		return (::UnityEngine::WaitForEndOfFrame**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58AB672D12125432_TypeDefinitionIndex)->GetStaticField(0x5C60);
	}
	static ::UnityEngine::WaitForFixedUpdate** StaticGet_Field_1_1()
	{
		return (::UnityEngine::WaitForFixedUpdate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58AB672D12125432_TypeDefinitionIndex)->GetStaticField(0x5C68);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58AB672D12125432_TypeDefinitionIndex)->GetStaticField(0x5C70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58AB672D12125432__CCTOR_OFFSET))();
	}

	static ::UnityEngine::WaitForEndOfFrame* Method_1_D445EB0D4A48B246()
	{
		return ((::UnityEngine::WaitForEndOfFrame*(*)())((::PBYTE)hIl2Cpp + CLASS_1_58AB672D12125432_METHOD_1_D445EB0D4A48B246_OFFSET))();
	}

	static ::UnityEngine::WaitForFixedUpdate* Method_1_DF8EB249A74DFDAE()
	{
		return ((::UnityEngine::WaitForFixedUpdate*(*)())((::PBYTE)hIl2Cpp + CLASS_1_58AB672D12125432_METHOD_1_DF8EB249A74DFDAE_OFFSET))();
	}

	static ::UnityEngine::WaitForSeconds* Method_1_4606BE0B929240DE(::System::Single a1)
	{
		return ((::UnityEngine::WaitForSeconds*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_58AB672D12125432_METHOD_1_4606BE0B929240DE_OFFSET))(a1);
	}
};
