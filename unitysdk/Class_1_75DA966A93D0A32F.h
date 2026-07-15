#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWWForm; }

#define CLASS_1_75DA966A93D0A32F_METHOD_1_AA0975AFEAFEB7BD_OFFSET UNITYSDK_OFFSET(0x15E40FD0)
#define CLASS_1_75DA966A93D0A32F_METHOD_1_AB8B7A47BCEBDD3D_OFFSET UNITYSDK_OFFSET(0x15E40EE0)
#define CLASS_1_75DA966A93D0A32F_METHOD_1_C05A787EEC7097DD_OFFSET UNITYSDK_OFFSET(0x15E41130)

inline static constexpr unsigned int Class_1_75DA966A93D0A32F_TypeDefinitionIndex = 47811;

class Class_1_75DA966A93D0A32F : public ::System::Object
{
public:
	static ::System::Collections::IEnumerator* Method_1_AB8B7A47BCEBDD3D(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::System::Action* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_75DA966A93D0A32F_METHOD_1_AB8B7A47BCEBDD3D_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::UnityEngine::WWWForm* Method_1_AA0975AFEAFEB7BD(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::UnityEngine::WWWForm*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_75DA966A93D0A32F_METHOD_1_AA0975AFEAFEB7BD_OFFSET))(a1);
	}

	static ::System::String* Method_1_C05A787EEC7097DD(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75DA966A93D0A32F_METHOD_1_C05A787EEC7097DD_OFFSET))(a1);
	}
};
