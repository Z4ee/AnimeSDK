#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_4_6A0D46987C287112;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }

#define CLASS_4_CB21C395EBBFA036_METHOD_4_00A51EEA9C0BFF46_OFFSET UNITYSDK_OFFSET(0xA9B3640)
#define CLASS_4_CB21C395EBBFA036_METHOD_4_4A2F2968C3A06BC5_OFFSET UNITYSDK_OFFSET(0xA9B3C80)
#define CLASS_4_CB21C395EBBFA036_METHOD_4_6FBC99261445E45A_OFFSET UNITYSDK_OFFSET(0xA9B3D60)
#define CLASS_4_CB21C395EBBFA036_METHOD_4_C3B80FB016EDC4CA_OFFSET UNITYSDK_OFFSET(0xA9B3D50)
#define CLASS_4_CB21C395EBBFA036__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B3630)

inline static constexpr unsigned int Class_4_CB21C395EBBFA036_TypeDefinitionIndex = 63183;

class Class_4_CB21C395EBBFA036 : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_6A0D46987C287112* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_6A0D46987C287112* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_6A0D46987C287112*))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_00A51EEA9C0BFF46(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036_METHOD_4_00A51EEA9C0BFF46_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4A2F2968C3A06BC5(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036_METHOD_4_4A2F2968C3A06BC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_C3B80FB016EDC4CA(::RPG::GameCore::ChimeraDuelModifierContainerNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036_METHOD_4_C3B80FB016EDC4CA_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_6FBC99261445E45A(::RPG::GameCore::ChimeraDuelBranchNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_CB21C395EBBFA036_METHOD_4_6FBC99261445E45A_OFFSET))(this, P0);
	}
};
