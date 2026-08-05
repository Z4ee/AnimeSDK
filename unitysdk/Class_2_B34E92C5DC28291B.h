#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::Video { class VideoPlayer; }

#define CLASS_2_B34E92C5DC28291B_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xFF9E6B0)
#define CLASS_2_B34E92C5DC28291B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFF9E760)
#define CLASS_2_B34E92C5DC28291B_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0xFF9E520)
#define CLASS_2_B34E92C5DC28291B__CTOR_OFFSET UNITYSDK_OFFSET(0xFF9E750)

inline static constexpr unsigned int Class_2_B34E92C5DC28291B_TypeDefinitionIndex = 86185;

class Class_2_B34E92C5DC28291B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_CA67A9CEB871FFD3* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::UnityEngine::Video::VideoPlayer* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B34E92C5DC28291B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
