#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIAdaptState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class UIOperationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7A3194024C7D2DEC_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xB7D47F0)
#define CLASS_1_7A3194024C7D2DEC_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB7D46A0)
#define CLASS_1_7A3194024C7D2DEC_METHOD_1_51C3FB4A34742D14_OFFSET UNITYSDK_OFFSET(0xB7D4770)
#define CLASS_1_7A3194024C7D2DEC_METHOD_1_7F61852C82593578_OFFSET UNITYSDK_OFFSET(0xB7D3D10)
#define CLASS_1_7A3194024C7D2DEC_METHOD_1_9AD47D8DC12F1689_OFFSET UNITYSDK_OFFSET(0xB7D45A0)
#define CLASS_1_7A3194024C7D2DEC_METHOD_1_ED5A904E4131CCC7_OFFSET UNITYSDK_OFFSET(0xB7D4830)
#define CLASS_1_7A3194024C7D2DEC__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D4580)

inline static constexpr unsigned int Class_1_7A3194024C7D2DEC_TypeDefinitionIndex = 60080;

class Class_1_7A3194024C7D2DEC : public ::System::Object
{
public:
	::UnityEngine::RectTransform* IDCAKBLPFDD; // 0x10
	::UnityEngine::Transform* IEIJMJOAKNI; // 0x18
	::System::String* KOLMEDKMGND; // 0x20
	::RPG::Client::UIAdaptState INHEHPJBGBF; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* Method_1_7F61852C82593578(::RPG::GameCore::UIOperationConfig* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>*(*)(::RPG::GameCore::UIOperationConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC_METHOD_1_7F61852C82593578_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9AD47D8DC12F1689(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC_METHOD_1_9AD47D8DC12F1689_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_51C3FB4A34742D14(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC_METHOD_1_51C3FB4A34742D14_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_1_ED5A904E4131CCC7()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A3194024C7D2DEC_METHOD_1_ED5A904E4131CCC7_OFFSET))(this);
	}
};
