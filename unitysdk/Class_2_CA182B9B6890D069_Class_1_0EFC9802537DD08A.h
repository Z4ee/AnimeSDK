#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_2_CA182B9B6890D069;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_CA182B9B6890D069_CLASS_1_0EFC9802537DD08A_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x138B6E20)
#define CLASS_2_CA182B9B6890D069_CLASS_1_0EFC9802537DD08A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x138B6DA0)
#define CLASS_2_CA182B9B6890D069_CLASS_1_0EFC9802537DD08A__CTOR_OFFSET UNITYSDK_OFFSET(0x138B6D90)

inline static constexpr unsigned int Class_2_CA182B9B6890D069_Class_1_0EFC9802537DD08A_TypeDefinitionIndex = 39790;

class Class_2_CA182B9B6890D069_Class_1_0EFC9802537DD08A : public ::System::Object
{
public:
	::Class_2_CA182B9B6890D069* Field_1_4; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32>* Field_1_3; // 0x20
	::MoleMole::TextureSheetAnimCurveParam* Field_1_0; // 0x28
	::UnityEngine::Vector4 Field_1_1; // 0x30
	::UnityEngine::Vector4 Field_1_2; // 0x40
	::System::Int32 Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_CLASS_1_0EFC9802537DD08A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_CLASS_1_0EFC9802537DD08A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_CLASS_1_0EFC9802537DD08A_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
