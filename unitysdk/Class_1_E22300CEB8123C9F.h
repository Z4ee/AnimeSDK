#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define CLASS_1_E22300CEB8123C9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6FA5D0)
#define CLASS_1_E22300CEB8123C9F_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1F6FA660)
#define CLASS_1_E22300CEB8123C9F_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1F6FA680)
#define CLASS_1_E22300CEB8123C9F_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1F6FA670)
#define CLASS_1_E22300CEB8123C9F_METHOD_1_070B990E94814D95_OFFSET UNITYSDK_OFFSET(0x1F6FABF0)
#define CLASS_1_E22300CEB8123C9F_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1F6FAD80)
#define CLASS_1_E22300CEB8123C9F_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x1F6FAD90)
#define CLASS_1_E22300CEB8123C9F_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1F6FAD70)
#define CLASS_1_E22300CEB8123C9F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1F6FABD0)
#define CLASS_1_E22300CEB8123C9F_SET_OFFSET UNITYSDK_OFFSET(0x1F6FA900)
#define CLASS_1_E22300CEB8123C9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FABE0)

inline static constexpr unsigned int Class_1_E22300CEB8123C9F_TypeDefinitionIndex = 93391;

class Class_1_E22300CEB8123C9F : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_2; // 0x10
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Field_1_1; // 0x18
	::System::Int32 Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_DISPOSE_OFFSET))(this);
	}

	::System::Int32 get_Layer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_GET_LAYER_OFFSET))(this);
	}

	::System::Int32 get_SubLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_GET_SUBLAYER_OFFSET))(this);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_GET_ORDER_OFFSET))(this);
	}

	::System::Void Set(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_SET_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::Class_1_E22300CEB8123C9F* Method_1_070B990E94814D95(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Renderer* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::Class_1_E22300CEB8123C9F*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_METHOD_1_070B990E94814D95_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E22300CEB8123C9F_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}
};
