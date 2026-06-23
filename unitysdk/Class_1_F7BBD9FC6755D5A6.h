#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_F06B9578B38DE645.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_956C5F706DFDF849;
class Class_1_C2F125D07BC8601B;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_0F5E030CD9A6EC2D_OFFSET UNITYSDK_OFFSET(0x15DDE6F0)
#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_23BB893D7A413D7C_OFFSET UNITYSDK_OFFSET(0x15DDECD0)
#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_729069AEA15EC589_OFFSET UNITYSDK_OFFSET(0x15DDF330)
#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_8A103E0718E89B14_OFFSET UNITYSDK_OFFSET(0x15DDE1A0)
#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_AC4C6D9292B62721_OFFSET UNITYSDK_OFFSET(0x15DDE8A0)
#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15DDF1B0)
#define CLASS_1_F7BBD9FC6755D5A6_METHOD_1_F9AD5194EFCB7F40_OFFSET UNITYSDK_OFFSET(0x15DDF1F0)
#define CLASS_1_F7BBD9FC6755D5A6__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDF380)

inline static constexpr unsigned int Class_1_F7BBD9FC6755D5A6_TypeDefinitionIndex = 44873;

class Class_1_F7BBD9FC6755D5A6 : public ::System::Object
{
public:
	::Class_1_C2F125D07BC8601B* Field_1_0; // 0x10
	::System::Func_1<::UnityEngine::GameObject*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A103E0718E89B14(::Class_1_956C5F706DFDF849* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_956C5F706DFDF849*))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_8A103E0718E89B14_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F9AD5194EFCB7F40(::System::Collections::Generic::List_1<::Class_1_956C5F706DFDF849*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_956C5F706DFDF849*>*))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_F9AD5194EFCB7F40_OFFSET))(this, a1);
	}

	::System::Void Method_1_729069AEA15EC589(::System::Collections::Generic::List_1<::Struct_2_F06B9578B38DE645>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_F06B9578B38DE645>*))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_729069AEA15EC589_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC4C6D9292B62721(::MoleMole::Vector2Int a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_AC4C6D9292B62721_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_23BB893D7A413D7C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::RectTransform* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_23BB893D7A413D7C_OFFSET))(a1, a2, a3);
	}

	::MoleMole::Vector2Int Method_1_0F5E030CD9A6EC2D(::UnityEngine::Vector2 a1)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F7BBD9FC6755D5A6_METHOD_1_0F5E030CD9A6EC2D_OFFSET))(this, a1);
	}
};
