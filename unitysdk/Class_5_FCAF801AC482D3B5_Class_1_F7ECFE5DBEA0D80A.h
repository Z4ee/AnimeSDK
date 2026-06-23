#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E9529ED64113E4E9;
class Class_5_FCAF801AC482D3B5;
namespace DG::Tweening { class TweenCallback; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_049D0CDAB05162F1_OFFSET UNITYSDK_OFFSET(0x15C5B6B0)
#define CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x15C5C070)
#define CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_1_OFFSET UNITYSDK_OFFSET(0x15C5C3A0)
#define CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x15C5B3B0)
#define CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A__CTOR_OFFSET UNITYSDK_OFFSET(0x15C5B3A0)

inline static constexpr unsigned int Class_5_FCAF801AC482D3B5_Class_1_F7ECFE5DBEA0D80A_TypeDefinitionIndex = 71713;

class Class_5_FCAF801AC482D3B5_Class_1_F7ECFE5DBEA0D80A : public ::System::Object
{
public:
	::DG::Tweening::TweenCallback* Field_1_11; // 0x10
	::UnityEngine::AnimationCurve* Field_1_8; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* Field_1_2; // 0x20
	::DG::Tweening::TweenCallback* Field_1_10; // 0x28
	::Class_5_FCAF801AC482D3B5* Field_1_3; // 0x30
	::UnityEngine::AnimationCurve* Field_1_1; // 0x38
	::System::Single Field_1_7; // 0x40
	::System::Single Field_1_9; // 0x44
	::MoleMole::Vector2Int Field_1_5; // 0x48
	::System::Single Field_1_0; // 0x50
	::System::Boolean Field_1_6; // 0x54
	::UnityEngine::Vector3 Field_1_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_049D0CDAB05162F1(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_049D0CDAB05162F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_1_B732DC7FA82BA621_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_1_OFFSET))(this);
	}
};
