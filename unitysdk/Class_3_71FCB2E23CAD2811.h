#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_15F6D227B10AC18A.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_71FCB2E23CAD2811_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB511290)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_45030DA3EF3AEF01_OFFSET UNITYSDK_OFFSET(0xB511190)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xB510960)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xB510BF0)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB511200)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB510900)
#define CLASS_3_71FCB2E23CAD2811_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB511080)
#define CLASS_3_71FCB2E23CAD2811__CTOR_OFFSET UNITYSDK_OFFSET(0xB5108B0)

inline static constexpr unsigned int Class_3_71FCB2E23CAD2811_TypeDefinitionIndex = 70639;

class Class_3_71FCB2E23CAD2811 : public ::Class_2_15F6D227B10AC18A
{
public:
	::System::String* Field_3_2; // 0x50
	::UnityEngine::Transform* Field_3_5; // 0x58
	::Class_3_DFD5D1FDB9D2A4AC* Field_3_4; // 0x60
	::MoleMole::Battle::Entity* Field_3_3; // 0x68
	::UnityEngine::Vector3 Field_3_1; // 0x70
	::UnityEngine::Vector4 Field_3_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_3_45030DA3EF3AEF01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_45030DA3EF3AEF01_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_3_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71FCB2E23CAD2811_METHOD_3_937F8473216A3162_OFFSET))(this);
	}
};
