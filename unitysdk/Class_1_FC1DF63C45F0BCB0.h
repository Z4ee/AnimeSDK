#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_0173189E339274E9_OFFSET UNITYSDK_OFFSET(0x1954BF80)
#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_4A0CDDD0EEEF7736_OFFSET UNITYSDK_OFFSET(0x1954B870)
#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_61F2A81BCF8C866E_OFFSET UNITYSDK_OFFSET(0x1954C020)
#define CLASS_1_FC1DF63C45F0BCB0_METHOD_1_6F44D0D9DAFB9009_OFFSET UNITYSDK_OFFSET(0x1954B300)

inline static constexpr unsigned int Class_1_FC1DF63C45F0BCB0_TypeDefinitionIndex = 73547;

class Class_1_FC1DF63C45F0BCB0 : public ::System::Object
{
public:
	static ::UnityEngine::MaterialPropertyBlock* Method_1_6F44D0D9DAFB9009(::UnityEngine::MaterialPropertyBlock* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1DF63C45F0BCB0_METHOD_1_6F44D0D9DAFB9009_OFFSET))(a1, a2);
	}

	static ::UnityEngine::MaterialPropertyBlock* Method_1_4A0CDDD0EEEF7736(::UnityEngine::MaterialPropertyBlock* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FC1DF63C45F0BCB0_METHOD_1_4A0CDDD0EEEF7736_OFFSET))(a1, a2);
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
