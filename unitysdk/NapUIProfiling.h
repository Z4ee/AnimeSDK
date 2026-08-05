#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapUIProfiling_UIFuncionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPUIPROFILING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC43B70)

inline static constexpr unsigned int NapUIProfiling_TypeDefinitionIndex = 19182;

class NapUIProfiling : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::NapUIProfiling_UIFuncionType, ::System::String*>** StaticGet_TypeToStringMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::NapUIProfiling_UIFuncionType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x87A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapUIProfiling_UIFuncionType>** StaticGet_StringToTypeMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::NapUIProfiling_UIFuncionType>**)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x87A8);
	}
	static ::System::Boolean* StaticGet_EnableUIProfile()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x42D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPUIPROFILING__CCTOR_OFFSET))();
	}
};
