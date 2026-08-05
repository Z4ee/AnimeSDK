#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_820B58BBFDF43D0F_CLASS_1_B62A4C354BE80BDC_METHOD_1_2DE9F8AA012075ED_OFFSET UNITYSDK_OFFSET(0x113C3520)
#define CLASS_1_820B58BBFDF43D0F_CLASS_1_B62A4C354BE80BDC__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3510)

inline static constexpr unsigned int Class_1_820B58BBFDF43D0F_Class_1_B62A4C354BE80BDC_TypeDefinitionIndex = 58887;

class Class_1_820B58BBFDF43D0F_Class_1_B62A4C354BE80BDC : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_B62A4C354BE80BDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2DE9F8AA012075ED(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_B62A4C354BE80BDC_METHOD_1_2DE9F8AA012075ED_OFFSET))(this, a1);
	}
};
