#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A8148841049062A;
namespace UnityEngine { class Transform; }

#define CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C389D50)

inline static constexpr unsigned int Class_1_7F2D8932FAEE066D_TypeDefinitionIndex = 41581;

class Class_1_7F2D8932FAEE066D : public ::System::Object
{
public:
	::UnityEngine::Transform* KIKINILBIEL; // 0x10
	::Class_2_1A8148841049062A* LCINDEDLCLG; // 0x18
	::System::Single BKHMKLCPCDA; // 0x20
	::UnityEngine::Vector3 IKINMNCCKJI; // 0x24
	::UnityEngine::Vector2 DEOGFKAHBGP; // 0x30
	::System::Single CHBNGJFHAJM; // 0x38
	::System::Boolean OHKNGBNEFAG; // 0x3C
	::System::Boolean EBCCMIMNJIG; // 0x3D
	::System::Boolean BIMHNCPPFFK; // 0x3E
	::System::Single JIPONFOAAPH; // 0x40
	::System::Single HLLPHBNGHPK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET))(this);
	}
};
