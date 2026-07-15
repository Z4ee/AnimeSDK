#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_ColorRampPointWrapper; }
namespace HoudiniEngineUnity { class HEU_FloatRampPointWrapper; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_BOOLVALUES_OFFSET UNITYSDK_OFFSET(0x10896B50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_COLORRAMPVALUES_OFFSET UNITYSDK_OFFSET(0x10896BF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_FLOATRAMPVALUES_OFFSET UNITYSDK_OFFSET(0x10896BD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_FLOATVALUES_OFFSET UNITYSDK_OFFSET(0x10896B90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_INTVALUES_OFFSET UNITYSDK_OFFSET(0x10896B70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_STRINGVALUES_OFFSET UNITYSDK_OFFSET(0x10896BB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_BOOLVALUES_OFFSET UNITYSDK_OFFSET(0x10896B60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_COLORRAMPVALUES_OFFSET UNITYSDK_OFFSET(0x10896C00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_FLOATRAMPVALUES_OFFSET UNITYSDK_OFFSET(0x10896BE0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_FLOATVALUES_OFFSET UNITYSDK_OFFSET(0x10896BA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_INTVALUES_OFFSET UNITYSDK_OFFSET(0x10896B80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_STRINGVALUES_OFFSET UNITYSDK_OFFSET(0x10896BC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10896C20)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x10896C30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x10896C40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x10896C50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x10896C60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x10896C70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x10896C10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterTupleWrapper_TypeDefinitionIndex = 38418;

	class HEU_ParameterTupleWrapper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _floatValues; // 0x10
		::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>* _floatRampValues; // 0x18
		::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>* _colorRampValues; // 0x20
		::Il2CppArray<::System::Boolean>* _boolValues; // 0x28
		::Il2CppArray<::System::String*>* _stringValues; // 0x30
		::Il2CppArray<::System::Int32>* _intValues; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_5_OFFSET))(this, a1);
		}

		::System::Void _ctor_6(::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER__CTOR_6_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Boolean>* get_BoolValues()
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_BOOLVALUES_OFFSET))(this);
		}

		::System::Void set_BoolValues(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_BOOLVALUES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_IntValues()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_INTVALUES_OFFSET))(this);
		}

		::System::Void set_IntValues(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_INTVALUES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_FloatValues()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_FLOATVALUES_OFFSET))(this);
		}

		::System::Void set_FloatValues(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_FLOATVALUES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_StringValues()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_STRINGVALUES_OFFSET))(this);
		}

		::System::Void set_StringValues(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_STRINGVALUES_OFFSET))(this, a1);
		}

		::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>* get_FloatRampValues()
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_FLOATRAMPVALUES_OFFSET))(this);
		}

		::System::Void set_FloatRampValues(::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HoudiniEngineUnity::HEU_FloatRampPointWrapper*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_FLOATRAMPVALUES_OFFSET))(this, a1);
		}

		::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>* get_ColorRampValues()
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_GET_COLORRAMPVALUES_OFFSET))(this);
		}

		::System::Void set_ColorRampValues(::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HoudiniEngineUnity::HEU_ColorRampPointWrapper*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERTUPLEWRAPPER_SET_COLORRAMPVALUES_OFFSET))(this, a1);
		}
	};
}
