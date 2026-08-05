#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E9529ED64113E4E9;
class Class_5_DCFF91E03A93C03C;
namespace DG::Tweening { class TweenCallback; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_049D0CDAB05162F1_OFFSET UNITYSDK_OFFSET(0x1712B590)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_58D059534BC46B02_1_OFFSET UNITYSDK_OFFSET(0x1712C230)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_58D059534BC46B02_OFFSET UNITYSDK_OFFSET(0x1712BF40)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_BC2B532D3B9882DD_OFFSET UNITYSDK_OFFSET(0x1712C3D0)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A__CTOR_OFFSET UNITYSDK_OFFSET(0x1712B580)

inline static constexpr unsigned int Class_5_DCFF91E03A93C03C_Class_1_F7ECFE5DBEA0D80A_TypeDefinitionIndex = 83215;

class Class_5_DCFF91E03A93C03C_Class_1_F7ECFE5DBEA0D80A : public ::System::Object
{
public:
	::DG::Tweening::TweenCallback* Field_1_13; // 0x10
	::UnityEngine::AnimationCurve* Field_1_8; // 0x18
	::DG::Tweening::TweenCallback* Field_1_14; // 0x20
	::Class_5_DCFF91E03A93C03C* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* Field_1_6; // 0x30
	::UnityEngine::AnimationCurve* Field_1_7; // 0x38
	::System::Single Field_1_15; // 0x40
	::UnityEngine::Vector3 Field_1_4; // 0x44
	::System::Single Field_1_9; // 0x50
	::System::Boolean Field_1_10; // 0x54
	::MoleMole::Vector2Int Field_1_11; // 0x58
	::System::Single Field_1_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_049D0CDAB05162F1(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_049D0CDAB05162F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_58D059534BC46B02()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_58D059534BC46B02_OFFSET))(this);
	}

	::System::Void Method_1_58D059534BC46B02_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_58D059534BC46B02_1_OFFSET))(this);
	}

	::System::Void Method_1_BC2B532D3B9882DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_BC2B532D3B9882DD_OFFSET))(this);
	}
};
