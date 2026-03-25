#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1BD9A352EF1010C8_METHOD_1_1676349FAEF4B05E_OFFSET UNITYSDK_OFFSET(0xEA72D10)
#define CLASS_1_1BD9A352EF1010C8_METHOD_1_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0xEA72BA0)
#define CLASS_1_1BD9A352EF1010C8_METHOD_1_44F9910045CC7F00_1_OFFSET UNITYSDK_OFFSET(0xEA73410)
#define CLASS_1_1BD9A352EF1010C8_METHOD_1_44F9910045CC7F00_OFFSET UNITYSDK_OFFSET(0xEA732A0)
#define CLASS_1_1BD9A352EF1010C8_METHOD_1_6E8E77E17A6ED590_OFFSET UNITYSDK_OFFSET(0xEA72B90)
#define CLASS_1_1BD9A352EF1010C8_METHOD_1_D977885A5D1123E0_OFFSET UNITYSDK_OFFSET(0xEA72BB0)
#define CLASS_1_1BD9A352EF1010C8__CTOR_OFFSET UNITYSDK_OFFSET(0xEA73580)

inline static constexpr unsigned int Class_1_1BD9A352EF1010C8_TypeDefinitionIndex = 60872;

class Class_1_1BD9A352EF1010C8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8__CTOR_OFFSET))(this);
	}

	::UnityEngine::Renderer* Method_1_6E8E77E17A6ED590()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8_METHOD_1_6E8E77E17A6ED590_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_1_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8_METHOD_1_3CAC93BF77250DAD_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_D977885A5D1123E0(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8_METHOD_1_D977885A5D1123E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1676349FAEF4B05E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8_METHOD_1_1676349FAEF4B05E_OFFSET))(this);
	}

	static ::System::Single Method_1_44F9910045CC7F00()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8_METHOD_1_44F9910045CC7F00_OFFSET))();
	}

	static ::System::Single Method_1_44F9910045CC7F00_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_1BD9A352EF1010C8_METHOD_1_44F9910045CC7F00_1_OFFSET))();
	}
};
