#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF85135934DD45B5;
class Class_1_E3019CE6003C7D3C;
class Class_2_44CAFB3A09178D38_7;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_97AD8E82C04AAAA2_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x12817AB0)
#define CLASS_1_97AD8E82C04AAAA2_METHOD_1_50952DBE0A527AC0_OFFSET UNITYSDK_OFFSET(0x12817E20)
#define CLASS_1_97AD8E82C04AAAA2_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x12818020)
#define CLASS_1_97AD8E82C04AAAA2_METHOD_1_8A9FE2F9276C95BF_OFFSET UNITYSDK_OFFSET(0x12817C00)
#define CLASS_1_97AD8E82C04AAAA2_METHOD_1_ECE15E241E57B871_OFFSET UNITYSDK_OFFSET(0x12817AC0)
#define CLASS_1_97AD8E82C04AAAA2__CTOR_OFFSET UNITYSDK_OFFSET(0x12817AA0)

inline static constexpr unsigned int Class_1_97AD8E82C04AAAA2_TypeDefinitionIndex = 89942;

class Class_1_97AD8E82C04AAAA2 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_3; // 0x0
	::Class_2_44CAFB3A09178D38_7* Field_1_0; // 0x10
	::Class_1_E3019CE6003C7D3C* Field_1_1; // 0x18
	::Class_1_BF85135934DD45B5* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2__CTOR_OFFSET))(this);
	}

	::Class_2_44CAFB3A09178D38_7* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_44CAFB3A09178D38_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_ECE15E241E57B871(::UnityEngine::RenderTexture* a1, ::System::String* a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_METHOD_1_ECE15E241E57B871_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_58BA0C8308C8127F(::Class_2_44CAFB3A09178D38_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_44CAFB3A09178D38_7*))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_METHOD_1_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A9FE2F9276C95BF(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_METHOD_1_8A9FE2F9276C95BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_50952DBE0A527AC0(::System::String* a1, ::Class_1_E3019CE6003C7D3C*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_E3019CE6003C7D3C*&))((::PBYTE)hIl2Cpp + CLASS_1_97AD8E82C04AAAA2_METHOD_1_50952DBE0A527AC0_OFFSET))(this, a1, a2);
	}
};
