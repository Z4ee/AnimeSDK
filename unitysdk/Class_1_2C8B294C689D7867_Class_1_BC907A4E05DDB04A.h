#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_4BD77904D7940E75_OFFSET UNITYSDK_OFFSET(0x170440C0)
#define CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_9B78111D754838CB_OFFSET UNITYSDK_OFFSET(0x17043D90)
#define CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_CCE3FB3DFB067CBB_OFFSET UNITYSDK_OFFSET(0x17043EF0)
#define CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x17044080)
#define CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17044040)
#define CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A__CTOR_OFFSET UNITYSDK_OFFSET(0x17043C20)

inline static constexpr unsigned int Class_1_2C8B294C689D7867_Class_1_BC907A4E05DDB04A_TypeDefinitionIndex = 69710;

class Class_1_2C8B294C689D7867_Class_1_BC907A4E05DDB04A : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::UnityEngine::Object* Field_1_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_9B78111D754838CB(::XLua::LuaTable* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_9B78111D754838CB_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_1_CCE3FB3DFB067CBB()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_CCE3FB3DFB067CBB_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4BD77904D7940E75()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C8B294C689D7867_CLASS_1_BC907A4E05DDB04A_METHOD_1_4BD77904D7940E75_OFFSET))(this);
	}
};
