#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapUIProfiling_UIFuncionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define NAPUIPROFILING_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x1E862840)
#define NAPUIPROFILING_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x1E8628D0)
#define NAPUIPROFILING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E862940)

inline static constexpr unsigned int NapUIProfiling_TypeDefinitionIndex = 18842;

class NapUIProfiling : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::NapUIProfiling_UIFuncionType, ::System::String*>** StaticGet_TypeToStringMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::NapUIProfiling_UIFuncionType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x8850);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapUIProfiling_UIFuncionType>** StaticGet_StringToTypeMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::NapUIProfiling_UIFuncionType>**)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x8858);
	}
	static ::System::Boolean* StaticGet_EnableUIProfile()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x43C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPUIPROFILING__CCTOR_OFFSET))();
	}

	static ::System::Void BeginSample(::NapUIProfiling_UIFuncionType type, ::UnityEngine::Transform* uiTransform)
	{
		return ((::System::Void(*)(::NapUIProfiling_UIFuncionType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAPUIPROFILING_BEGINSAMPLE_OFFSET))(type, uiTransform);
	}

	static ::System::Void EndSample()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPUIPROFILING_ENDSAMPLE_OFFSET))();
	}
};
