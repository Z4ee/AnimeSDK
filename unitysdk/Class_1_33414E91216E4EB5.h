#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIAdaptState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class UIOperationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_33414E91216E4EB5_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x195AB2F0)
#define CLASS_1_33414E91216E4EB5_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x195AB1A0)
#define CLASS_1_33414E91216E4EB5_METHOD_1_51C3FB4A34742D14_OFFSET UNITYSDK_OFFSET(0x195AB270)
#define CLASS_1_33414E91216E4EB5_METHOD_1_62C9379C46EB4968_OFFSET UNITYSDK_OFFSET(0x195AA7E0)
#define CLASS_1_33414E91216E4EB5_METHOD_1_9AD47D8DC12F1689_OFFSET UNITYSDK_OFFSET(0x195AB0A0)
#define CLASS_1_33414E91216E4EB5_METHOD_1_C30903FF0306013E_OFFSET UNITYSDK_OFFSET(0x195AB330)
#define CLASS_1_33414E91216E4EB5__CTOR_OFFSET UNITYSDK_OFFSET(0x195AB080)

inline static constexpr unsigned int Class_1_33414E91216E4EB5_TypeDefinitionIndex = 60217;

class Class_1_33414E91216E4EB5 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* IDCAKBLPFDD; // 0x10
	::UnityEngine::Transform* IEIJMJOAKNI; // 0x18
	::System::String* KOLMEDKMGND; // 0x20
	::RPG::Client::UIAdaptState INHEHPJBGBF; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_33414E91216E4EB5*>* Method_1_62C9379C46EB4968(::RPG::GameCore::UIOperationConfig* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_33414E91216E4EB5*>*(*)(::RPG::GameCore::UIOperationConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5_METHOD_1_62C9379C46EB4968_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9AD47D8DC12F1689(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5_METHOD_1_9AD47D8DC12F1689_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_51C3FB4A34742D14(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5_METHOD_1_51C3FB4A34742D14_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_1_C30903FF0306013E()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33414E91216E4EB5_METHOD_1_C30903FF0306013E_OFFSET))(this);
	}
};
