#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14BF1B11C879825B;
class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_CLEAR_OFFSET UNITYSDK_OFFSET(0x99F72D0)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_GET_DEBUGASSETPATH_OFFSET UNITYSDK_OFFSET(0x99F7270)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_METHOD_1_900CEFDE05C45AED_OFFSET UNITYSDK_OFFSET(0x99F64A0)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_METHOD_1_E44CA866AE06B49B_OFFSET UNITYSDK_OFFSET(0x99F7340)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_METHOD_1_EC68DA824B46007C_OFFSET UNITYSDK_OFFSET(0x99F6410)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_SET_DEBUGASSETPATH_OFFSET UNITYSDK_OFFSET(0x99F7280)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56__CCTOR_OFFSET UNITYSDK_OFFSET(0x99F7B70)
#define CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56__CTOR_OFFSET UNITYSDK_OFFSET(0x99F7290)

inline static constexpr unsigned int Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56_TypeDefinitionIndex = 67881;

class Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_9()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56_TypeDefinitionIndex)->GetStaticField(0x14ED0);
	}
	::Class_1_303D5A33D1401D59* Field_1_1; // 0x10
	::System::String* _debugAssetPath_k__BackingField; // 0x18
	::System::Action* Field_1_3; // 0x20
	::Class_1_14BF1B11C879825B* Field_1_4; // 0x28
	::System::Action_1<::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*>* Field_1_8; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::System::Int32 Field_1_2; // 0x40
	::System::UInt32 Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56__CCTOR_OFFSET))();
	}

	::System::String* get_debugAssetPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_GET_DEBUGASSETPATH_OFFSET))(this);
	}

	::System::Void set_debugAssetPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_SET_DEBUGASSETPATH_OFFSET))(this, value);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EC68DA824B46007C(::System::String* a1, ::Class_1_303D5A33D1401D59* a2, ::System::Int32 a3, ::Class_1_14BF1B11C879825B* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_303D5A33D1401D59*, ::System::Int32, ::Class_1_14BF1B11C879825B*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_METHOD_1_EC68DA824B46007C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_900CEFDE05C45AED(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_METHOD_1_900CEFDE05C45AED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E44CA866AE06B49B(::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_CLASS_1_3E418D18F3879C56_METHOD_1_E44CA866AE06B49B_OFFSET))(this, a1);
	}
};
