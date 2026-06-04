#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x136D4610)
#define CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x136D4600)
#define CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_4BD77904D7940E75_OFFSET UNITYSDK_OFFSET(0x136D4620)
#define CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_9B78111D754838CB_OFFSET UNITYSDK_OFFSET(0x136D4350)
#define CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_CCE3FB3DFB067CBB_OFFSET UNITYSDK_OFFSET(0x136D44B0)
#define CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A__CTOR_OFFSET UNITYSDK_OFFSET(0x136D41E0)

inline static constexpr unsigned int Class_1_BF4B5A5883D64888_Class_1_BC907A4E05DDB04A_TypeDefinitionIndex = 68221;

class Class_1_BF4B5A5883D64888_Class_1_BC907A4E05DDB04A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Object* Field_1_2; // 0x20
	::System::Object* Field_1_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_9B78111D754838CB(::XLua::LuaTable* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_9B78111D754838CB_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_1_CCE3FB3DFB067CBB()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_CCE3FB3DFB067CBB_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4BD77904D7940E75()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF4B5A5883D64888_CLASS_1_BC907A4E05DDB04A_METHOD_1_4BD77904D7940E75_OFFSET))(this);
	}
};
