#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_D37B76E3ED8B42AD_Enum_3_732139B67EFFA878.h"

class Class_3_D37B76E3ED8B42AD_Class_1_EF4EAE1782CBBC05;
namespace MoleMole { class MonoEffectPluginFade; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_D37B76E3ED8B42AD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16287610)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x16287780)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_1B609003A2DB539A_1_OFFSET UNITYSDK_OFFSET(0x16287140)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0x16286FA0)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_97C50ED8A59DEE93_OFFSET UNITYSDK_OFFSET(0x162872E0)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x162877C0)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x16287850)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_F9D8AF4B91BAC175_OFFSET UNITYSDK_OFFSET(0x16287460)
#define CLASS_3_D37B76E3ED8B42AD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16286A90)
#define CLASS_3_D37B76E3ED8B42AD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16286B50)
#define CLASS_3_D37B76E3ED8B42AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16287660)
#define CLASS_3_D37B76E3ED8B42AD__CTOR_OFFSET UNITYSDK_OFFSET(0x162876E0)

inline static constexpr unsigned int Class_3_D37B76E3ED8B42AD_TypeDefinitionIndex = 67018;

class Class_3_D37B76E3ED8B42AD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_15 = 0x65; // 0x0
	::UnityEngine::AnimationCurve* Field_3_9; // 0x48
	::System::Collections::Generic::List_1<::Class_3_D37B76E3ED8B42AD_Class_1_EF4EAE1782CBBC05*>* Field_3_2; // 0x50
	::MoleMole::MonoEffectPluginFade* Field_3_1; // 0x58
	::System::Single Field_3_10; // 0x60
	::System::Single Field_3_12; // 0x64
	::Class_3_D37B76E3ED8B42AD_Enum_3_732139B67EFFA878 Field_3_3; // 0x68
	::System::Single Field_3_4; // 0x6C
	::System::Single Field_3_11; // 0x70
	::System::Single Field_3_7; // 0x74
	::System::Boolean Field_3_6; // 0x78
	::System::Boolean Field_3_13; // 0x79
	::System::Boolean Field_3_5; // 0x7A
	::System::Boolean Field_3_14; // 0x7B
	::System::Single Field_3_8; // 0x7C
	::System::Boolean Field_3_0; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_GETCLASSID_OFFSET))(this);
	}

	::System::Single Method_3_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_1B609003A2DB539A_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_F9D8AF4B91BAC175()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_F9D8AF4B91BAC175_OFFSET))(this);
	}

	::System::Single Method_3_1B609003A2DB539A_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_1B609003A2DB539A_1_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_3_97C50ED8A59DEE93()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_97C50ED8A59DEE93_OFFSET))(this);
	}

	static ::Class_3_D37B76E3ED8B42AD* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_D37B76E3ED8B42AD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
