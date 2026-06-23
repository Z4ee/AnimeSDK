#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_29F61A604A7569ED;
class Class_3_2D3090DDF542616F_1_Class_4_5DF8B12165AB6A0E;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_BD23346BC0DB48DF_METHOD_1_1A4E0FFCF3F7E082_OFFSET UNITYSDK_OFFSET(0xE0479C0)
#define CLASS_1_BD23346BC0DB48DF_METHOD_1_292CB12EABB673CC_OFFSET UNITYSDK_OFFSET(0xE047810)
#define CLASS_1_BD23346BC0DB48DF_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0xE047940)
#define CLASS_1_BD23346BC0DB48DF_METHOD_1_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0xE047B40)
#define CLASS_1_BD23346BC0DB48DF__CTOR_OFFSET UNITYSDK_OFFSET(0xE047800)

inline static constexpr unsigned int Class_1_BD23346BC0DB48DF_TypeDefinitionIndex = 41673;

class Class_1_BD23346BC0DB48DF : public ::System::Object
{
public:
	::Class_3_2D3090DDF542616F_1_Class_4_5DF8B12165AB6A0E* Field_1_0; // 0x10
	::System::Action_1<::System::Int32>* Field_1_3; // 0x18
	::Class_2_29F61A604A7569ED* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD23346BC0DB48DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_292CB12EABB673CC(::Class_3_2D3090DDF542616F_1_Class_4_5DF8B12165AB6A0E* a1, ::System::Int32 a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2D3090DDF542616F_1_Class_4_5DF8B12165AB6A0E*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BD23346BC0DB48DF_METHOD_1_292CB12EABB673CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD23346BC0DB48DF_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_1_1A4E0FFCF3F7E082(::Class_2_29F61A604A7569ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_29F61A604A7569ED*))((::PBYTE)hIl2Cpp + CLASS_1_BD23346BC0DB48DF_METHOD_1_1A4E0FFCF3F7E082_OFFSET))(this, a1);
	}

	::System::Void Method_1_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD23346BC0DB48DF_METHOD_1_F773D945760BF918_OFFSET))(this, a1);
	}
};
