#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_0173189E339274E9_OFFSET UNITYSDK_OFFSET(0x11707000)
#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_61F2A81BCF8C866E_OFFSET UNITYSDK_OFFSET(0x117070A0)
#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_8A3D42EEF2D4E6D1_OFFSET UNITYSDK_OFFSET(0x11706450)
#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_D211D90D8D7EA641_OFFSET UNITYSDK_OFFSET(0x11706A00)

inline static constexpr unsigned int Class_1_FC1DF63C45F0BCB0_TypeDefinitionIndex = 60371;

class Class_1_FC1DF63C45F0BCB0 : public ::System::Object
{
public:
	static ::UnityEngine::MaterialPropertyBlock* Method_1_8A3D42EEF2D4E6D1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1DF63C45F0BCB0_METHOD_1_8A3D42EEF2D4E6D1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::MaterialPropertyBlock* Method_1_D211D90D8D7EA641(::UnityEngine::MaterialPropertyBlock* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1DF63C45F0BCB0_METHOD_1_D211D90D8D7EA641_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0173189E339274E9(::UnityEngine::Renderer* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1DF63C45F0BCB0_METHOD_1_0173189E339274E9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_61F2A81BCF8C866E(::UnityEngine::Renderer* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1DF63C45F0BCB0_METHOD_1_61F2A81BCF8C866E_OFFSET))(a1, a2);
	}
};
