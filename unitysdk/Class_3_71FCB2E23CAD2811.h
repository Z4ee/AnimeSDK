#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_15F6D227B10AC18A.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_71FCB2E23CAD2811_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15470CA0)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x15470BC0)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x15470440)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15470B30)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x154706D0)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15470380)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15470D40)
#define CLASS_3_71FCB2E23CAD2811__CTOR_OFFSET UNITYSDK_OFFSET(0x15470330)

inline static constexpr unsigned int Class_3_71FCB2E23CAD2811_TypeDefinitionIndex = 42625;

class Class_3_71FCB2E23CAD2811 : public ::Class_2_15F6D227B10AC18A
{
public:
	::MoleMole::Battle::Entity* Field_3_5; // 0x50
	::System::String* Field_3_6; // 0x58
	::UnityEngine::Transform* Field_3_11; // 0x60
	::Class_3_C93CC3D2C2AC4067* Field_3_4; // 0x68
	::UnityEngine::Vector3 Field_3_7; // 0x70
	::UnityEngine::Vector4 Field_3_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_937F8473216A3162_OFFSET))(this);
	}

	::System::Boolean Method_3_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_97285E397E8F5091_OFFSET))(this);
	}
};
