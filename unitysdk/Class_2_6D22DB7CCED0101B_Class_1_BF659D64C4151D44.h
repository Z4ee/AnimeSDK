#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_2_6D22DB7CCED0101B;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_6D22DB7CCED0101B_CLASS_1_BF659D64C4151D44_METHOD_1_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x15010670)
#define CLASS_2_6D22DB7CCED0101B_CLASS_1_BF659D64C4151D44_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x150105A0)
#define CLASS_2_6D22DB7CCED0101B_CLASS_1_BF659D64C4151D44__CTOR_OFFSET UNITYSDK_OFFSET(0x15010590)

inline static constexpr unsigned int Class_2_6D22DB7CCED0101B_Class_1_BF659D64C4151D44_TypeDefinitionIndex = 63205;

class Class_2_6D22DB7CCED0101B_Class_1_BF659D64C4151D44 : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::MoleMole::TextureSheetAnimCurveParam* Field_1_0; // 0x18
	::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32>* Field_1_5; // 0x20
	::Class_2_6D22DB7CCED0101B* Field_1_3; // 0x28
	::UnityEngine::Vector4 Field_1_6; // 0x30
	::UnityEngine::Color Field_1_2; // 0x40
	::System::Int32 Field_1_4; // 0x50
	::UnityEngine::Vector4 Field_1_7; // 0x54
	::UnityEngine::Color Field_1_1; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D22DB7CCED0101B_CLASS_1_BF659D64C4151D44__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D22DB7CCED0101B_CLASS_1_BF659D64C4151D44_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D22DB7CCED0101B_CLASS_1_BF659D64C4151D44_METHOD_1_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}
};
