#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2F7C2AEE59AF1408_METHOD_1_80E870BF39CD474B_OFFSET UNITYSDK_OFFSET(0x16B31B40)

inline static constexpr unsigned int Class_1_2F7C2AEE59AF1408_TypeDefinitionIndex = 61004;

class Class_1_2F7C2AEE59AF1408 : public ::System::Object
{
public:
	static ::System::UInt32 Method_1_80E870BF39CD474B(::Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Config::CampType a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::MoleMole::Config::CampType a7)
	{
		return ((::System::UInt32(*)(::Class_1_2F7C2AEE59AF1408_Struct_2_CEA3583D515FCB73, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_2F7C2AEE59AF1408_METHOD_1_80E870BF39CD474B_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
