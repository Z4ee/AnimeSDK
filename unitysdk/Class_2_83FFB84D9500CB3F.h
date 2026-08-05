#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_83FFB84D9500CB3F_METHOD_2_069F531B53CCE944_OFFSET UNITYSDK_OFFSET(0x1275DB60)
#define CLASS_2_83FFB84D9500CB3F_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1275DDA0)
#define CLASS_2_83FFB84D9500CB3F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1275DF20)
#define CLASS_2_83FFB84D9500CB3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1275DF10)

inline static constexpr unsigned int Class_2_83FFB84D9500CB3F_TypeDefinitionIndex = 60963;

class Class_2_83FFB84D9500CB3F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::MoleMole::MonoGamepadCustomList* Field_2_10; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x48
	::UnityEngine::Animation* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_069F531B53CCE944(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F_METHOD_2_069F531B53CCE944_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}
};
