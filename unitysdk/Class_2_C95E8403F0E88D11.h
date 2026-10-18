#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_C95E8403F0E88D11_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBC81E50)
#define CLASS_2_C95E8403F0E88D11_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBC81E70)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBC81EB0)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBC82130)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xBC82020)
#define CLASS_2_C95E8403F0E88D11_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBC81E60)
#define CLASS_2_C95E8403F0E88D11__CTOR_OFFSET UNITYSDK_OFFSET(0xBC821D0)
#define CLASS_2_C95E8403F0E88D11__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC81DF0)

inline static constexpr unsigned int Class_2_C95E8403F0E88D11_TypeDefinitionIndex = 71395;

class Class_2_C95E8403F0E88D11 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* IHFPNCMKNMA; // 0x0
	::UnityEngine::UI::Button* KJIOINOOIHP; // 0x60
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x68
	::System::Int32 _Index_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
